//
// Created by sunkepeng on 2020/7/29.
//

#include "IDemux.h"
#include "XLog.h"

void IDemux::Main()
{
    while(!isExit)
    {
        if(IsPause())
        {
            XSleep(2);
            continue;
        }

        XData d = Read();
        if(d.size > 0)
            Notify(d);
        else
            XSleep(2);
    }
}
