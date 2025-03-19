/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/DayOfWeek.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>The scheduled time period relative to UTC during which Amazon MQ begins to
   * apply pending updates or patches to the broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/WeeklyStartTime">AWS
   * API Reference</a></p>
   */
  class WeeklyStartTime
  {
  public:
    AWS_MQ_API WeeklyStartTime() = default;
    AWS_MQ_API WeeklyStartTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API WeeklyStartTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required. The day of the week.</p>
     */
    inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(DayOfWeek value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline WeeklyStartTime& WithDayOfWeek(DayOfWeek value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The time, in 24-hour format.</p>
     */
    inline const Aws::String& GetTimeOfDay() const { return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    template<typename TimeOfDayT = Aws::String>
    void SetTimeOfDay(TimeOfDayT&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::forward<TimeOfDayT>(value); }
    template<typename TimeOfDayT = Aws::String>
    WeeklyStartTime& WithTimeOfDay(TimeOfDayT&& value) { SetTimeOfDay(std::forward<TimeOfDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone, UTC by default, in either the Country/City format, or the UTC
     * offset format.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    WeeklyStartTime& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}
  private:

    DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
