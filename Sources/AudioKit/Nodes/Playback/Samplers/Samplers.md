# AudioKit's samplers

The term "sampler" is a bit misleading. Originally, it referred to a hardware device capable of recording ("sampling") sound and then re-playing it from a keyboard. In practice, the playback aspect proved to be far more popular then the recording aspect, and today the two functions are nearly always completely separated. What we call a "sampler" today is simply a system for replaying previously-prepared sounds ("samples").

AudioKit offers three different sampler modules:

1. **AppleSampler** is a Swift wrapper for *AUSampler*, a powerful sampler Audio Unit built into both the iOS and macOS operating systems. It is most commonly used via the higher-level Swift wrapper class **MIDISampler**.
2. **Sampler** is a polyphonic Audio Unit with a platform-agnostic C++ core and a Swift wrapper (with a thin Objective-C layer in between). It reads standard audio files via **AVAudioFile**, as well as a more efficient [Wavpack](http://www.wavpack.com/)-based compressed format.

## AppleSampler and MIDISampler
**NOTE:** In earlier versions of AudioKit, **AppleSampler** was called **Sampler**.

Apple's *AUSampler* Audio Unit, despite a few unfortunate flaws, is exceptionally powerful, and has served as the basis for countless sample-based iOS music apps. It has five huge advantages over the other two sampler modules:

1. *Streaming:* AUSampler plays sample data directly from files; it is not necessary to pre-load samples into memory.
2. AUSampler is *polytimbral:* Sounds can be defined using multiple *layers*, so each note can involve multiple samples played back in different combinations. Each layer can optionally include a low-pass filter with resonance, one or more envelope generators, and one or more LFOs for modulation.
3. It features a *modular architecture*, where the number and interconnection of sample oscillators and LFOs in each layer can be defined dynamically, expressed in a "metadata" file.
4. It can *import multiple metadata file formats*, which describe how whole sets of samples are mapped across the MIDI keyboard and affected by MIDI key velocity, together with layer structures, modulation, etc.
5. The Mac version can be loaded as a plug-in into a DAW such as *Logic Pro X*, and includes a GUI for defining layer structures, modulation and real-time MIDI control, and the mapping of MIDI note/velocity to samples.

Unfortunately, *AUSampler* has some fatal flaws, and indeed appears to be an unfinished project. Using it as a plug-in on the Mac, to develop sample-based instruments (sample sets + metadata) tends to be an exercise in frustration. It can crash the DAW. Using AUSamplers plug-in in a DAW gives a GUI which is supposed to be able to read [SoundFont](https://www.lifewire.com/sfz-file-2622282), DLS and EXS24 metadata files, but in practice rarely does so perfectly. Its native `.aupreset` metadata format, which is a [Property List](https://developer.apple.com/library/content/documentation/Cocoa/Conceptual/PropertyLists/Introduction/Introduction.html), is undocumented and confusing. The  `.aupreset` can be edited within Xcode Property List editor. After converting a EXS24 or before deploying to iOS usually the paths need to be manually fixed. See [Apple Technical Note TN2283](https://developer.apple.com/library/content/technotes/tn2283/_index.html). The  `.aupreset` can also be programmatically edited using **PresetManager** and **PresetBuilder**. [External example in StackOverflow](https://stackoverflow.com/questions/47359088/playing-multi-sampled-instruments-using-audiokit-controlling-adsr-envelope/47370008#47370008).

The AudioKit class **AppleSampler** basically just wraps an instance of *AUsampler* and makes its Objective-C based API accessible from Swift. Most music apps use the higher-level **MIDISampler** class, whose `enableMIDI()` function connects it directly to the stream of incoming MIDI data.

## Sampler
**Sampler** is a second attempt to address the limitations of *AUSampler*. Like *AUSampler*/**AppleSampler**, it is 64-voice polyphonic and features a per-voice, stereo low-pass filter with resonance and ADSR envelopes for both amplitude and filter cutoff. Samples must be loaded into memory and remain resident there; it does not do streaming.

Sampler is very new, and as this document is being written, still has a few bugs, especially when the per-voice filters are enabled. It remains under very active development, so users are encouraged to check the latest version in the *develop* branch of the main AudioKit repo in GitHub, and also to report bugs on GitHub and ask questions on [StackOverflow](https:stackoverflow.com) (remember to use the "tag" *AudioKit*).

Refer to [Sampler.md](Sampler.md) for more details about **Sampler**.
