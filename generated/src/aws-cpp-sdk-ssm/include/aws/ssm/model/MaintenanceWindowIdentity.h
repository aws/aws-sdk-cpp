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
    AWS_SSM_API MaintenanceWindowIdentity();
    AWS_SSM_API MaintenanceWindowIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline MaintenanceWindowIdentity& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline MaintenanceWindowIdentity& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MaintenanceWindowIdentity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MaintenanceWindowIdentity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the maintenance window.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MaintenanceWindowIdentity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MaintenanceWindowIdentity& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline MaintenanceWindowIdentity& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline MaintenanceWindowIdentity& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours before the end of the maintenance window that Amazon Web
     * Services Systems Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }
    inline MaintenanceWindowIdentity& WithCutoff(int value) { SetCutoff(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline MaintenanceWindowIdentity& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline MaintenanceWindowIdentity& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }
    inline bool ScheduleTimezoneHasBeenSet() const { return m_scheduleTimezoneHasBeenSet; }
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = value; }
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = std::move(value); }
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone.assign(value); }
    inline MaintenanceWindowIdentity& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}
    inline MaintenanceWindowIdentity& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to wait to run a maintenance window after the scheduled
     * cron expression date and time.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline MaintenanceWindowIdentity& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }
    inline MaintenanceWindowIdentity& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline MaintenanceWindowIdentity& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithEndDate(const char* value) { SetEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline MaintenanceWindowIdentity& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline MaintenanceWindowIdentity& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the maintenance window will actually run, taking into account
     * any specified times for the maintenance window to become active or inactive.</p>
     */
    inline const Aws::String& GetNextExecutionTime() const{ return m_nextExecutionTime; }
    inline bool NextExecutionTimeHasBeenSet() const { return m_nextExecutionTimeHasBeenSet; }
    inline void SetNextExecutionTime(const Aws::String& value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime = value; }
    inline void SetNextExecutionTime(Aws::String&& value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime = std::move(value); }
    inline void SetNextExecutionTime(const char* value) { m_nextExecutionTimeHasBeenSet = true; m_nextExecutionTime.assign(value); }
    inline MaintenanceWindowIdentity& WithNextExecutionTime(const Aws::String& value) { SetNextExecutionTime(value); return *this;}
    inline MaintenanceWindowIdentity& WithNextExecutionTime(Aws::String&& value) { SetNextExecutionTime(std::move(value)); return *this;}
    inline MaintenanceWindowIdentity& WithNextExecutionTime(const char* value) { SetNextExecutionTime(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    int m_cutoff;
    bool m_cutoffHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_scheduleTimezone;
    bool m_scheduleTimezoneHasBeenSet = false;

    int m_scheduleOffset;
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
