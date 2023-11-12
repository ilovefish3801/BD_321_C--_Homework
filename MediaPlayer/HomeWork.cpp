#include <iostream>
#include "MediaPlayer.h"
#include "AudioPlayer.h"
#include "VideoPlayer.h"

using namespace std;




int main()
{
    AudioPlayer audio;
    audio.volumeUp();

    VideoPlayer video;
    video.rewind();

    return 0;
}