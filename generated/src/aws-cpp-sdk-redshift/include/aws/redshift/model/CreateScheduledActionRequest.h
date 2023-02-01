/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class CreateScheduledActionRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateScheduledActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledAction"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action. The name must be unique within an account.
     * For more information about this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline const ScheduledActionType& GetTargetAction() const{ return m_targetAction; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline void SetTargetAction(const ScheduledActionType& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline void SetTargetAction(ScheduledActionType&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithTargetAction(const ScheduledActionType& value) { SetTargetAction(value); return *this;}

    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithTargetAction(ScheduledActionType&& value) { SetTargetAction(std::move(value)); return *this;}


    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline CreateScheduledActionRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline CreateScheduledActionRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>The schedule in <code>at( )</code> or <code>cron( )</code> format. For more
     * information about this parameter, see <a>ScheduledAction</a>.</p>
     */
    inline CreateScheduledActionRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role to assume to run the target action. For more information about
     * this parameter, see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>The description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = value; }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::move(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription.assign(value); }

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scheduled action. </p>
     */
    inline CreateScheduledActionRequest& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}


    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline CreateScheduledActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time in UTC of the scheduled action. Before this time, the
     * scheduled action does not trigger. For more information about this parameter,
     * see <a>ScheduledAction</a>.</p>
     */
    inline CreateScheduledActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time in UTC of the scheduled action. After this time, the scheduled
     * action does not trigger. For more information about this parameter, see
     * <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>If true, the schedule is enabled. If false, the scheduled action does not
     * trigger. For more information about <code>state</code> of the scheduled action,
     * see <a>ScheduledAction</a>. </p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>If true, the schedule is enabled. If false, the scheduled action does not
     * trigger. For more information about <code>state</code> of the scheduled action,
     * see <a>ScheduledAction</a>. </p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>If true, the schedule is enabled. If false, the scheduled action does not
     * trigger. For more information about <code>state</code> of the scheduled action,
     * see <a>ScheduledAction</a>. </p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>If true, the schedule is enabled. If false, the scheduled action does not
     * trigger. For more information about <code>state</code> of the scheduled action,
     * see <a>ScheduledAction</a>. </p>
     */
    inline CreateScheduledActionRequest& WithEnable(bool value) { SetEnable(value); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    ScheduledActionType m_targetAction;
    bool m_targetActionHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::String m_scheduledActionDescription;
    bool m_scheduledActionDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_enable;
    bool m_enableHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
