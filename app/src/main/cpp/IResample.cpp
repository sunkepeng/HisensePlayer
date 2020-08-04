//
// Created by sunkepeng on 2020/7/30.
//

#include "IResample.h"
#include "XLog.h"

void IResample::Update(XData data)
{
    XData d = this->Resample(data);
//    XLOGE("his->Resample(data) %d",d.size);
    if(d.size > 0)
    {
        this->Notify(d);
    }
}
