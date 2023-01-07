/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <jni.h>

#include <aws/testing/platform/android/AndroidTesting.h>


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

JNIEXPORT jint JNICALL
Java_aws_androidsdktesting_RunSDKTests_linkTest( JNIEnv* env, jobject classRef, jobject context )
{
    return Java_aws_androidsdktesting_RunSDKTests_runTests(env, classRef, context);
}

#ifdef __cplusplus
}
#endif // __cplusplus




