/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/testing/Testing_EXPORTS.h>

void AWS_TESTING_API RedirectStdoutToLogcat();

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

JNIEXPORT jint JNICALL
AWS_TESTING_API Java_aws_androidsdktesting_RunSDKTests_runTests( JNIEnv* env, jobject classRef, jobject context );

#ifdef __cplusplus
}
#endif // __cplusplus
