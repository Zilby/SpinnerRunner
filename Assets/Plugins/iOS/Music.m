#import <Foundation/Foundation.h>
#import <AVFoundation/AVAudioSession.h>
#include "Music.h"

bool _IsMusicPlaying ()
{
  bool isOtherAudioPlaying = [[AVAudioSession sharedInstance] isOtherAudioPlaying];
  return isOtherAudioPlaying;
}
