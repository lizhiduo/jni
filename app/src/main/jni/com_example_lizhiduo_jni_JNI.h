/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_lizhiduo_jni_JNI */

#ifndef _Included_com_example_lizhiduo_jni_JNI
#define _Included_com_example_lizhiduo_jni_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_lizhiduo_jni_JNI
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_lizhiduo_jni_JNI_sayHello
  (JNIEnv *, jclass);

/*
 * Class:     com_example_lizhiduo_jni_JNI
 * Method:    callBackHelloFromJava
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_lizhiduo_jni_JNI_callBackHelloFromJava
  (JNIEnv *, jclass);

/*
 * Class:     com_example_lizhiduo_jni_JNI
 * Method:    callBackAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_example_lizhiduo_jni_JNI_callBackAdd
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif