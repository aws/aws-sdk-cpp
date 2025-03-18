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
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails() = default;
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The day of the week on which the maintenance window falls. </p>
     */
    inline const Aws::String& GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    template<typename DayOfWeekT = Aws::String>
    void SetDayOfWeek(DayOfWeekT&& value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = std::forward<DayOfWeekT>(value); }
    template<typename DayOfWeekT = Aws::String>
    AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithDayOfWeek(DayOfWeekT&& value) { SetDayOfWeek(std::forward<DayOfWeekT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time, in 24-hour format, on which the maintenance window falls. </p>
     */
    inline const Aws::String& GetTimeOfDay() const { return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    template<typename TimeOfDayT = Aws::String>
    void SetTimeOfDay(TimeOfDayT&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::forward<TimeOfDayT>(value); }
    template<typename TimeOfDayT = Aws::String>
    AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeOfDay(TimeOfDayT&& value) { SetTimeOfDay(std::forward<TimeOfDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time zone in either the Country/City format or the UTC offset format.
     * UTC is the default format. </p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}
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
