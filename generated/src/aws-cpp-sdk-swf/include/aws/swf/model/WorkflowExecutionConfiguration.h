/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/ChildPolicy.h>
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
   * <p>The configuration settings for a workflow execution including timeout values,
   * tasklist etc. These configuration settings are determined from the defaults
   * specified when registering the workflow type and those specified when starting
   * the workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionConfiguration
  {
  public:
    AWS_SWF_API WorkflowExecutionConfiguration() = default;
    AWS_SWF_API WorkflowExecutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum duration allowed for decision tasks for this workflow
     * execution.</p> <p>The duration is specified in seconds, an integer greater than
     * or equal to <code>0</code>. You can use <code>NONE</code> to specify unlimited
     * duration.</p>
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const { return m_taskStartToCloseTimeout; }
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    void SetTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::forward<TaskStartToCloseTimeoutT>(value); }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    WorkflowExecutionConfiguration& WithTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { SetTaskStartToCloseTimeout(std::forward<TaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration for this workflow execution.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const { return m_executionStartToCloseTimeout; }
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    void SetExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::forward<ExecutionStartToCloseTimeoutT>(value); }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    WorkflowExecutionConfiguration& WithExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { SetExecutionStartToCloseTimeout(std::forward<ExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task list used for the decision tasks generated for this workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    WorkflowExecutionConfiguration& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority assigned to decision tasks for this workflow execution. Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
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
    WorkflowExecutionConfiguration& WithTaskPriority(TaskPriorityT&& value) { SetTaskPriority(std::forward<TaskPriorityT>(value)); return *this;}
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
    inline WorkflowExecutionConfiguration& WithChildPolicy(ChildPolicy value) { SetChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role attached to the child workflow execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const { return m_lambdaRole; }
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }
    template<typename LambdaRoleT = Aws::String>
    void SetLambdaRole(LambdaRoleT&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::forward<LambdaRoleT>(value); }
    template<typename LambdaRoleT = Aws::String>
    WorkflowExecutionConfiguration& WithLambdaRole(LambdaRoleT&& value) { SetLambdaRole(std::forward<LambdaRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet = false;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    ChildPolicy m_childPolicy{ChildPolicy::NOT_SET};
    bool m_childPolicyHasBeenSet = false;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
