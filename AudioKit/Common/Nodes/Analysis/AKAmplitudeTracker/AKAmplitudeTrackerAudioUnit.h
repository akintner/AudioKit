//
//  AKAmplitudeTrackerAudioUnit.h
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#ifndef AKAmplitudeTrackerAudioUnit_h
#define AKAmplitudeTrackerAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

@interface AKAmplitudeTrackerAudioUnit : AUAudioUnit
- (float)getAmplitude;
@end

#endif /* AKAmplitudeTrackerAudioUnit_h */