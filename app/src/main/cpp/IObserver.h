//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_IOBSERVER_H
#define HISENSEPLAYER_IOBSERVER_H

#include "XData.h"
#include "XThread.h"
#include <vector>
#include <mutex>

//观察者 和 主体
class IObserver: public XThread {

public:
    //观察者接收数据函数
    virtual void Update(XData data) {}

    //主体函数 添加观察者(线程安全)
    void AddObs(IObserver *obs);

    //通知所有观察者(线程安全)
    void Notify(XData data);

protected:
    std::vector<IObserver *>obss;
    std::mutex mux;
};


#endif //HISENSEPLAYER_IOBSERVER_H
