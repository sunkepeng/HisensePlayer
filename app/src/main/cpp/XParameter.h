//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_XPARAMETER_H
#define HISENSEPLAYER_XPARAMETER_H

struct AVCodecParameters;
class XParameter {
public:
    AVCodecParameters *para = 0;
    int channels = 2;
    int sample_rate = 44100;
};


#endif //HISENSEPLAYER_XPARAMETER_H
