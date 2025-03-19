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
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes() = default;
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API StartChildWorkflowExecutionInitiatedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>workflowId</code> of the child workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * decision tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided to the child workflow execution.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration for the child workflow execution. If the workflow
     * execution isn't closed within this duration, it is timed out and
     * force-terminated.</p> <p>The duration is specified in seconds, an integer
     * greater than or equal to <code>0</code>. You can use <code>NONE</code> to
     * specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const { return m_executionStartToCloseTimeout; }
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    void SetExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::forward<ExecutionStartToCloseTimeoutT>(value); }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { SetExecutionStartToCloseTimeout(std::forward<ExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task list used for the decision tasks of the child workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
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
    inline const Aws::String& GetTaskPriority() const { return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    template<typename TaskPriorityT = Aws::String>
    void SetTaskPriority(TaskPriorityT&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::forward<TaskPriorityT>(value); }
    template<typename TaskPriorityT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskPriority(TaskPriorityT&& value) { SetTaskPriority(std::forward<TaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>StartChildWorkflowExecution</code>
     * <a>Decision</a> to request this child workflow execution. This information can
     * be useful for diagnosing problems by tracing back the cause of events.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
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
    inline ChildPolicy GetChildPolicy() const { return m_childPolicy; }
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }
    inline void SetChildPolicy(ChildPolicy value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }
    inline StartChildWorkflowExecutionInitiatedEventAttributes& WithChildPolicy(ChildPolicy value) { SetChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration allowed for the decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds, an integer greater than
     * or equal to <code>0</code>. You can use <code>NONE</code> to specify unlimited
     * duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const { return m_taskStartToCloseTimeout; }
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    void SetTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::forward<TaskStartToCloseTimeoutT>(value); }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { SetTaskStartToCloseTimeout(std::forward<TaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags to associated with the child workflow execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Aws::String>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Aws::String>>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role to attach to the child workflow execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const { return m_lambdaRole; }
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }
    template<typename LambdaRoleT = Aws::String>
    void SetLambdaRole(LambdaRoleT&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::forward<LambdaRoleT>(value); }
    template<typename LambdaRoleT = Aws::String>
    StartChildWorkflowExecutionInitiatedEventAttributes& WithLambdaRole(LambdaRoleT&& value) { SetLambdaRole(std::forward<LambdaRoleT>(value)); return *this;}
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

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    ChildPolicy m_childPolicy{ChildPolicy::NOT_SET};
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
