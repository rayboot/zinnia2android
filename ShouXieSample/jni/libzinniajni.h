#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

//----------------------------------------------charater method

jlong Java_com_rayboot_ShouXieSample_MyActivity_characterNew
(JNIEnv *envenv, jobject jobj);

void Java_com_rayboot_ShouXieSample_MyActivity_characterDestroy
(JNIEnv *env, jobject jobj, jlong character);

void Java_com_rayboot_ShouXieSample_MyActivity_characterSetValueForString
(JNIEnv *, jobject, jlong, jstring);

void Java_com_rayboot_ShouXieSample_MyActivity_characterSetValueForLong
(JNIEnv *, jobject, jlong, jstring, jlong);

jstring Java_com_rayboot_ShouXieSample_MyActivity_characterValue
(JNIEnv *, jobject, jlong);

void Java_com_rayboot_ShouXieSample_MyActivity_characterSetWidth
(JNIEnv *, jobject, jlong, jlong);

void Java_com_rayboot_ShouXieSample_MyActivity_characterSetHeight
(JNIEnv *, jobject, jlong, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_characterWidth
(JNIEnv *, jobject, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_characterHeight
(JNIEnv *, jobject, jlong);

void Java_com_rayboot_ShouXieSample_MyActivity_characterClear
(JNIEnv *, jobject, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_characterAdd
(JNIEnv *, jobject, jlong, jlong, jint, jint);

jlong Java_com_rayboot_ShouXieSample_MyActivity_characterStrokesSize
(JNIEnv *, jobject, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_characterStrokeSize
(JNIEnv *, jobject, jlong, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_characterX
(JNIEnv *, jobject, jlong, jlong, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_characterY
(JNIEnv *, jobject, jlong, jlong, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_characterParse
(JNIEnv *, jobject, jlong, jstring);

jint Java_com_rayboot_ShouXieSample_MyActivity_characterParse2
(JNIEnv *, jobject, jlong, jstring, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_1characterToString
(JNIEnv *, jobject, jlong, jstring, jlong);

jstring Java_com_rayboot_ShouXieSample_MyActivity_characterStrerror
(JNIEnv *, jobject, jlong);


//------------------------------------------------------result method

jstring Java_com_rayboot_ShouXieSample_MyActivity_resultValue
(JNIEnv *, jobject, jlong, jlong);

jfloat Java_com_rayboot_ShouXieSample_MyActivity_resultScore
(JNIEnv *, jobject, jlong, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_resultSize
(JNIEnv *, jobject, jlong);

void Java_com_rayboot_ShouXieSample_MyActivity_resultDestroy
(JNIEnv *, jobject, jlong);


//recognizer method

jlong Java_com_rayboot_ShouXieSample_MyActivity_recognizerNew
(JNIEnv *, jobject);

void Java_com_rayboot_ShouXieSample_MyActivity_recognizerDestroy
(JNIEnv *, jobject, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_recognizerOpen
(JNIEnv *, jobject, jlong, jstring);

jint Java_com_rayboot_ShouXieSample_MyActivity_recognizerOpenFromPtr
(JNIEnv *, jobject, jlong, jstring, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_recognizerClose
(JNIEnv *, jobject, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_recognizerSize
(JNIEnv *, jobject, jlong);

jstring Java_com_rayboot_ShouXieSample_MyActivity_recognizerValue
(JNIEnv *, jobject, jlong, jlong);

jstring Java_com_rayboot_ShouXieSample_MyActivity_recognizerStrerror
(JNIEnv *, jobject, jlong);

jlong Java_com_rayboot_ShouXieSample_MyActivity_recognizerClassify
(JNIEnv *, jobject, jlong, jlong, jlong);


//trainer method

jlong Java_com_rayboot_ShouXieSample_MyActivity_trainerNew
(JNIEnv *, jobject);

void Java_com_rayboot_ShouXieSample_MyActivity_trainerDestroy
(JNIEnv *, jobject, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_trainerAdd
(JNIEnv *, jobject, jlong, jlong);

void Java_com_rayboot_ShouXieSample_MyActivity_trainerClear
(JNIEnv *, jobject, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_trainerTrain
(JNIEnv *, jobject, jlong, jstring);

jstring Java_com_rayboot_ShouXieSample_MyActivity_trainerStrerror
(JNIEnv *, jobject, jlong);

jint Java_com_rayboot_ShouXieSample_MyActivity_trainerConvertModel
(JNIEnv *, jobject, jstring, jstring, jdouble);

jint Java_com_rayboot_ShouXieSample_MyActivity_trainerMakeHeader
(JNIEnv *, jobject, jstring, jstring, jstring, jdouble);

#ifdef __cplusplus
}
#endif