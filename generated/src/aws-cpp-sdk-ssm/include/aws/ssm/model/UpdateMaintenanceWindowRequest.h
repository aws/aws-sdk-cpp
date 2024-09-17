/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the maintenance window to update.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }
    inline UpdateMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}
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
    inline UpdateMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the update request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * maintenance window to become active. <code>StartDate</code> allows you to delay
     * activation of the maintenance window until the specified future date.</p> 
     * <p>When using a rate schedule, if you provide a start date that occurs in the
     * past, the current date and time are used as the start date. </p> 
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline UpdateMaintenanceWindowRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when you want the
     * maintenance window to become inactive. <code>EndDate</code> allows you to set a
     * date and time in the future when the maintenance window will no longer run.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }
    inline UpdateMaintenanceWindowRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}
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
    inline UpdateMaintenanceWindowRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }
    inline bool ScheduleTimezoneHasBeenSet() const { return m_scheduleTimezoneHasBeenSet; }
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = value; }
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone = std::move(value); }
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezoneHasBeenSet = true; m_scheduleTimezone.assign(value); }
    inline UpdateMaintenanceWindowRequest& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}
    inline UpdateMaintenanceWindowRequest& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowRequest& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to wait after the date and time specified by a cron
     * expression before running the maintenance window.</p> <p>For example, the
     * following cron expression schedules a maintenance window to run the third
     * Tuesday of every month at 11:30 PM.</p> <p> <code>cron(30 23 ? * TUE#3 *)</code>
     * </p> <p>If the schedule offset is <code>2</code>, the maintenance window won't
     * run until two days later.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline UpdateMaintenanceWindowRequest& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline UpdateMaintenanceWindowRequest& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours before the end of the maintenance window that Amazon Web
     * Services Systems Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }
    inline UpdateMaintenanceWindowRequest& WithCutoff(int value) { SetCutoff(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether targets must be registered with the maintenance window before tasks
     * can be defined for those targets.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }
    inline bool AllowUnassociatedTargetsHasBeenSet() const { return m_allowUnassociatedTargetsHasBeenSet; }
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargetsHasBeenSet = true; m_allowUnassociatedTargets = value; }
    inline UpdateMaintenanceWindowRequest& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateMaintenanceWindowRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, then all fields that are required by the
     * <a>CreateMaintenanceWindow</a> operation are also required for this API request.
     * Optional fields that aren't specified are set to null. </p>
     */
    inline bool GetReplace() const{ return m_replace; }
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }
    inline UpdateMaintenanceWindowRequest& WithReplace(bool value) { SetReplace(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_scheduleTimezone;
    bool m_scheduleTimezoneHasBeenSet = false;

    int m_scheduleOffset;
    bool m_scheduleOffsetHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    int m_cutoff;
    bool m_cutoffHasBeenSet = false;

    bool m_allowUnassociatedTargets;
    bool m_allowUnassociatedTargetsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_replace;
    bool m_replaceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
