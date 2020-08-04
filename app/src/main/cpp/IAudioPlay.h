//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_IAUDIOPLAY_H
#define HISENSEPLAYER_IAUDIOPLAY_H

#include <list>
#include "IObserver.h"
#include "XParameter.h"

class IAudioPlay: public IObserver {

public:
    //缓冲满后阻塞
    virtual void Update(XData data);

    //获取缓冲数据，如没有则阻塞
    virtual XData GetData();

    virtual bool StartPlay(XParameter out) = 0;
    virtual void Close() = 0;
    virtual void Clear();

    //最大缓冲
    int maxFrame = 100;
    int pts = 0;

protected:
    std::list <XData> frames;
    std::mutex framesMutex;
};


#endif //HISENSEPLAYER_IAUDIOPLAY_H
