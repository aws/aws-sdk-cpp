/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Schedule.h>
#include <aws/redshift-serverless/model/State.h>
#include <aws/redshift-serverless/model/TargetAction.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The returned scheduled action object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ScheduledActionResponse">AWS
   * API Reference</a></p>
   */
  class ScheduledActionResponse
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse() = default;
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The end time of </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ScheduledActionResponse& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    ScheduledActionResponse& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of timestamps of when the next scheduled actions will trigger.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const { return m_nextInvocations; }
    inline bool NextInvocationsHasBeenSet() const { return m_nextInvocationsHasBeenSet; }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::forward<NextInvocationsT>(value); }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    ScheduledActionResponse& WithNextInvocations(NextInvocationsT&& value) { SetNextInvocations(std::forward<NextInvocationsT>(value)); return *this;}
    template<typename NextInvocationsT = Aws::Utils::DateTime>
    ScheduledActionResponse& AddNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.emplace_back(std::forward<NextInvocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots. (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift
     * Management Guide</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ScheduledActionResponse& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    ScheduledActionResponse& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionDescription() const { return m_scheduledActionDescription; }
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }
    template<typename ScheduledActionDescriptionT = Aws::String>
    void SetScheduledActionDescription(ScheduledActionDescriptionT&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::forward<ScheduledActionDescriptionT>(value); }
    template<typename ScheduledActionDescriptionT = Aws::String>
    ScheduledActionResponse& WithScheduledActionDescription(ScheduledActionDescriptionT&& value) { SetScheduledActionDescription(std::forward<ScheduledActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const { return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    template<typename ScheduledActionNameT = Aws::String>
    void SetScheduledActionName(ScheduledActionNameT&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::forward<ScheduledActionNameT>(value); }
    template<typename ScheduledActionNameT = Aws::String>
    ScheduledActionResponse& WithScheduledActionName(ScheduledActionNameT&& value) { SetScheduledActionName(std::forward<ScheduledActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uuid of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionUuid() const { return m_scheduledActionUuid; }
    inline bool ScheduledActionUuidHasBeenSet() const { return m_scheduledActionUuidHasBeenSet; }
    template<typename ScheduledActionUuidT = Aws::String>
    void SetScheduledActionUuid(ScheduledActionUuidT&& value) { m_scheduledActionUuidHasBeenSet = true; m_scheduledActionUuid = std::forward<ScheduledActionUuidT>(value); }
    template<typename ScheduledActionUuidT = Aws::String>
    ScheduledActionResponse& WithScheduledActionUuid(ScheduledActionUuidT&& value) { SetScheduledActionUuid(std::forward<ScheduledActionUuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ScheduledActionResponse& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the scheduled action.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline ScheduledActionResponse& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const TargetAction& GetTargetAction() const { return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    template<typename TargetActionT = TargetAction>
    void SetTargetAction(TargetActionT&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::forward<TargetActionT>(value); }
    template<typename TargetActionT = TargetAction>
    ScheduledActionResponse& WithTargetAction(TargetActionT&& value) { SetTargetAction(std::forward<TargetActionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;
    bool m_nextInvocationsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_scheduledActionDescription;
    bool m_scheduledActionDescriptionHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::String m_scheduledActionUuid;
    bool m_scheduledActionUuidHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    TargetAction m_targetAction;
    bool m_targetActionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
