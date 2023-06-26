/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The scheduled time period (UTC) during which Amazon MQ begins to apply
   * pending updates or patches to the broker. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline const Aws::String& GetDayOfWeek() const{ return m_dayOfWeek; }

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline void SetDayOfWeek(const Aws::String& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline void SetDayOfWeek(Aws::String&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::move(value); }

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline void SetDayOfWeek(const char* value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek.assign(value); }

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithDayOfWeek(const Aws::String& value) { SetDayOfWeek(value); return *this;}

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithDayOfWeek(Aws::String&& value) { SetDayOfWeek(std::move(value)); return *this;}

    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithDayOfWeek(const char* value) { SetDayOfWeek(value); return *this;}


    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline const Aws::String& GetTimeOfDay() const{ return m_timeOfDay; }

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline void SetTimeOfDay(const Aws::String& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = value; }

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline void SetTimeOfDay(Aws::String&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::move(value); }

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline void SetTimeOfDay(const char* value) { m_timeOfDayHasBeenSet = true; m_timeOfDay.assign(value); }

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeOfDay(const Aws::String& value) { SetTimeOfDay(value); return *this;}

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeOfDay(Aws::String&& value) { SetTimeOfDay(std::move(value)); return *this;}

    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeOfDay(const char* value) { SetTimeOfDay(value); return *this;}


    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}

  private:

    Aws::String m_dayOfWeek;
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
