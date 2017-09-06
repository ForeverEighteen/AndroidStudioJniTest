#include "com_example_tsing_myapplication3_jniutil.h"
/*
* Class:     com_xyzlf_jni_demo_JniUtil
* Method:    getStringFromJni
* Signature: ()Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_example_tsing_myapplication3_jniutil_sayHello
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "这里是来自c的string");
}