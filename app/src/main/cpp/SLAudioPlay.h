//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_SLAUDIOPLAY_H
#define HISENSEPLAYER_SLAUDIOPLAY_H

#include "IAudioPlay.h"

class SLAudioPlay: public IAudioPlay {

public:
    virtual bool StartPlay(XParameter out);
    virtual void Close();
    void PlayCall(void *bufq);

    SLAudioPlay();
    virtual ~SLAudioPlay();

protected:
    unsigned char *buf = 0;
    std::mutex mux;
};


#endif //HISENSEPLAYER_SLAUDIOPLAY_H
