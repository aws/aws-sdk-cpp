/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateMaintenanceWindowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the maintenance window. We recommend specifying a
     * description to help you organize your maintenance windows. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateMaintenanceWindowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CreateMaintenanceWindowRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}
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
    inline CreateMaintenanceWindowRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}
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
    inline CreateMaintenanceWindowRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}
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
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to wait after the date and time specified by a cron
     * expression before running the maintenance window.</p> <p>For example, the
     * following cron expression schedules a maintenance window to run on the third
     * Tuesday of every month at 11:30 PM.</p> <p> <code>cron(30 23 ? * TUE#3 *)</code>
     * </p> <p>If the schedule offset is <code>2</code>, the maintenance window won't
     * run until two days later.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline CreateMaintenanceWindowRequest& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline CreateMaintenanceWindowRequest& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours before the end of the maintenance window that Amazon Web
     * Services Systems Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }
    inline bool CutoffHasBeenSet() const { return m_cutoffHasBeenSet; }
    inline void SetCutoff(int value) { m_cutoffHasBeenSet = true; m_cutoff = value; }
    inline CreateMaintenanceWindowRequest& WithCutoff(int value) { SetCutoff(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables a maintenance window task to run on managed nodes, even if you
     * haven't registered those nodes as targets. If enabled, then you must specify the
     * unregistered managed nodes (by node ID) when you register a task with the
     * maintenance window.</p> <p>If you don't enable this option, then you must
     * specify previously-registered targets when you register a task with the
     * maintenance window.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }
    inline bool AllowUnassociatedTargetsHasBeenSet() const { return m_allowUnassociatedTargetsHasBeenSet; }
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargetsHasBeenSet = true; m_allowUnassociatedTargets = value; }
    inline CreateMaintenanceWindowRequest& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMaintenanceWindowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag a maintenance window to identify
     * the type of tasks it will run, the types of targets, and the environment it will
     * run in. In this case, you could specify the following key-value pairs:</p> <ul>
     * <li> <p> <code>Key=TaskType,Value=AgentUpdate</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul>  <p>To add
     * tags to an existing maintenance window, use the <a>AddTagsToResource</a>
     * operation.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMaintenanceWindowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMaintenanceWindowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMaintenanceWindowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMaintenanceWindowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
