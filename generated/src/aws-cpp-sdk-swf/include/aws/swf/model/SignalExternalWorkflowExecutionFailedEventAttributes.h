/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionFailedCause.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the
   * <code>SignalExternalWorkflowExecutionFailed</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalExternalWorkflowExecutionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class SignalExternalWorkflowExecutionFailedEventAttributes
  {
  public:
    AWS_SWF_API SignalExternalWorkflowExecutionFailedEventAttributes();
    AWS_SWF_API SignalExternalWorkflowExecutionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API SignalExternalWorkflowExecutionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The <code>workflowId</code> of the external workflow execution that the
     * signal was being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The <code>runId</code> of the external workflow execution that the signal was
     * being delivered to.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline const SignalExternalWorkflowExecutionFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline void SetCause(const SignalExternalWorkflowExecutionFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline void SetCause(SignalExternalWorkflowExecutionFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithCause(const SignalExternalWorkflowExecutionFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p>  <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> 
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithCause(SignalExternalWorkflowExecutionFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflowExecution</code> decision to
     * request this signal. This information can be useful for diagnosing problems by
     * tracing back the chain of events leading up to this event.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>SignalExternalWorkflowExecution</code>
     * decision for this signal. This information can be useful for diagnosing problems
     * by tracing back the chain of events leading up to this event.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}


    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}

    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the workflow execution.</p>
     */
    inline SignalExternalWorkflowExecutionFailedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    SignalExternalWorkflowExecutionFailedCause m_cause;
    bool m_causeHasBeenSet = false;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
