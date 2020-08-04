//
// Created by sunkepeng on 2020/7/29.
//

#ifndef HISENSEPLAYER_XLOG_H
#define HISENSEPLAYER_XLOG_H


class XLog {

};
#ifdef ANDROID
#include <android/log.h>
#define XLOGD(...) __android_log_print(ANDROID_LOG_DEBUG,"HisensePlayer",__VA_ARGS__)
#define XLOGI(...) __android_log_print(ANDROID_LOG_INFO,"HisensePlayer",__VA_ARGS__)
#define XLOGE(...) __android_log_print(ANDROID_LOG_ERROR,"HisensePlayer",__VA_ARGS__)
#else
#define XLOGD(...) printf("HisensePlayer",__VA_ARGS__)
#define XLOGI(...) printf("HisensePlayer",__VA_ARGS__)
#define XLOGE(...) printf("HisensePlayer",__VA_ARGS__)

#endif


#endif //HISENSEPLAYER_XLOG_H
