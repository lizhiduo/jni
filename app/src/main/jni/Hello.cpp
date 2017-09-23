//
// Created by lizhiduo on 17-9-23.
//

#include "com_example_lizhiduo_jni_JNI.h"


JNIEXPORT jstring JNICALL Java_com_example_lizhiduo_jni_JNI_sayHello
        (JNIEnv * env, jclass obj){

    return env->NewStringUTF("hello from jni");

  }

JNIEXPORT void JNICALL Java_com_example_lizhiduo_jni_JNI_callBackHelloFromJava
        (JNIEnv * env, jclass obj){
    //1 得到字节码
    jclass  jclass1 = env->FindClass( "com/example/lizhiduo/jni/JNI");
    //jclass  jclass1 = env->GetObjectClass( obj);
    //2 得到方法  方法签名 ()V
    jmethodID jmethodID1 = env->GetMethodID( jclass1, "sayHelloFromJava", "()V");
    //3 实例化对象
    jobject jobject1 = env->AllocObject( jclass1);
    //4 调用方法
    env->CallVoidMethod( jobject1, jmethodID1);


}

JNIEXPORT jint JNICALL Java_com_example_lizhiduo_jni_JNI_callBackAdd
        (JNIEnv *env, jclass obj, jint a, jint b){

    //1 得到字节码
    jclass  jclass1 = env->FindClass( "com/example/lizhiduo/jni/JNI");
    //2 得到方法  方法签名 ()V
    jmethodID jmethodID1 = env->GetMethodID( jclass1, "add", "(II)I");
    //3 实例化对象
    jobject jobject1 = env->AllocObject( jclass1);
    //4 调用方法
    jint val = env->CallIntMethod( jobject1, jmethodID1, a, b);

    return val;
}