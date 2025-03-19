/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshInterval.h>
#include <aws/quicksight/model/ScheduleRefreshOnEntity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Specifies the interval between each scheduled refresh of a
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RefreshFrequency">AWS
   * API Reference</a></p>
   */
  class RefreshFrequency
  {
  public:
    AWS_QUICKSIGHT_API RefreshFrequency() = default;
    AWS_QUICKSIGHT_API RefreshFrequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The interval between scheduled refreshes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>MINUTE15</code>: The dataset refreshes every 15 minutes.
     * This value is only supported for incremental refreshes. This interval can only
     * be used for one schedule per dataset.</p> </li> <li> <p>
     * <code>MINUTE30</code>:The dataset refreshes every 30 minutes. This value is only
     * supported for incremental refreshes. This interval can only be used for one
     * schedule per dataset.</p> </li> <li> <p> <code>HOURLY</code>: The dataset
     * refreshes every hour. This interval can only be used for one schedule per
     * dataset.</p> </li> <li> <p> <code>DAILY</code>: The dataset refreshes every
     * day.</p> </li> <li> <p> <code>WEEKLY</code>: The dataset refreshes every
     * week.</p> </li> <li> <p> <code>MONTHLY</code>: The dataset refreshes every
     * month.</p> </li> </ul>
     */
    inline RefreshInterval GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(RefreshInterval value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline RefreshFrequency& WithInterval(RefreshInterval value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week that you want to schedule the refresh on. This value is
     * required for weekly and monthly refresh intervals.</p>
     */
    inline const ScheduleRefreshOnEntity& GetRefreshOnDay() const { return m_refreshOnDay; }
    inline bool RefreshOnDayHasBeenSet() const { return m_refreshOnDayHasBeenSet; }
    template<typename RefreshOnDayT = ScheduleRefreshOnEntity>
    void SetRefreshOnDay(RefreshOnDayT&& value) { m_refreshOnDayHasBeenSet = true; m_refreshOnDay = std::forward<RefreshOnDayT>(value); }
    template<typename RefreshOnDayT = ScheduleRefreshOnEntity>
    RefreshFrequency& WithRefreshOnDay(RefreshOnDayT&& value) { SetRefreshOnDay(std::forward<RefreshOnDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone that you want the refresh schedule to use. The timezone ID must
     * match a corresponding ID found on
     * <code>java.util.time.getAvailableIDs()</code>.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    RefreshFrequency& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of day that you want the datset to refresh. This value is expressed
     * in HH:MM format. This field is not required for schedules that refresh
     * hourly.</p>
     */
    inline const Aws::String& GetTimeOfTheDay() const { return m_timeOfTheDay; }
    inline bool TimeOfTheDayHasBeenSet() const { return m_timeOfTheDayHasBeenSet; }
    template<typename TimeOfTheDayT = Aws::String>
    void SetTimeOfTheDay(TimeOfTheDayT&& value) { m_timeOfTheDayHasBeenSet = true; m_timeOfTheDay = std::forward<TimeOfTheDayT>(value); }
    template<typename TimeOfTheDayT = Aws::String>
    RefreshFrequency& WithTimeOfTheDay(TimeOfTheDayT&& value) { SetTimeOfTheDay(std::forward<TimeOfTheDayT>(value)); return *this;}
    ///@}
  private:

    RefreshInterval m_interval{RefreshInterval::NOT_SET};
    bool m_intervalHasBeenSet = false;

    ScheduleRefreshOnEntity m_refreshOnDay;
    bool m_refreshOnDayHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_timeOfTheDay;
    bool m_timeOfTheDayHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
