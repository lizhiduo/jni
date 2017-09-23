package com.example.lizhiduo.jni;

import android.util.Log;

/**
 * Created by lizhiduo on 17-9-23.
 */

public class JNI {



    public void sayHelloFromJava(){
        Log.d("test_jni", "sayHello From Java");
    }

    public int add(int a, int b){
        Log.d("test_jni", "ret: " + (a+b) );
        return a+b;
    }


    static {
        System.loadLibrary("Hello");
    }

    public static native String sayHello();

    public static native void callBackHelloFromJava();

    public  static native int callBackAdd(int a, int b);

}
