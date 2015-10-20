/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * 
 *  http://aws.amazon.com/apache2.0
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#include <aws/testing/android/AndroidTesting.h>

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <android/log.h>
#include <chrono>
#include <thread>

#include <aws/external/gtest.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/logging/AWSLogging.h>
#include <aws/core/utils/logging/android/LogcatLogSystem.h>
#include <aws/testing/MemoryTesting.h>

#include <jni.h>
#include <iostream>

/*
This redirect solution is based on a blog post found at:
    https://codelab.wordpress.com/2014/11/03/how-to-use-standard-output-streams-for-logging-in-android-apps/

The logging thread function has been reworked substantially to format output correctly.

 */
static int pfd[2];
static pthread_t thr;
static const char *tag = "NativeSDK";

static void *LoggingFunction(void*)
{
  ssize_t rdsz;
  char buf[128];

  std::string logLine;
  while((rdsz = read(pfd[0], buf, sizeof(buf) - 1)) > 0) 
  {
    size_t start = 0;
    size_t current = 0;
    size_t end = rdsz;
    while( current < end )
    {
      if(buf[current] == '\n')
      {
	logLine.append(buf + start, current - start);
	__android_log_write(ANDROID_LOG_DEBUG, tag, logLine.c_str());
	++current;
	start = current;
	logLine = "";
      }
      else
      {
        ++current;
      }
    }

    if( current - start > 0 )
    {
      logLine.append(buf + start, current - start);
    }
  }
  
  return 0;
}

static int StartLogger()
{
    /* make stdout line-buffered and stderr unbuffered */
    setvbuf(stdout, 0, _IOLBF, 0);
    setvbuf(stderr, 0, _IONBF, 0);

    /* create the pipe and redirect stdout and stderr */
    pipe(pfd);
    dup2(pfd[1], 1);
    dup2(pfd[1], 2);

    /* spawn the logging thread */
    if(pthread_create(&thr, 0, LoggingFunction, 0) == -1)
        return -1;
    pthread_detach(thr);
    return 0;
}

void RedirectStdoutToLogcat()
{
  StartLogger();

  std::this_thread::sleep_for(std::chrono::seconds(1));
}

#ifdef __ANDROID__

static const char* ALLOCATION_TAG = "AndroidTests";

#pragma GCC diagnostic ignored "-Wwrite-strings"

static jint RunAndroidTestsInternal()
{
  RedirectStdoutToLogcat();

  std::cout << "Running all enabled Android tests" << std::endl;

  int dummy = 1;
  static char *dummy2 = "Stuff";

  Aws::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Aws::Utils::Logging::LogcatLogSystem>(ALLOCATION_TAG, Aws::Utils::Logging::LogLevel::Fatal));
  ::testing::InitGoogleTest(&dummy, &dummy2);
  auto result = RUN_ALL_TESTS();

  std::this_thread::sleep_for(std::chrono::seconds(3));

  Aws::Utils::Logging::ShutdownAWSLogging();

  return (jint) result;
}

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

JNIEXPORT jint JNICALL
Java_aws_coretests_TestActivity_runTests( JNIEnv* env, jobject thisRef )
{
  jint result = 0;

  AWS_BEGIN_MEMORY_TEST(1024, 128)

  result = RunAndroidTestsInternal();

  AWS_END_MEMORY_OVERRIDE

  return result;
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //  __ANDROID__
