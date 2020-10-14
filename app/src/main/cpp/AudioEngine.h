//
// Created by Matt Hill on 10/13/20.
//


#include <aaudio/AAudio.h>
#include "Oscillator.h"

class AudioEngine {
public:
        bool start();
        void stop();
        void restart();
        void setToneOn(bool isToneOn);

private:
    Oscillator osc_;
    AAudioStream *stream_;
};



