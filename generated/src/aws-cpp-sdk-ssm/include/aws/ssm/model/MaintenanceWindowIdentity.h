/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowIdentity">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowIdentity
  {
  public:
    AWS_SSM_API MaintenanceWindowIdentity() = default;
    AWS_SSM_API MaintenanceWindowIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    MaintenanceWindowIdentity& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MaintenanceWindowIdentity& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the maintenance window.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MaintenanceWindowIdentity& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline MaintenanceWindowIdentity& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline MaintenanceWindowIdentity& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours before the end of the maintenance window that Amazon Web
     * Services Systems Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const { return m_cutoff; }
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }
    inline MaintenanceWindowIdentity& WithCutoff(int value) { SetCutoff(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    MaintenanceWindowIdentity& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const { return m_scheduleTimezone; }
    inline bool ScheduleTimezoneHasBeenSet() const { return m_scheduleTimezoneHasBeenSet; }
    template<typename ScheduleTimezoneT = Aws::String>
    void SetScheduleTimezone(ScheduleTimezoneT&& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = std::forward<ScheduleTimezoneT>(value); }
    template<typename ScheduleTimezoneT = Aws::String>
    MaintenanceWindowIdentity& WithScheduleTimezone(ScheduleTimezoneT&& value) { SetScheduleTimezone(std::forward<ScheduleTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to wait to run a maintenance window after the scheduled
     * cron expression date and time.</p>
     */
    inline int GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline MaintenanceWindowIdentity& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline const Aws::String& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::String>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::String>
    MaintenanceWindowIdentity& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline const Aws::String& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::String>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::String>
    MaintenanceWindowIdentity& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline const Aws::String& GetNextExecutionTime() const { return m_nextExecutionTime; }
    inline bool NextExecutionTimeHasBeenSet() const { return m_nextExecutionTimeHasBeenSet; }
    template<typename NextExecutionTimeT = Aws::String>
    void SetNextExecutionTime(NextExecutionTimeT&& value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime = std::forward<NextExecutionTimeT>(value); }
    template<typename NextExecutionTimeT = Aws::String>
    MaintenanceWindowIdentity& WithNextExecutionTime(NextExecutionTimeT&& value) { SetNextExecutionTime(std::forward<NextExecutionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_cutoff{0};
    bool m_cutoffHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_scheduleTimezone;
    bool m_scheduleTimezoneHasBeenSet = false;

    int m_scheduleOffset{0};
    bool m_scheduleOffsetHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_nextExecutionTime;
    bool m_nextExecutionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
