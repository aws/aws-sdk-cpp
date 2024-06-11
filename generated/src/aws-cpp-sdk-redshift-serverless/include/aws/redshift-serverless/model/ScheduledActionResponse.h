﻿/**
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
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse();
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ScheduledActionResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The end time of </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ScheduledActionResponse& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ScheduledActionResponse& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline ScheduledActionResponse& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline ScheduledActionResponse& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline ScheduledActionResponse& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of timestamps of when the next scheduled actions will trigger.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const{ return m_nextInvocations; }
    inline bool NextInvocationsHasBeenSet() const { return m_nextInvocationsHasBeenSet; }
    inline void SetNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = value; }
    inline void SetNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::move(value); }
    inline ScheduledActionResponse& WithNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { SetNextInvocations(value); return *this;}
    inline ScheduledActionResponse& WithNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { SetNextInvocations(std::move(value)); return *this;}
    inline ScheduledActionResponse& AddNextInvocations(const Aws::Utils::DateTime& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(value); return *this; }
    inline ScheduledActionResponse& AddNextInvocations(Aws::Utils::DateTime&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.push_back(std::move(value)); return *this; }
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
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ScheduledActionResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ScheduledActionResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ScheduledActionResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline ScheduledActionResponse& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline ScheduledActionResponse& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = value; }
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::move(value); }
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription.assign(value); }
    inline ScheduledActionResponse& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}
    inline ScheduledActionResponse& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}
    inline ScheduledActionResponse& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }
    inline ScheduledActionResponse& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}
    inline ScheduledActionResponse& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}
    inline ScheduledActionResponse& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uuid of the scheduled action.</p>
     */
    inline const Aws::String& GetScheduledActionUuid() const{ return m_scheduledActionUuid; }
    inline bool ScheduledActionUuidHasBeenSet() const { return m_scheduledActionUuidHasBeenSet; }
    inline void SetScheduledActionUuid(const Aws::String& value) { m_scheduledActionUuidHasBeenSet = true; m_scheduledActionUuid = value; }
    inline void SetScheduledActionUuid(Aws::String&& value) { m_scheduledActionUuidHasBeenSet = true; m_scheduledActionUuid = std::move(value); }
    inline void SetScheduledActionUuid(const char* value) { m_scheduledActionUuidHasBeenSet = true; m_scheduledActionUuid.assign(value); }
    inline ScheduledActionResponse& WithScheduledActionUuid(const Aws::String& value) { SetScheduledActionUuid(value); return *this;}
    inline ScheduledActionResponse& WithScheduledActionUuid(Aws::String&& value) { SetScheduledActionUuid(std::move(value)); return *this;}
    inline ScheduledActionResponse& WithScheduledActionUuid(const char* value) { SetScheduledActionUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ScheduledActionResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ScheduledActionResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the scheduled action.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ScheduledActionResponse& WithState(const State& value) { SetState(value); return *this;}
    inline ScheduledActionResponse& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TargetAction& GetTargetAction() const{ return m_targetAction; }
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }
    inline void SetTargetAction(const TargetAction& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }
    inline void SetTargetAction(TargetAction&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }
    inline ScheduledActionResponse& WithTargetAction(const TargetAction& value) { SetTargetAction(value); return *this;}
    inline ScheduledActionResponse& WithTargetAction(TargetAction&& value) { SetTargetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
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

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    TargetAction m_targetAction;
    bool m_targetActionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
