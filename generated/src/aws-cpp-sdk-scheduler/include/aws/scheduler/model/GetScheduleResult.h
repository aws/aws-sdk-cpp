/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/model/ActionAfterCompletion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/FlexibleTimeWindow.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/Target.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Scheduler
{
namespace Model
{
  class GetScheduleResult
  {
  public:
    AWS_SCHEDULER_API GetScheduleResult();
    AWS_SCHEDULER_API GetScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API GetScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the action that EventBridge Scheduler applies to the schedule after
     * the schedule completes invoking the target.</p>
     */
    inline const ActionAfterCompletion& GetActionAfterCompletion() const{ return m_actionAfterCompletion; }
    inline void SetActionAfterCompletion(const ActionAfterCompletion& value) { m_actionAfterCompletion = value; }
    inline void SetActionAfterCompletion(ActionAfterCompletion&& value) { m_actionAfterCompletion = std::move(value); }
    inline GetScheduleResult& WithActionAfterCompletion(const ActionAfterCompletion& value) { SetActionAfterCompletion(value); return *this;}
    inline GetScheduleResult& WithActionAfterCompletion(ActionAfterCompletion&& value) { SetActionAfterCompletion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetScheduleResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetScheduleResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schedule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetScheduleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetScheduleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetScheduleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, before which the schedule can invoke its target. Depending
     * on the schedule's recurrence expression, invocations might stop on, or before,
     * the <code>EndDate</code> you specify. EventBridge Scheduler ignores
     * <code>EndDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDate = std::move(value); }
    inline GetScheduleResult& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline GetScheduleResult& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure a time window during which EventBridge Scheduler
     * invokes the schedule.</p>
     */
    inline const FlexibleTimeWindow& GetFlexibleTimeWindow() const{ return m_flexibleTimeWindow; }
    inline void SetFlexibleTimeWindow(const FlexibleTimeWindow& value) { m_flexibleTimeWindow = value; }
    inline void SetFlexibleTimeWindow(FlexibleTimeWindow&& value) { m_flexibleTimeWindow = std::move(value); }
    inline GetScheduleResult& WithFlexibleTimeWindow(const FlexibleTimeWindow& value) { SetFlexibleTimeWindow(value); return *this;}
    inline GetScheduleResult& WithFlexibleTimeWindow(FlexibleTimeWindow&& value) { SetFlexibleTimeWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline void SetGroupName(const Aws::String& value) { m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupName.assign(value); }
    inline GetScheduleResult& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline GetScheduleResult& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline GetScheduleResult& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for a customer managed KMS Key that is be used to encrypt and decrypt
     * your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetScheduleResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetScheduleResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetScheduleResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDate = value; }
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDate = std::move(value); }
    inline GetScheduleResult& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}
    inline GetScheduleResult& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetScheduleResult& WithName(const char* value) { SetName(value); return *this;}
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
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpression.assign(value); }
    inline GetScheduleResult& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline GetScheduleResult& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline GetScheduleResult& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone in which the scheduling expression is evaluated.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const{ return m_scheduleExpressionTimezone; }
    inline void SetScheduleExpressionTimezone(const Aws::String& value) { m_scheduleExpressionTimezone = value; }
    inline void SetScheduleExpressionTimezone(Aws::String&& value) { m_scheduleExpressionTimezone = std::move(value); }
    inline void SetScheduleExpressionTimezone(const char* value) { m_scheduleExpressionTimezone.assign(value); }
    inline GetScheduleResult& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}
    inline GetScheduleResult& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}
    inline GetScheduleResult& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in UTC, after which the schedule can begin invoking its target.
     * Depending on the schedule's recurrence expression, invocations might occur on,
     * or after, the <code>StartDate</code> you specify. EventBridge Scheduler ignores
     * <code>StartDate</code> for one-time schedules.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }
    inline GetScheduleResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline GetScheduleResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }
    inline void SetState(const ScheduleState& value) { m_state = value; }
    inline void SetState(ScheduleState&& value) { m_state = std::move(value); }
    inline GetScheduleResult& WithState(const ScheduleState& value) { SetState(value); return *this;}
    inline GetScheduleResult& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule target.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }
    inline void SetTarget(const Target& value) { m_target = value; }
    inline void SetTarget(Target&& value) { m_target = std::move(value); }
    inline GetScheduleResult& WithTarget(const Target& value) { SetTarget(value); return *this;}
    inline GetScheduleResult& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ActionAfterCompletion m_actionAfterCompletion;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_description;

    Aws::Utils::DateTime m_endDate;

    FlexibleTimeWindow m_flexibleTimeWindow;

    Aws::String m_groupName;

    Aws::String m_kmsKeyArn;

    Aws::Utils::DateTime m_lastModificationDate;

    Aws::String m_name;

    Aws::String m_scheduleExpression;

    Aws::String m_scheduleExpressionTimezone;

    Aws::Utils::DateTime m_startDate;

    ScheduleState m_state;

    Target m_target;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
