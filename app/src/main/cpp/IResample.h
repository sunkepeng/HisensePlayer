//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_IRESAMPLE_H
#define HISENSEPLAYER_IRESAMPLE_H

#include "XParameter.h"
#include "IObserver.h"

class IResample: public IObserver {

public:
    virtual bool Open(XParameter in,XParameter out=XParameter()) = 0;
    virtual XData Resample(XData indata) = 0;
    virtual void Close() = 0;
    virtual void Update(XData data);
    int outChannels = 2;
    int outFormat = 1;
};


#endif //HISENSEPLAYER_IRESAMPLE_H
