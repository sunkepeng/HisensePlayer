package com.hisense.hisenseplayer;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.AttributeSet;
import android.view.SurfaceHolder;
import android.view.View;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/**
 * @author sunkepeng Email:sunkepengouc@163.com
 * @date 2020/7/30 12:18
 */
public class XPlay extends GLSurfaceView implements SurfaceHolder.Callback,GLSurfaceView.Renderer, View.OnClickListener{

    public XPlay(Context context, AttributeSet attrs) {
        super( context, attrs );

        //android 8.0 及以上需要设置
        setRenderer((Renderer) this);
        setOnClickListener((OnClickListener) this);
    }
    @Override
    public void surfaceCreated(SurfaceHolder holder)
    {
        //初始化opengl egl 显示
        InitView(holder.getSurface());

        //只有在绘制数据改变时才绘制view，可以防止GLSurfaceView帧重绘
        //setRenderMode(GLSurfaceView.RENDERMODE_WHEN_DIRTY);
    }

    @Override
    public void surfaceChanged(SurfaceHolder var1, int var2, int var3, int var4)
    {

    }

    @Override
    public void surfaceDestroyed(SurfaceHolder var1)
    {

    }

    public native void InitView(Object surface);

    @Override
    public void onSurfaceCreated(GL10 gl10, EGLConfig eglConfig) {

    }

    @Override
    public void onSurfaceChanged(GL10 gl10, int i, int i1) {

    }

    @Override
    public void onDrawFrame(GL10 gl10) {

    }

    @Override
    public void onClick(View view) {
        PlayOrPause();
    }
    public native void PlayOrPause();
}
