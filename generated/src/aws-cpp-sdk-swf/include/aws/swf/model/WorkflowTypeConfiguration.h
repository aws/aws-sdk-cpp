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
   * <p>The configuration settings of a workflow type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkflowTypeConfiguration
  {
  public:
    AWS_SWF_API WorkflowTypeConfiguration() = default;
    AWS_SWF_API WorkflowTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * that a decision task for executions of this workflow type might take before
     * returning completion or failure. If the task doesn'tdo close in the specified
     * time then the task is automatically timed out and rescheduled. If the decider
     * eventually reports a completion or failure, it is ignored. This default can be
     * overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const { return m_defaultTaskStartToCloseTimeout; }
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    void SetDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::forward<DefaultTaskStartToCloseTimeoutT>(value); }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    WorkflowTypeConfiguration& WithDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { SetDefaultTaskStartToCloseTimeout(std::forward<DefaultTaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default maximum duration, specified when registering the workflow type,
     * for executions of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultExecutionStartToCloseTimeout() const { return m_defaultExecutionStartToCloseTimeout; }
    inline bool DefaultExecutionStartToCloseTimeoutHasBeenSet() const { return m_defaultExecutionStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultExecutionStartToCloseTimeoutT = Aws::String>
    void SetDefaultExecutionStartToCloseTimeout(DefaultExecutionStartToCloseTimeoutT&& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = std::forward<DefaultExecutionStartToCloseTimeoutT>(value); }
    template<typename DefaultExecutionStartToCloseTimeoutT = Aws::String>
    WorkflowTypeConfiguration& WithDefaultExecutionStartToCloseTimeout(DefaultExecutionStartToCloseTimeoutT&& value) { SetDefaultExecutionStartToCloseTimeout(std::forward<DefaultExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default task list, specified when registering the workflow type, for
     * decisions tasks scheduled for workflow executions of this type. This default can
     * be overridden when starting a workflow execution using the
     * <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const { return m_defaultTaskList; }
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }
    template<typename DefaultTaskListT = TaskList>
    void SetDefaultTaskList(DefaultTaskListT&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::forward<DefaultTaskListT>(value); }
    template<typename DefaultTaskListT = TaskList>
    WorkflowTypeConfiguration& WithDefaultTaskList(DefaultTaskListT&& value) { SetDefaultTaskList(std::forward<DefaultTaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default task priority, specified when registering the workflow type, for
     * all decision tasks of this workflow type. This default can be overridden when
     * starting a workflow execution using the <a>StartWorkflowExecution</a> action or
     * the <code>StartChildWorkflowExecution</code> decision.</p> <p>Valid values are
     * integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const { return m_defaultTaskPriority; }
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }
    template<typename DefaultTaskPriorityT = Aws::String>
    void SetDefaultTaskPriority(DefaultTaskPriorityT&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::forward<DefaultTaskPriorityT>(value); }
    template<typename DefaultTaskPriorityT = Aws::String>
    WorkflowTypeConfiguration& WithDefaultTaskPriority(DefaultTaskPriorityT&& value) { SetDefaultTaskPriority(std::forward<DefaultTaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default policy to use for the child workflow executions when a workflow
     * execution of this type is terminated, by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This default can be overridden when starting a workflow execution using
     * the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The supported
     * child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The child
     * executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code> – A
     * request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>
     */
    inline ChildPolicy GetDefaultChildPolicy() const { return m_defaultChildPolicy; }
    inline bool DefaultChildPolicyHasBeenSet() const { return m_defaultChildPolicyHasBeenSet; }
    inline void SetDefaultChildPolicy(ChildPolicy value) { m_defaultChildPolicyHasBeenSet = true; m_defaultChildPolicy = value; }
    inline WorkflowTypeConfiguration& WithDefaultChildPolicy(ChildPolicy value) { SetDefaultChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default IAM role attached to this workflow type.</p>  <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when starting this workflow type, the default Lambda role is
     * attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetDefaultLambdaRole() const { return m_defaultLambdaRole; }
    inline bool DefaultLambdaRoleHasBeenSet() const { return m_defaultLambdaRoleHasBeenSet; }
    template<typename DefaultLambdaRoleT = Aws::String>
    void SetDefaultLambdaRole(DefaultLambdaRoleT&& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = std::forward<DefaultLambdaRoleT>(value); }
    template<typename DefaultLambdaRoleT = Aws::String>
    WorkflowTypeConfiguration& WithDefaultLambdaRole(DefaultLambdaRoleT&& value) { SetDefaultLambdaRole(std::forward<DefaultLambdaRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultTaskStartToCloseTimeout;
    bool m_defaultTaskStartToCloseTimeoutHasBeenSet = false;

    Aws::String m_defaultExecutionStartToCloseTimeout;
    bool m_defaultExecutionStartToCloseTimeoutHasBeenSet = false;

    TaskList m_defaultTaskList;
    bool m_defaultTaskListHasBeenSet = false;

    Aws::String m_defaultTaskPriority;
    bool m_defaultTaskPriorityHasBeenSet = false;

    ChildPolicy m_defaultChildPolicy{ChildPolicy::NOT_SET};
    bool m_defaultChildPolicyHasBeenSet = false;

    Aws::String m_defaultLambdaRole;
    bool m_defaultLambdaRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
