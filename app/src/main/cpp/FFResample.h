//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_FFRESAMPLE_H
#define HISENSEPLAYER_FFRESAMPLE_H

#include "IResample.h"
struct SwrContext;

class FFResample: public IResample {

public:
    virtual bool Open(XParameter in,XParameter out=XParameter());
    virtual void Close();
    virtual XData Resample(XData indata);

protected:
    SwrContext *actx = 0;
    std::mutex mux;
};


#endif //HISENSEPLAYER_FFRESAMPLE_H
