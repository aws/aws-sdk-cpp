/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionType.h>
#include <aws/redshift/model/ScheduledActionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes a scheduled action. You can use a scheduled action to trigger some
   * Amazon Redshift API operations on a schedule. For information about which API
   * operations can be scheduled, see <a>ScheduledActionType</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ScheduledAction">AWS
   * API Reference</a></p>
   */
  class CreateScheduledActionResult
  {
  public:
    AWS_REDSHIFT_API CreateScheduledActionResult() = default;
    AWS_REDSHIFT_API CreateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionName() const { return m_scheduledActionName; }
    template<typename ScheduledActionNameT = Aws::String>
    void SetScheduledActionName(ScheduledActionNameT&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::forward<ScheduledActionNameT>(value); }
    template<typename ScheduledActionNameT = Aws::String>
    CreateScheduledActionResult& WithScheduledActionName(ScheduledActionNameT&& value) { SetScheduledActionName(std::forward<ScheduledActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON format string of the Amazon Redshift API operation with input
     * parameters. </p>
     * <p>"<code>{\"ResizeCluster\":{\"NodeType\":\"ra3.4xlarge\",\"ClusterIdentifier\":\"my-test-cluster\",\"NumberOfNodes\":3}}</code>".
     * </p>
     */
    inline const ScheduledActionType& GetTargetAction() const { return m_targetAction; }
    template<typename TargetActionT = ScheduledActionType>
    void SetTargetAction(TargetActionT&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::forward<TargetActionT>(value); }
    template<typename TargetActionT = ScheduledActionType>
    CreateScheduledActionResult& WithTargetAction(TargetActionT&& value) { SetTargetAction(std::forward<TargetActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for a one-time (at format) or recurring (cron format) scheduled
     * action. Schedule invocations must be separated by at least one hour.</p>
     * <p>Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    CreateScheduledActionResult& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role to assume to run the scheduled action. This IAM role must have
     * permission to run the Amazon Redshift API operation in the scheduled action.
     * This IAM role must allow the Amazon Redshift scheduler (Principal
     * scheduler.redshift.amazonaws.com) to assume permissions on your behalf. For more
     * information about the IAM role to use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the <i>Amazon Redshift
     * Cluster Management Guide</i>. </p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    CreateScheduledActionResult& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scheduled action. </p>
     */
    inline const Aws::String& GetScheduledActionDescription() const { return m_scheduledActionDescription; }
    template<typename ScheduledActionDescriptionT = Aws::String>
    void SetScheduledActionDescription(ScheduledActionDescriptionT&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::forward<ScheduledActionDescriptionT>(value); }
    template<typename ScheduledActionDescriptionT = Aws::String>
    CreateScheduledActionResult& WithScheduledActionDescription(ScheduledActionDescriptionT&& value) { SetScheduledActionDescription(std::forward<ScheduledActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the scheduled action. For example, <code>DISABLED</code>. </p>
     */
    inline ScheduledActionState GetState() const { return m_state; }
    inline void SetState(ScheduledActionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateScheduledActionResult& WithState(ScheduledActionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of times when the scheduled action will run. </p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const { return m_nextInvocations; }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::forward<NextInvocationsT>(value); }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    CreateScheduledActionResult& WithNextInvocations(NextInvocationsT&& value) { SetNextInvocations(std::forward<NextInvocationsT>(value)); return *this;}
    template<typename NextInvocationsT = Aws::Utils::DateTime>
    CreateScheduledActionResult& AddNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.emplace_back(std::forward<NextInvocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time in UTC when the schedule is active. Before this time, the
     * scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CreateScheduledActionResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time in UTC when the schedule is no longer active. After this time,
     * the scheduled action does not trigger. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CreateScheduledActionResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateScheduledActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
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

    ScheduledActionState m_state{ScheduledActionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;
    bool m_nextInvocationsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
