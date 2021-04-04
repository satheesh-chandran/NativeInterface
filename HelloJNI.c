#include "HelloJNI.h"
#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj)
{
  printf("Hello World!\n");
}
