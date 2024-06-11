﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/scheduler/model/ActionAfterCompletion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/FlexibleTimeWindow.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/Target.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{

  /**
   */
  class UpdateScheduleRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API UpdateScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchedule"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the action that EventBridge Scheduler applies to the schedule after
     * the schedule completes invoking the target.</p>
     */
    inline const ActionAfterCompletion& GetActionAfterCompletion() const{ return m_actionAfterCompletion; }
    inline bool ActionAfterCompletionHasBeenSet() const { return m_actionAfterCompletionHasBeenSet; }
    inline void SetActionAfterCompletion(const ActionAfterCompletion& value) { m_actionAfterCompletionHasBeenSet = true; m_actionAfterCompletion = value; }
    inline void SetActionAfterCompletion(ActionAfterCompletion&& value) { m_actionAfterCompletionHasBeenSet = true; m_actionAfterCompletion = std::move(value); }
    inline UpdateScheduleRequest& WithActionAfterCompletion(const ActionAfterCompletion& value) { SetActionAfterCompletion(value); return *this;}
    inline UpdateScheduleRequest& WithActionAfterCompletion(ActionAfterCompletion&& value) { SetActionAfterCompletion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateScheduleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateScheduleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description you specify for the schedule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateScheduleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateScheduleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline UpdateScheduleRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline UpdateScheduleRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline const FlexibleTimeWindow& GetFlexibleTimeWindow() const{ return m_flexibleTimeWindow; }
    inline bool FlexibleTimeWindowHasBeenSet() const { return m_flexibleTimeWindowHasBeenSet; }
    inline void SetFlexibleTimeWindow(const FlexibleTimeWindow& value) { m_flexibleTimeWindowHasBeenSet = true; m_flexibleTimeWindow = value; }
    inline void SetFlexibleTimeWindow(FlexibleTimeWindow&& value) { m_flexibleTimeWindowHasBeenSet = true; m_flexibleTimeWindow = std::move(value); }
    inline UpdateScheduleRequest& WithFlexibleTimeWindow(const FlexibleTimeWindow& value) { SetFlexibleTimeWindow(value); return *this;}
    inline UpdateScheduleRequest& WithFlexibleTimeWindow(FlexibleTimeWindow&& value) { SetFlexibleTimeWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group with which the schedule is associated. You
     * must provide this value in order for EventBridge Scheduler to find the schedule
     * you want to update. If you omit this value, EventBridge Scheduler assumes the
     * group is associated to the default group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline UpdateScheduleRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline UpdateScheduleRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the customer managed KMS key that that you want EventBridge
     * Scheduler to use to encrypt and decrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline UpdateScheduleRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline UpdateScheduleRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule that you are updating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateScheduleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateScheduleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The expression that defines when the schedule runs. The following formats
     * are supported. </p> <ul> <li> <p> <code>at</code> expression -
     * <code>at(yyyy-mm-ddThh:mm:ss)</code> </p> </li> <li> <p> <code>rate</code>
     * expression - <code>rate(value unit)</code> </p> </li> <li> <p> <code>cron</code>
     * expression - <code>cron(fields)</code> </p> </li> </ul> <p> You can use
     * <code>at</code> expressions to create one-time schedules that invoke a target
     * once, at the time and in the time zone, that you specify. You can use
     * <code>rate</code> and <code>cron</code> expressions to create recurring
     * schedules. Rate-based schedules are useful when you want to invoke a target at
     * regular intervals, such as every 15 minutes or every five days. Cron-based
     * schedules are useful when you want to invoke a target periodically at a specific
     * time, such as at 8:00 am (UTC+0) every 1st day of the month. </p> <p> A
     * <code>cron</code> expression consists of six fields separated by white spaces:
     * <code>(minutes hours day_of_month month day_of_week year)</code>. </p> <p> A
     * <code>rate</code> expression consists of a <i>value</i> as a positive integer,
     * and a <i>unit</i> with the following options: <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code> </p> <p> For more information and examples, see <a
     * href="https://docs.aws.amazon.com/scheduler/latest/UserGuide/schedule-types.html">Schedule
     * types on EventBridge Scheduler</a> in the <i>EventBridge Scheduler User
     * Guide</i>. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline UpdateScheduleRequest& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline UpdateScheduleRequest& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const{ return m_scheduleExpressionTimezone; }
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
    inline void SetScheduleExpressionTimezone(const Aws::String& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = value; }
    inline void SetScheduleExpressionTimezone(Aws::String&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::move(value); }
    inline void SetScheduleExpressionTimezone(const char* value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone.assign(value); }
    inline UpdateScheduleRequest& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}
    inline UpdateScheduleRequest& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}
    inline UpdateScheduleRequest& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline UpdateScheduleRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline UpdateScheduleRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateScheduleRequest& WithState(const ScheduleState& value) { SetState(value); return *this;}
    inline UpdateScheduleRequest& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule target. You can use this operation to change the target that
     * your schedule invokes.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline UpdateScheduleRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}
    inline UpdateScheduleRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}
    ///@}
  private:

    ActionAfterCompletion m_actionAfterCompletion;
    bool m_actionAfterCompletionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    FlexibleTimeWindow m_flexibleTimeWindow;
    bool m_flexibleTimeWindowHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_scheduleExpressionTimezone;
    bool m_scheduleExpressionTimezoneHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    ScheduleState m_state;
    bool m_stateHasBeenSet = false;

    Target m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
