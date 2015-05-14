#include <aws/testing/android/AndroidTesting.h>

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <android/log.h>
#include <chrono>
#include <thread>

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
