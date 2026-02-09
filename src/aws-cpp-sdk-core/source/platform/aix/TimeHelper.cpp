/* TimeHelper.cpp
   timegm() implementation for AIX platform.
*/

#include <aws/core/platform/Time.h>

#include <time.h>

namespace Aws
{
namespace Time
{
time_t timegm (struct tm *tm)
{
    static const int msum [2][12] = {
        { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334},        /* normal years */
        { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335}        /* leap years */
    };
    static const int mlen [2][12] = {
        { 31, 28, 31, 30,  31,  30,  31,  31,  30,  31,  30, 31},
        { 31, 29, 31, 30,  31,  30,  31,  31,  30,  31,  30, 31}
    };
    static const int tmstr_year= 1900; /* base of 'tm_year' in 'struct tm' */
    static const int epoch_year= 1970; /* unix timestamp epoch */
    static const int base_year=  -9999;  /* start of a 400-year period: used to be 1601,
                                            but this allows larger range (in 64 bit)
                                            mind you, this is proleptic Gregorian */
    int year, ytmp, dtmp, ytmpe, dtmpe;
    int isleapyear;
    long long t;

    if (!tm) return -1;

    year = tm->tm_year + tmstr_year;
    isleapyear= (year%4==0) - (year%100==0) + (year%400==0);

    if (year<-9999    || year>9999  ||
        tm->tm_mon<0  || tm->tm_mon>11 ||
        tm->tm_mday<1 || tm->tm_mday>mlen[isleapyear][tm->tm_mon] ||
        tm->tm_hour<0 || tm->tm_hour>23 ||
        tm->tm_min<0  || tm->tm_min>59 ||
        tm->tm_min<0  || tm->tm_sec>59) return -1;

/* days between 'current year' and 'epoch_year' has to be calculated
   in three steps: */

/* 1. days between current year and 'base_year' */
    ytmp = year - base_year;
    dtmp = ytmp*365 + ytmp/4 - ytmp/100 + ytmp/400;

/* 2. days between 'epoch year' and 'base_year' */
    ytmpe = epoch_year - base_year;
    dtmpe = ytmpe*365 + ytmpe/4 - ytmpe/100 + ytmpe/400;

/* 3. days between 'current year' and 'epoch_year' */
    t  = dtmp - dtmpe;

    t += msum[isleapyear][tm->tm_mon];
    t += tm->tm_mday-1;

    tm->tm_wday = (t+4)%7;/* 0..6=Sun..Sat; adding 4 to adjust 1970.01.01.=Thursday; */
    if (tm->tm_wday<0) tm->tm_wday += 7;
    tm->tm_yday = msum[isleapyear][tm->tm_mon] + tm->tm_mday-1;
    tm->tm_isdst= 0;

    t  = t*24 + tm->tm_hour;
    t  = t*60 + tm->tm_min;
    t  = t*60 + tm->tm_sec;

#if LONG_MAX == 2147483647L
    if (t<LONG_MIN || t>LONG_MAX) {
        t= -1;
    }
#endif

    return t;
}

} // namespace Time
} // namespace Aws
