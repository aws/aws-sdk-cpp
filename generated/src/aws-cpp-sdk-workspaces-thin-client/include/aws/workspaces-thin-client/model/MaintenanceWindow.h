/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/MaintenanceWindowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-thin-client/model/ApplyTimeOf.h>
#include <aws/workspaces-thin-client/model/DayOfWeek.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   * <p>Describes the maintenance window for a thin client device.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/MaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindow
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow() = default;
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline MaintenanceWindowType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MaintenanceWindowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MaintenanceWindow& WithType(MaintenanceWindowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour for the maintenance window start
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline int GetStartTimeHour() const { return m_startTimeHour; }
    inline bool StartTimeHourHasBeenSet() const { return m_startTimeHourHasBeenSet; }
    inline void SetStartTimeHour(int value) { m_startTimeHourHasBeenSet = true; m_startTimeHour = value; }
    inline MaintenanceWindow& WithStartTimeHour(int value) { SetStartTimeHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minutes past the hour for the maintenance window start
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline int GetStartTimeMinute() const { return m_startTimeMinute; }
    inline bool StartTimeMinuteHasBeenSet() const { return m_startTimeMinuteHasBeenSet; }
    inline void SetStartTimeMinute(int value) { m_startTimeMinuteHasBeenSet = true; m_startTimeMinute = value; }
    inline MaintenanceWindow& WithStartTimeMinute(int value) { SetStartTimeMinute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour for the maintenance window end
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline int GetEndTimeHour() const { return m_endTimeHour; }
    inline bool EndTimeHourHasBeenSet() const { return m_endTimeHourHasBeenSet; }
    inline void SetEndTimeHour(int value) { m_endTimeHourHasBeenSet = true; m_endTimeHour = value; }
    inline MaintenanceWindow& WithEndTimeHour(int value) { SetEndTimeHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minutes for the maintenance window end
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline int GetEndTimeMinute() const { return m_endTimeMinute; }
    inline bool EndTimeMinuteHasBeenSet() const { return m_endTimeMinuteHasBeenSet; }
    inline void SetEndTimeMinute(int value) { m_endTimeMinuteHasBeenSet = true; m_endTimeMinute = value; }
    inline MaintenanceWindow& WithEndTimeMinute(int value) { SetEndTimeMinute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline const Aws::Vector<DayOfWeek>& GetDaysOfTheWeek() const { return m_daysOfTheWeek; }
    inline bool DaysOfTheWeekHasBeenSet() const { return m_daysOfTheWeekHasBeenSet; }
    template<typename DaysOfTheWeekT = Aws::Vector<DayOfWeek>>
    void SetDaysOfTheWeek(DaysOfTheWeekT&& value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek = std::forward<DaysOfTheWeekT>(value); }
    template<typename DaysOfTheWeekT = Aws::Vector<DayOfWeek>>
    MaintenanceWindow& WithDaysOfTheWeek(DaysOfTheWeekT&& value) { SetDaysOfTheWeek(std::forward<DaysOfTheWeekT>(value)); return *this;}
    inline MaintenanceWindow& AddDaysOfTheWeek(DayOfWeek value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline ApplyTimeOf GetApplyTimeOf() const { return m_applyTimeOf; }
    inline bool ApplyTimeOfHasBeenSet() const { return m_applyTimeOfHasBeenSet; }
    inline void SetApplyTimeOf(ApplyTimeOf value) { m_applyTimeOfHasBeenSet = true; m_applyTimeOf = value; }
    inline MaintenanceWindow& WithApplyTimeOf(ApplyTimeOf value) { SetApplyTimeOf(value); return *this;}
    ///@}
  private:

    MaintenanceWindowType m_type{MaintenanceWindowType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_startTimeHour{0};
    bool m_startTimeHourHasBeenSet = false;

    int m_startTimeMinute{0};
    bool m_startTimeMinuteHasBeenSet = false;

    int m_endTimeHour{0};
    bool m_endTimeHourHasBeenSet = false;

    int m_endTimeMinute{0};
    bool m_endTimeMinuteHasBeenSet = false;

    Aws::Vector<DayOfWeek> m_daysOfTheWeek;
    bool m_daysOfTheWeekHasBeenSet = false;

    ApplyTimeOf m_applyTimeOf{ApplyTimeOf::NOT_SET};
    bool m_applyTimeOfHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
