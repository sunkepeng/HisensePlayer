//
// Created by sunkepeng on 2020/7/29.
//

#include <jni.h>
#include <string>
#include <android/native_window_jni.h>

#include "XLog.h"
#include "IPlayerPorxy.h"

extern "C"
JNIEXPORT
jint JNI_OnLoad(JavaVM *vm,void *res)
{
    IPlayerPorxy::Get()->Init(vm);

    /*IPlayerPorxy::Get()->Start();

    IPlayerPorxy::Get()->Open("/sdcard/Movies/1080.mp4");
    IPlayerPorxy::Get()->Start();*/

    return JNI_VERSION_1_4;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_hisense_hisenseplayer_XPlay_InitView(JNIEnv *env, jobject instance, jobject surface) {

    ANativeWindow *win = ANativeWindow_fromSurface(env,surface);
    IPlayerPorxy::Get()->InitView(win);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_hisense_hisenseplayer_OpenUrl_Open(JNIEnv *env, jobject instance, jstring url_) {
    const char *url = env->GetStringUTFChars(url_, 0);

    IPlayerPorxy::Get()->Open(url);
    IPlayerPorxy::Get()->Start();
    //IPlayerPorxy::Get()->Seek(0.5);

    env->ReleaseStringUTFChars(url_, url);
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_hisense_hisenseplayer_MainActivity_PlayPos(JNIEnv *env, jobject instance) {
    return IPlayerPorxy::Get()->PlayPos();
}

extern "C"
JNIEXPORT void JNICALL
Java_com_hisense_hisenseplayer_MainActivity_Seek(JNIEnv *env, jobject instance, jdouble pos) {
    IPlayerPorxy::Get()->Seek(pos);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_hisense_hisenseplayer_XPlay_PlayOrPause(JNIEnv *env, jobject instance) {
    IPlayerPorxy::Get()->SetPause(!IPlayerPorxy::Get()->IsPause());
}