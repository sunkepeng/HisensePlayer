//
// Created by sunkepeng on 2020/7/30.
//

#ifndef HISENSEPLAYER_XEGL_H
#define HISENSEPLAYER_XEGL_H


class XEGL
{
public:
    virtual bool Init(void *win) = 0;
    virtual void Close() = 0;
    virtual void Draw() = 0;
    static XEGL *Get();

protected:
    XEGL(){}
};


#endif //HISENSEPLAYER_XEGL_H
