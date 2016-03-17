/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class MicServer */

#ifndef _Included_MicServer
#define _Included_MicServer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     MicServer
 * Method:    connectSmartSpace
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_MicServer_connectSmartSpace
  (JNIEnv *, jclass, jstring, jstring, jint);


/*
 * Class:     MicServer
 * Method:    publishData
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_MicServer_publishData
  (JNIEnv *, jclass, jstring, jstring);
  
  
/*
 * Class:     MicServer
 * Method:    publishData
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT void JNICALL Java_MicServer_deletePublishedData
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif