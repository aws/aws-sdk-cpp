/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/utils/DateTime.h>

using namespace Aws::Utils;

TEST(DateTimeTest, TestDefault)
{
    DateTime defaultDate;
    ASSERT_TRUE(defaultDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Thursday, defaultDate.GetDayOfWeek());
    ASSERT_EQ(01, defaultDate.GetDay());
    ASSERT_EQ(Month::January, defaultDate.GetMonth());
    ASSERT_EQ(1970, defaultDate.GetYear());
    ASSERT_EQ(0, defaultDate.GetHour());
    ASSERT_EQ(0, defaultDate.GetMinute());
    ASSERT_EQ(0, defaultDate.GetSecond());
    ASSERT_EQ("Thu, 01 Jan 1970 00:00:00 GMT", defaultDate.ToGmtString(DateFormat::RFC822));
}

TEST(DateTimeTest, TestRFC822Parsing)
{
    const char* gmtDateStr = "Wed, 02 Oct 2002 08:05:09 GMT";
    const char* twoDigitYearVersion = "Wed, 02 Oct 02 08:05:09 GMT";
    const char* utcOffsetVersion = "Wed, 02 Oct 2002 08:05:09 +0000";
    DateTime gmtDate(gmtDateStr, DateFormat::RFC822);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ(gmtDateStr, gmtDate.ToGmtString(DateFormat::RFC822));

    ASSERT_EQ(gmtDate, DateTime(twoDigitYearVersion, DateFormat::RFC822));
    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::RFC822));
}

TEST(DateTimeTest, TestRFC822Parsing_DOS_Stopped)
{
    const char* gmtDateStr = "Weddkasdiweijbnawei8eriojngsdgasdgsdf1gasd8asdgfasdfgsdikweisdfksdnsdksdklasdfsdklasdfdfsdfsdfsdfsadfasdafsdfgjjfgghdfgsdfsfsdfsdfasdfsdfasdfsdfasdfsdf";
    DateTime date(gmtDateStr, DateFormat::RFC822);
    ASSERT_FALSE(date.WasParseSuccessful());
}

TEST(DateTimeTest, TestRFC822Parsing_WrongFormat)
{
    const char* gmtDateStr = "Wed, 02 Oct 2002";
    DateTime gmtDate(gmtDateStr, DateFormat::RFC822);
    ASSERT_FALSE(gmtDate.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601Parsing)
{
    const char* gmtDateStr = "2002-10-02T08:05:09Z";
    const char* utcOffsetVersion = "2002-10-02T08:05:09+00:00";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ(gmtDateStr, gmtDate.ToGmtString(DateFormat::ISO_8601));

    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::ISO_8601));
}

TEST(DateTimeTest, TestISO_8601BasicParsing)
{
    const char* gmtDateStr = "20021002T080509Z";
    const char* utcOffsetVersion = "20021002T080509+0000";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601_BASIC);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ(gmtDateStr, gmtDate.ToGmtString(DateFormat::ISO_8601_BASIC));

    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::ISO_8601_BASIC));
}

TEST(DateTimeTest, TestISO_8601ParsingMSPrecision)
{
    const char* gmtDateStr = "2002-10-02T08:05:09.000Z";
    const char* utcOffsetVersion = "2002-10-02T08:05:09.000+00:00";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ("2002-10-02T08:05:09Z", gmtDate.ToGmtString(DateFormat::ISO_8601));

    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::ISO_8601));
}

TEST(DateTimeTest, TestISO_8601ParsingNSPrecision)
{
    const char* gmtDateStr = "2002-10-02T08:05:09.123456789Z";
    const char* utcOffsetVersion = "2002-10-02T08:05:09.123456789+00:00";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ("2002-10-02T08:05:09Z", gmtDate.ToGmtString(DateFormat::ISO_8601));

    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::ISO_8601));
}

TEST(DateTimeTest, TestISO_8601ParsingTooLowPrecision)
{
    const char* gmtDateStr = "2002-10-02T08:05:09.12Z";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_FALSE(gmtDate.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601ParsingTooHighPrecision)
{
    const char* gmtDateStr = "2002-10-02T08:05:09.1234567890Z";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_FALSE(gmtDate.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601BasicParsingMSPrecision)
{
    const char* gmtDateStr = "20021002T080509000Z";
    const char* utcOffsetVersion = "20021002T080509000+0000";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601_BASIC);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ("20021002T080509Z", gmtDate.ToGmtString(DateFormat::ISO_8601_BASIC));

    ASSERT_EQ(gmtDate, DateTime(utcOffsetVersion, DateFormat::ISO_8601_BASIC));
}

TEST(DateTimeTest, TestISO_8601Parsing_DOS_Stopped)
{
    const char* gmtDateStr = "Weddkasdiweijbnawei8eriojngsdgasdgsdf1gasd8asdgfasdfgsdikweisdfksdnsdksdklasdfsdklasdfdfsdfsdfsdfsadfasdafsdfgjjfgghdfgsdfsfsdfsdfasdfsdfasdfsdfasdfsdf";
    DateTime date(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_FALSE(date.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601BasicParsing_DOS_Stopped)
{
    const char* gmtDateStr = "Weddkasdiweijbnawei8eriojngsdgasdgsdf1gasd8asdgfasdfgsdikweisdfksdnsdksdklasdfsdklasdfdfsdfsdfsdfsadfasdafsdfgjjfgghdfgsdfsfsdfsdfasdfsdfasdfsdfasdfsdf";
    DateTime date(gmtDateStr, DateFormat::ISO_8601_BASIC);
    ASSERT_FALSE(date.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601Parsing_WrongFormat)
{
    const char* gmtDateStr = "2002-10-02";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601);
    ASSERT_FALSE(gmtDate.WasParseSuccessful());
}

TEST(DateTimeTest, TestISO_8601BasicParsing_WrongFormat)
{
    const char* gmtDateStr = "2002-10-02";
    DateTime gmtDate(gmtDateStr, DateFormat::ISO_8601_BASIC);
    ASSERT_FALSE(gmtDate.WasParseSuccessful());
}

TEST(DateTimeTest, TestUNIX_EPOCHParsing)
{
    double gmtDateDbl = 1033545909;
    DateTime gmtDate(gmtDateDbl);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ(gmtDateDbl, gmtDate.SecondsWithMSPrecision());
    ASSERT_EQ("2002-10-02T08:05:09Z", gmtDate.ToGmtString(DateFormat::ISO_8601));
    ASSERT_EQ("20021002T080509Z", gmtDate.ToGmtString(DateFormat::ISO_8601_BASIC));
}

TEST(DateTimeTest, TestMillisParsing)
{
    int64_t gmtDateMillis = 1033545909000;
    DateTime gmtDate(gmtDateMillis);
    ASSERT_TRUE(gmtDate.WasParseSuccessful());
    ASSERT_EQ(DayOfWeek::Wednesday, gmtDate.GetDayOfWeek());
    ASSERT_EQ(02, gmtDate.GetDay());
    ASSERT_EQ(Month::October, gmtDate.GetMonth());
    ASSERT_EQ(2002, gmtDate.GetYear());
    ASSERT_EQ(8, gmtDate.GetHour());
    ASSERT_EQ(5, gmtDate.GetMinute());
    ASSERT_EQ(9, gmtDate.GetSecond());
    ASSERT_EQ(gmtDateMillis/1000, gmtDate.Seconds());
    ASSERT_EQ(gmtDateMillis, gmtDate.Millis());
    ASSERT_EQ("2002-10-02T08:05:09Z", gmtDate.ToGmtString(DateFormat::ISO_8601));
    ASSERT_EQ("20021002T080509Z", gmtDate.ToGmtString(DateFormat::ISO_8601_BASIC));
}

TEST(DateTimeTest, TestFormatAutoDetect)
{
    const char rfcDate[] = "Wed, 02 Oct 2002 08:05:09 GMT";
    DateTime parsedRFCDate(rfcDate, DateFormat::AutoDetect);
    ASSERT_TRUE(parsedRFCDate.WasParseSuccessful());
    ASSERT_EQ(DateTime(rfcDate, DateFormat::RFC822), parsedRFCDate);

    const char isoDate[] = "2002-10-02T08:05:09Z";
    DateTime parsedISODate(isoDate, DateFormat::AutoDetect);
    ASSERT_TRUE(parsedISODate.WasParseSuccessful());
    ASSERT_EQ(DateTime(isoDate, DateFormat::ISO_8601), parsedISODate);

    const char isoBasicDate[] = "20021002T080509Z";
    DateTime parsedISOBasicDate(isoBasicDate, DateFormat::AutoDetect);
    ASSERT_TRUE(parsedISOBasicDate.WasParseSuccessful());
    ASSERT_EQ(DateTime(isoBasicDate, DateFormat::ISO_8601_BASIC), parsedISOBasicDate);

    const char badDate[] = "2002 10,02T08 05 09G";
    DateTime parsedBadDate(badDate, DateFormat::AutoDetect);
    ASSERT_FALSE(parsedBadDate.WasParseSuccessful());
}
