//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_GLVIDEOVIEW_H
#define HISENSEPLAYER_GLVIDEOVIEW_H

#include "XData.h"
#include "IVideoView.h"

class XTexture;

class GLVideoView: public IVideoView {

public:
    virtual void SetRender(void *win);
    virtual void Render(XData data);
    virtual void Close();

protected:
    void *view = 0;
    XTexture *txt = 0;
    std::mutex mux;
};


#endif //HISENSEPLAYER_GLVIDEOVIEW_H
