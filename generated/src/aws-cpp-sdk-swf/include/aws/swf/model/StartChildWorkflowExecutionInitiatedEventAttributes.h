/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/ChildPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides the details of the <code>StartChildWorkflowExecutionInitiated</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartChildWorkflowExecutionInitiatedEventAttributes">AWS
   * API Reference</a></p>
   */
  class StartChildWorkflowExecutionInitiatedEventAttributes
  {
  public:
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes();
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided to the child workflow execution.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution isn't closed within this duration, it is timed out and
     * force-terminated.</p> <p>The duration is specified in seconds, an integer
     * greater than or equal to <code>0</code>. You can use <code>NONE</code> to
     * specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const{ return m_executionStartToCloseTimeout; }
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }
    inline void SetExecutionStartToCloseTimeout(const Aws::String& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = value; }
    inline void SetExecutionStartToCloseTimeout(Aws::String&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::move(value); }
    inline void SetExecutionStartToCloseTimeout(const char* value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(const Aws::String& value) { SetExecutionStartToCloseTimeout(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(Aws::String&& value) { SetExecutionStartToCloseTimeout(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(const char* value) { SetExecutionStartToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The priority assigned for the decision tasks for this workflow execution.
     * Valid values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy to use for the child workflow executions if this execution gets
     * terminated by explicitly calling the <a>TerminateWorkflowExecution</a> action or
     * due to an expired timeout.</p> <p>The supported child policies are:</p> <ul>
     * <li> <p> <code>TERMINATE</code> – The child executions are terminated.</p> </li>
     * <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each
     * child execution by recording a <code>WorkflowExecutionCancelRequested</code>
     * event in its history. It is up to the decider to take appropriate actions when
     * it receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul>
     */
    inline const ChildPolicy& GetChildPolicy() const{ return m_childPolicy; }
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }
    inline void SetChildPolicy(const ChildPolicy& value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }
    inline void SetChildPolicy(ChildPolicy&& value) { m_childPolicyHasBeenSet = true; m_childPolicy = std::move(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithChildPolicy(const ChildPolicy& value) { SetChildPolicy(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithChildPolicy(ChildPolicy&& value) { SetChildPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds, an integer greater than
     * or equal to <code>0</code>. You can use <code>NONE</code> to specify unlimited
     * duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const{ return m_taskStartToCloseTimeout; }
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }
    inline void SetTaskStartToCloseTimeout(const Aws::String& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = value; }
    inline void SetTaskStartToCloseTimeout(Aws::String&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::move(value); }
    inline void SetTaskStartToCloseTimeout(const char* value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(const Aws::String& value) { SetTaskStartToCloseTimeout(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(Aws::String&& value) { SetTaskStartToCloseTimeout(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(const char* value) { SetTaskStartToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Aws::String>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Aws::String>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTagList(const Aws::Vector<Aws::String>& value) { SetTagList(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithTagList(Aws::Vector<Aws::String>&& value) { SetTagList(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(const Aws::String& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(Aws::String&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(const char* value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role to attach to the child workflow execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const{ return m_lambdaRole; }
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }
    inline void SetLambdaRole(const Aws::String& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = value; }
    inline void SetLambdaRole(Aws::String&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::move(value); }
    inline void SetLambdaRole(const char* value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole.assign(value); }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(const Aws::String& value) { SetLambdaRole(value); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(Aws::String&& value) { SetLambdaRole(std::move(value)); return *this;}
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(const char* value) { SetLambdaRole(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    ChildPolicy m_childPolicy;
    bool m_childPolicyHasBeenSet = false;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
