/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DayOfWeek.h>
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
   * <p>The refresh on entity for weekly or monthly schedules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScheduleRefreshOnEntity">AWS
   * API Reference</a></p>
   */
  class ScheduleRefreshOnEntity
  {
  public:
    AWS_QUICKSIGHT_API ScheduleRefreshOnEntity() = default;
    AWS_QUICKSIGHT_API ScheduleRefreshOnEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScheduleRefreshOnEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day of the week that you want to schedule a refresh on.</p>
     */
    inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(DayOfWeek value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline ScheduleRefreshOnEntity& WithDayOfWeek(DayOfWeek value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month that you want to schedule refresh on.</p>
     */
    inline const Aws::String& GetDayOfMonth() const { return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    template<typename DayOfMonthT = Aws::String>
    void SetDayOfMonth(DayOfMonthT&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::forward<DayOfMonthT>(value); }
    template<typename DayOfMonthT = Aws::String>
    ScheduleRefreshOnEntity& WithDayOfMonth(DayOfMonthT&& value) { SetDayOfMonth(std::forward<DayOfMonthT>(value)); return *this;}
    ///@}
  private:

    DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
