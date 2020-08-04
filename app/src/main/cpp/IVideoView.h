//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_IVIDEOVIEW_H
#define HISENSEPLAYER_IVIDEOVIEW_H

#include "XData.h"
#include "IObserver.h"

class IVideoView: public IObserver {

public:
    virtual void SetRender(void *win) = 0;
    virtual void Render(XData data) = 0;
    virtual void Update(XData data);
    virtual void Close() = 0;
};


#endif //HISENSEPLAYER_IVIDEOVIEW_H
