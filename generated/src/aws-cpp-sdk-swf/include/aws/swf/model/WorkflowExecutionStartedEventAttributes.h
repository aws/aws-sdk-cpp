/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ChildPolicy.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/WorkflowExecution.h>
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
   * <p>Provides details of <code>WorkflowExecutionStarted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionStartedEventAttributes
  {
  public:
    AWS_SWF_API WorkflowExecutionStartedEventAttributes() = default;
    AWS_SWF_API WorkflowExecutionStartedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionStartedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input provided to the workflow execution.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const { return m_executionStartToCloseTimeout; }
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    void SetExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::forward<ExecutionStartToCloseTimeoutT>(value); }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { SetExecutionStartToCloseTimeout(std::forward<ExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of decision tasks for this workflow type.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const { return m_taskStartToCloseTimeout; }
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    void SetTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::forward<TaskStartToCloseTimeoutT>(value); }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { SetTaskStartToCloseTimeout(std::forward<TaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy to use for the child workflow executions if this workflow
     * execution is terminated, by calling the <a>TerminateWorkflowExecution</a> action
     * explicitly or due to an expired timeout.</p> <p>The supported child policies
     * are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child executions are
     * terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A request to cancel
     * is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline ChildPolicy GetChildPolicy() const { return m_childPolicy; }
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }
    inline void SetChildPolicy(ChildPolicy value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }
    inline WorkflowExecutionStartedEventAttributes& WithChildPolicy(ChildPolicy value) { SetChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task list for scheduling the decision tasks for this workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    WorkflowExecutionStartedEventAttributes& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the decision tasks in the workflow execution.</p>
     */
    inline const Aws::String& GetTaskPriority() const { return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    template<typename TaskPriorityT = Aws::String>
    void SetTaskPriority(TaskPriorityT&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::forward<TaskPriorityT>(value); }
    template<typename TaskPriorityT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithTaskPriority(TaskPriorityT&& value) { SetTaskPriority(std::forward<TaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow type of this execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    WorkflowExecutionStartedEventAttributes& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with this workflow execution. An execution can
     * have up to 5 tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Aws::String>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Aws::String>>
    WorkflowExecutionStartedEventAttributes& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Aws::String>
    WorkflowExecutionStartedEventAttributes& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this workflow execution was started due to a
     * <code>ContinueAsNewWorkflowExecution</code> decision, then it contains the
     * <code>runId</code> of the previous workflow execution that was closed and
     * continued as this execution.</p>
     */
    inline const Aws::String& GetContinuedExecutionRunId() const { return m_continuedExecutionRunId; }
    inline bool ContinuedExecutionRunIdHasBeenSet() const { return m_continuedExecutionRunIdHasBeenSet; }
    template<typename ContinuedExecutionRunIdT = Aws::String>
    void SetContinuedExecutionRunId(ContinuedExecutionRunIdT&& value) { m_continuedExecutionRunIdHasBeenSet = true; m_continuedExecutionRunId = std::forward<ContinuedExecutionRunIdT>(value); }
    template<typename ContinuedExecutionRunIdT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithContinuedExecutionRunId(ContinuedExecutionRunIdT&& value) { SetContinuedExecutionRunId(std::forward<ContinuedExecutionRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source workflow execution that started this workflow execution. The
     * member isn't set if the workflow execution was not started by a workflow.</p>
     */
    inline const WorkflowExecution& GetParentWorkflowExecution() const { return m_parentWorkflowExecution; }
    inline bool ParentWorkflowExecutionHasBeenSet() const { return m_parentWorkflowExecutionHasBeenSet; }
    template<typename ParentWorkflowExecutionT = WorkflowExecution>
    void SetParentWorkflowExecution(ParentWorkflowExecutionT&& value) { m_parentWorkflowExecutionHasBeenSet = true; m_parentWorkflowExecution = std::forward<ParentWorkflowExecutionT>(value); }
    template<typename ParentWorkflowExecutionT = WorkflowExecution>
    WorkflowExecutionStartedEventAttributes& WithParentWorkflowExecution(ParentWorkflowExecutionT&& value) { SetParentWorkflowExecution(std::forward<ParentWorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this workflow execution. The source event with this ID can be found in the
     * history of the source workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetParentInitiatedEventId() const { return m_parentInitiatedEventId; }
    inline bool ParentInitiatedEventIdHasBeenSet() const { return m_parentInitiatedEventIdHasBeenSet; }
    inline void SetParentInitiatedEventId(long long value) { m_parentInitiatedEventIdHasBeenSet = true; m_parentInitiatedEventId = value; }
    inline WorkflowExecutionStartedEventAttributes& WithParentInitiatedEventId(long long value) { SetParentInitiatedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role attached to the workflow execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const { return m_lambdaRole; }
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }
    template<typename LambdaRoleT = Aws::String>
    void SetLambdaRole(LambdaRoleT&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::forward<LambdaRoleT>(value); }
    template<typename LambdaRoleT = Aws::String>
    WorkflowExecutionStartedEventAttributes& WithLambdaRole(LambdaRoleT&& value) { SetLambdaRole(std::forward<LambdaRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet = false;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet = false;

    ChildPolicy m_childPolicy{ChildPolicy::NOT_SET};
    bool m_childPolicyHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::String m_continuedExecutionRunId;
    bool m_continuedExecutionRunIdHasBeenSet = false;

    WorkflowExecution m_parentWorkflowExecution;
    bool m_parentWorkflowExecutionHasBeenSet = false;

    long long m_parentInitiatedEventId{0};
    bool m_parentInitiatedEventIdHasBeenSet = false;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
