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
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow();
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API MaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline const MaintenanceWindowType& GetType() const{ return m_type; }

    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline void SetType(const MaintenanceWindowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline void SetType(MaintenanceWindowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline MaintenanceWindow& WithType(const MaintenanceWindowType& value) { SetType(value); return *this;}

    /**
     * <p>An option to select the default or custom maintenance window.</p>
     */
    inline MaintenanceWindow& WithType(MaintenanceWindowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The hour for the maintenance window start
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline int GetStartTimeHour() const{ return m_startTimeHour; }

    /**
     * <p>The hour for the maintenance window start
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline bool StartTimeHourHasBeenSet() const { return m_startTimeHourHasBeenSet; }

    /**
     * <p>The hour for the maintenance window start
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline void SetStartTimeHour(int value) { m_startTimeHourHasBeenSet = true; m_startTimeHour = value; }

    /**
     * <p>The hour for the maintenance window start
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline MaintenanceWindow& WithStartTimeHour(int value) { SetStartTimeHour(value); return *this;}


    /**
     * <p>The minutes past the hour for the maintenance window start
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline int GetStartTimeMinute() const{ return m_startTimeMinute; }

    /**
     * <p>The minutes past the hour for the maintenance window start
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline bool StartTimeMinuteHasBeenSet() const { return m_startTimeMinuteHasBeenSet; }

    /**
     * <p>The minutes past the hour for the maintenance window start
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline void SetStartTimeMinute(int value) { m_startTimeMinuteHasBeenSet = true; m_startTimeMinute = value; }

    /**
     * <p>The minutes past the hour for the maintenance window start
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline MaintenanceWindow& WithStartTimeMinute(int value) { SetStartTimeMinute(value); return *this;}


    /**
     * <p>The hour for the maintenance window end
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline int GetEndTimeHour() const{ return m_endTimeHour; }

    /**
     * <p>The hour for the maintenance window end
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline bool EndTimeHourHasBeenSet() const { return m_endTimeHourHasBeenSet; }

    /**
     * <p>The hour for the maintenance window end
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline void SetEndTimeHour(int value) { m_endTimeHourHasBeenSet = true; m_endTimeHour = value; }

    /**
     * <p>The hour for the maintenance window end
     * (<code>00</code>-<code>23</code>).</p>
     */
    inline MaintenanceWindow& WithEndTimeHour(int value) { SetEndTimeHour(value); return *this;}


    /**
     * <p>The minutes for the maintenance window end
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline int GetEndTimeMinute() const{ return m_endTimeMinute; }

    /**
     * <p>The minutes for the maintenance window end
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline bool EndTimeMinuteHasBeenSet() const { return m_endTimeMinuteHasBeenSet; }

    /**
     * <p>The minutes for the maintenance window end
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline void SetEndTimeMinute(int value) { m_endTimeMinuteHasBeenSet = true; m_endTimeMinute = value; }

    /**
     * <p>The minutes for the maintenance window end
     * (<code>00</code>-<code>59</code>).</p>
     */
    inline MaintenanceWindow& WithEndTimeMinute(int value) { SetEndTimeMinute(value); return *this;}


    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline const Aws::Vector<DayOfWeek>& GetDaysOfTheWeek() const{ return m_daysOfTheWeek; }

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline bool DaysOfTheWeekHasBeenSet() const { return m_daysOfTheWeekHasBeenSet; }

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline void SetDaysOfTheWeek(const Aws::Vector<DayOfWeek>& value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek = value; }

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline void SetDaysOfTheWeek(Aws::Vector<DayOfWeek>&& value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek = std::move(value); }

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline MaintenanceWindow& WithDaysOfTheWeek(const Aws::Vector<DayOfWeek>& value) { SetDaysOfTheWeek(value); return *this;}

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline MaintenanceWindow& WithDaysOfTheWeek(Aws::Vector<DayOfWeek>&& value) { SetDaysOfTheWeek(std::move(value)); return *this;}

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline MaintenanceWindow& AddDaysOfTheWeek(const DayOfWeek& value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek.push_back(value); return *this; }

    /**
     * <p>The days of the week during which the maintenance window is open.</p>
     */
    inline MaintenanceWindow& AddDaysOfTheWeek(DayOfWeek&& value) { m_daysOfTheWeekHasBeenSet = true; m_daysOfTheWeek.push_back(std::move(value)); return *this; }


    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline const ApplyTimeOf& GetApplyTimeOf() const{ return m_applyTimeOf; }

    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline bool ApplyTimeOfHasBeenSet() const { return m_applyTimeOfHasBeenSet; }

    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetApplyTimeOf(const ApplyTimeOf& value) { m_applyTimeOfHasBeenSet = true; m_applyTimeOf = value; }

    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetApplyTimeOf(ApplyTimeOf&& value) { m_applyTimeOfHasBeenSet = true; m_applyTimeOf = std::move(value); }

    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline MaintenanceWindow& WithApplyTimeOf(const ApplyTimeOf& value) { SetApplyTimeOf(value); return *this;}

    /**
     * <p>The option to set the maintenance window during the device local time or
     * Universal Coordinated Time (UTC).</p>
     */
    inline MaintenanceWindow& WithApplyTimeOf(ApplyTimeOf&& value) { SetApplyTimeOf(std::move(value)); return *this;}

  private:

    MaintenanceWindowType m_type;
    bool m_typeHasBeenSet = false;

    int m_startTimeHour;
    bool m_startTimeHourHasBeenSet = false;

    int m_startTimeMinute;
    bool m_startTimeMinuteHasBeenSet = false;

    int m_endTimeHour;
    bool m_endTimeHourHasBeenSet = false;

    int m_endTimeMinute;
    bool m_endTimeMinuteHasBeenSet = false;

    Aws::Vector<DayOfWeek> m_daysOfTheWeek;
    bool m_daysOfTheWeekHasBeenSet = false;

    ApplyTimeOf m_applyTimeOf;
    bool m_applyTimeOfHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
