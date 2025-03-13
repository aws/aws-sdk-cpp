/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the details of the <code>ContinueAsNewWorkflowExecution</code>
   * decision.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
   * control this decision's access to Amazon SWF resources as follows:</p> <ul> <li>
   * <p>Use a <code>Resource</code> element with the domain name to limit the action
   * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
   * to allow or deny permission to call this action.</p> </li> <li> <p>Constrain the
   * following parameters by using a <code>Condition</code> element with the
   * appropriate keys.</p> <ul> <li> <p> <code>tag</code> – A tag used to identify
   * the workflow execution</p> </li> <li> <p> <code>taskList</code> – String
   * constraint. The key is <code>swf:taskList.name</code>.</p> </li> <li> <p>
   * <code>workflowType.version</code> – String constraint. The key is
   * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
   * caller doesn't have sufficient permissions to invoke the action, or the
   * parameter values fall outside the specified constraints, the action fails. The
   * associated event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ContinueAsNewWorkflowExecutionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class ContinueAsNewWorkflowExecutionDecisionAttributes
  {
  public:
    AWS_SWF_API ContinueAsNewWorkflowExecutionDecisionAttributes() = default;
    AWS_SWF_API ContinueAsNewWorkflowExecutionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ContinueAsNewWorkflowExecutionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input provided to the new workflow execution.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the total duration for this workflow execution. This
     * overrides the <code>defaultExecutionStartToCloseTimeout</code> specified when
     * registering the workflow type.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>  <p>An execution start-to-close timeout
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this field. If neither this field is set nor a default
     * execution start-to-close timeout was specified at registration time then a fault
     * is returned.</p> 
     */
    inline const Aws::String& GetExecutionStartToCloseTimeout() const { return m_executionStartToCloseTimeout; }
    inline bool ExecutionStartToCloseTimeoutHasBeenSet() const { return m_executionStartToCloseTimeoutHasBeenSet; }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    void SetExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { m_executionStartToCloseTimeoutHasBeenSet = true; m_executionStartToCloseTimeout = std::forward<ExecutionStartToCloseTimeoutT>(value); }
    template<typename ExecutionStartToCloseTimeoutT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithExecutionStartToCloseTimeout(ExecutionStartToCloseTimeoutT&& value) { SetExecutionStartToCloseTimeout(std::forward<ExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task list to use for the decisions of the new (continued) workflow
     * execution.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task priority that, if set, specifies the priority for the decision
     * tasks for this workflow execution. This overrides the defaultTaskPriority
     * specified when registering the workflow type. Valid values are integers that
     * range from Java's <code>Integer.MIN_VALUE</code> (-2147483648) to
     * <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const { return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    template<typename TaskPriorityT = Aws::String>
    void SetTaskPriority(TaskPriorityT&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::forward<TaskPriorityT>(value); }
    template<typename TaskPriorityT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskPriority(TaskPriorityT&& value) { SetTaskPriority(std::forward<TaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum duration of decision tasks for the new workflow
     * execution. This parameter overrides the
     * <code>defaultTaskStartToCloseTimout</code> specified when registering the
     * workflow type using <a>RegisterWorkflowType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>  <p>A task
     * start-to-close timeout for the new workflow execution must be specified either
     * as a default for the workflow type or through this parameter. If neither this
     * parameter is set nor a default task start-to-close timeout was specified at
     * registration time then a fault is returned.</p> 
     */
    inline const Aws::String& GetTaskStartToCloseTimeout() const { return m_taskStartToCloseTimeout; }
    inline bool TaskStartToCloseTimeoutHasBeenSet() const { return m_taskStartToCloseTimeoutHasBeenSet; }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    void SetTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { m_taskStartToCloseTimeoutHasBeenSet = true; m_taskStartToCloseTimeout = std::forward<TaskStartToCloseTimeoutT>(value); }
    template<typename TaskStartToCloseTimeoutT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithTaskStartToCloseTimeout(TaskStartToCloseTimeoutT&& value) { SetTaskStartToCloseTimeout(std::forward<TaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the policy to use for the child workflow executions of the
     * new execution if it is terminated by calling the
     * <a>TerminateWorkflowExecution</a> action explicitly or due to an expired
     * timeout. This policy overrides the default child policy specified when
     * registering the workflow type using <a>RegisterWorkflowType</a>.</p> <p>The
     * supported child policies are:</p> <ul> <li> <p> <code>TERMINATE</code> – The
     * child executions are terminated.</p> </li> <li> <p> <code>REQUEST_CANCEL</code>
     * – A request to cancel is attempted for each child execution by recording a
     * <code>WorkflowExecutionCancelRequested</code> event in its history. It is up to
     * the decider to take appropriate actions when it receives an execution history
     * with this event.</p> </li> <li> <p> <code>ABANDON</code> – No action is taken.
     * The child executions continue to run.</p> </li> </ul>  <p>A child policy
     * for this workflow execution must be specified either as a default for the
     * workflow type or through this parameter. If neither this parameter is set nor a
     * default child policy was specified at registration time then a fault is
     * returned.</p> 
     */
    inline ChildPolicy GetChildPolicy() const { return m_childPolicy; }
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }
    inline void SetChildPolicy(ChildPolicy value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }
    inline ContinueAsNewWorkflowExecutionDecisionAttributes& WithChildPolicy(ChildPolicy value) { SetChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags to associate with the new workflow execution. A maximum of 5
     * tags can be specified. You can list workflow executions with a specific tag by
     * calling <a>ListOpenWorkflowExecutions</a> or <a>ListClosedWorkflowExecutions</a>
     * and specifying a <a>TagFilter</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Aws::String>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Aws::String>>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the workflow to start.</p>
     */
    inline const Aws::String& GetWorkflowTypeVersion() const { return m_workflowTypeVersion; }
    inline bool WorkflowTypeVersionHasBeenSet() const { return m_workflowTypeVersionHasBeenSet; }
    template<typename WorkflowTypeVersionT = Aws::String>
    void SetWorkflowTypeVersion(WorkflowTypeVersionT&& value) { m_workflowTypeVersionHasBeenSet = true; m_workflowTypeVersion = std::forward<WorkflowTypeVersionT>(value); }
    template<typename WorkflowTypeVersionT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithWorkflowTypeVersion(WorkflowTypeVersionT&& value) { SetWorkflowTypeVersion(std::forward<WorkflowTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role to attach to the new (continued) execution.</p>
     */
    inline const Aws::String& GetLambdaRole() const { return m_lambdaRole; }
    inline bool LambdaRoleHasBeenSet() const { return m_lambdaRoleHasBeenSet; }
    template<typename LambdaRoleT = Aws::String>
    void SetLambdaRole(LambdaRoleT&& value) { m_lambdaRoleHasBeenSet = true; m_lambdaRole = std::forward<LambdaRoleT>(value); }
    template<typename LambdaRoleT = Aws::String>
    ContinueAsNewWorkflowExecutionDecisionAttributes& WithLambdaRole(LambdaRoleT&& value) { SetLambdaRole(std::forward<LambdaRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_executionStartToCloseTimeout;
    bool m_executionStartToCloseTimeoutHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    Aws::String m_taskStartToCloseTimeout;
    bool m_taskStartToCloseTimeoutHasBeenSet = false;

    ChildPolicy m_childPolicy{ChildPolicy::NOT_SET};
    bool m_childPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::String m_workflowTypeVersion;
    bool m_workflowTypeVersionHasBeenSet = false;

    Aws::String m_lambdaRole;
    bool m_lambdaRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
