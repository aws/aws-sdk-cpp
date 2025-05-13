/**
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
  class CreateScheduleRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API CreateScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchedule"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the action that EventBridge Scheduler applies to the schedule after
     * the schedule completes invoking the target.</p>
     */
    inline ActionAfterCompletion GetActionAfterCompletion() const { return m_actionAfterCompletion; }
    inline bool ActionAfterCompletionHasBeenSet() const { return m_actionAfterCompletionHasBeenSet; }
    inline void SetActionAfterCompletion(ActionAfterCompletion value) { m_actionAfterCompletionHasBeenSet = true; m_actionAfterCompletion = value; }
    inline CreateScheduleRequest& WithActionAfterCompletion(ActionAfterCompletion value) { SetActionAfterCompletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, EventBridge Scheduler uses a
     * randomly generated token for the request to ensure idempotency. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateScheduleRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description you specify for the schedule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateScheduleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CreateScheduleRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline const FlexibleTimeWindow& GetFlexibleTimeWindow() const { return m_flexibleTimeWindow; }
    inline bool FlexibleTimeWindowHasBeenSet() const { return m_flexibleTimeWindowHasBeenSet; }
    template<typename FlexibleTimeWindowT = FlexibleTimeWindow>
    void SetFlexibleTimeWindow(FlexibleTimeWindowT&& value) { m_flexibleTimeWindowHasBeenSet = true; m_flexibleTimeWindow = std::forward<FlexibleTimeWindowT>(value); }
    template<typename FlexibleTimeWindowT = FlexibleTimeWindow>
    CreateScheduleRequest& WithFlexibleTimeWindow(FlexibleTimeWindowT&& value) { SetFlexibleTimeWindow(std::forward<FlexibleTimeWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group to associate with this schedule. If you omit
     * this, the default schedule group is used.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    CreateScheduleRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the customer managed KMS key that
     * EventBridge Scheduler will use to encrypt and decrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateScheduleRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule that you are creating.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateScheduleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    CreateScheduleRequest& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const { return m_scheduleExpressionTimezone; }
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    void SetScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::forward<ScheduleExpressionTimezoneT>(value); }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    CreateScheduleRequest& WithScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { SetScheduleExpressionTimezone(std::forward<ScheduleExpressionTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CreateScheduleRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline ScheduleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ScheduleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateScheduleRequest& WithState(ScheduleState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's target.</p>
     */
    inline const Target& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Target>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Target>
    CreateScheduleRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    ActionAfterCompletion m_actionAfterCompletion{ActionAfterCompletion::NOT_SET};
    bool m_actionAfterCompletionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
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

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    ScheduleState m_state{ScheduleState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Target m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
