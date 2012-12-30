//
//  OCSFoundation.h
//  OCS iPad Examples
//
//  Created by Aurelius Prochazka on 11/15/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#ifndef OCS_iPad_Examples_OCSFoundation_h
#define OCS_iPad_Examples_OCSFoundation_h

#import "OCSManager.h"
#import "OCSOrchestra.h"
#import "OCSInstrument.h"
#import "OCSSequence.h"
#import "OCSEvent.h"
#import "OCSNote.h"

#import "OCSParameter.h"
#import "OCSAudio.h"
#import "OCSControl.h"
#import "OCSInstrumentProperty.h"
#import "OCSConstant.h"
#import "OCSNoteProperty.h"

// Ftables

#import "OCSAdditiveCosineTable.h"
#import "OCSArrayTable.h"
#import "OCSCompositeWaveformsFromSines.h"
#import "OCSExponentialCurvesTable.h"
#import "OCSFTable.h"
#import "OCSLineSegmentTable.h"
#import "OCSRandomDistributionTable.h"
#import "OCSSineTable.h"
#import "OCSSoundFileTable.h"
#import "OCSWindowsTable.h"

// Operations

// Analysis
#import "OCSTrackedAmplitude.h"
#import "OCSTrackedFrequency.h"

// Mathematical Operations
#import "OCSAssignment.h"
#import "OCSMixedAudio.h"
#import "OCSMixedControl.h"
#import "OCSProduct.h"
#import "OCSScaledControl.h"
#import "OCSSum.h"
#import "OCSTableValue.h"
#import "OCSTableValueConstant.h"
#import "OCSTableValueControl.h"

// Phase Vocoder Streaming
#import "OCSAudioFromFSignal.h"
#import "OCSFSignalFromMonoAudio.h"
#import "OCSFSignalMix.h"
#import "OCSScaledFSignal.h"

// Signal Generators
#import "OCSAdditiveCosines.h"
#import "OCSFMOscillator.h"
#import "OCSGrain.h"
#import "OCSLine.h"
#import "OCSLinearControl.h"
#import "OCSLinearADSRAudioEnvelope.h"
#import "OCSLinearADSRControlEnvelope.h"
#import "OCSLinearAudioEnvelope.h"
#import "OCSLinearControlEnvelope.h"
#import "OCSLowFrequencyOscillatingControl.h"
#import "OCSLowFrequencyOscillator.h"
#import "OCSMandolin.h"
#import "OCSOscillatingControl.h"
#import "OCSOscillator.h"
#import "OCSSineOscillator.h"
#import "OCSPhasingControl.h"
#import "OCSPhasor.h"
#import "OCSRandomAudio.h"
#import "OCSRandomControl.h"
#import "OCSAudioSegmentArray.h"
#import "OCSControlSegmentArray.h"
#import "OCSControlSegmentArrayLoop.h"
#import "OCSSinusoidBursts.h"
#import "OCSVCOscillator.h"
#import "OCSMarimba.h"
#import "OCSPluckedString.h"
#import "OCSStruckMetalBar.h"
#import "OCSVibes.h"
#import "OCSBamboo.h"
#import "OCSCabasa.h"
#import "OCSCrunch.h"
#import "OCSDroplet.h"
#import "OCSGuiro.h"
#import "OCSSandPaper.h"
#import "OCSSekere.h"
#import "OCSSleighbells.h"
#import "OCSStick.h"
#import "OCSTambourine.h"
#import "OCSBowedString.h"

// Signal Input and Output
#import "OCSAudioInput.h"
#import "OCSAudioOutput.h"
#import "OCSFileInput.h"
#import "OCSFTablelooper.h"
#import "OCSLoopingOscillator.h"
#import "OCSLoopingStereoOscillator.h"

// Signal Modifiers
#import "OCSBalance.h"
#import "OCSBallWithinTheBoxReverb.h"
#import "OCSBandPassButterworthFilter.h"
#import "OCSBandRejectButterworthFilter.h"
#import "OCSCompressor.h"
#import "OCSConvolution.h"
#import "OCSDelay.h"
#import "OCSDopplerEffect.h"
#import "OCSDCBlock.h"
#import "OCSEqualizerFilter.h"
#import "OCSFlanger.h"
#import "OCSHighPassButterworthFilter.h"
#import "OCSHighPassFilter.h"
#import "OCSHilbertTransformer.h"
#import "OCSLowPassButterworthFilter.h"
#import "OCSLowPassControlFilter.h"
#import "OCSLowPassFilter.h"
#import "OCSMoogVCF.h"
#import "OCSMoogLadder.h"
#import "OCSNReverb.h"
#import "OCSPanner.h"
#import "OCSPortamento.h"
#import "OCSReverb.h"
#import "OCSReverbAllpass.h"
#import "OCSStereoConvolution.h"
#import "OCSThreePoleLowpassFilter.h"
#import "OCSVariableDelay.h"
#import "OCSVibrato.h"
#import "OCSDeclick.h"

#endif
