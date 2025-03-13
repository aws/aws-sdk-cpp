/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
#include <aws/swf/model/ChildPolicy.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class RegisterWorkflowTypeRequest : public SWFRequest
  {
  public:
    AWS_SWF_API RegisterWorkflowTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterWorkflowType"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain in which to register the workflow type.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    RegisterWorkflowTypeRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow type.</p> <p>The specified string must not contain a
     * <code>:</code> (colon), <code>/</code> (slash), <code>|</code> (vertical bar),
     * or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must <i>not</i> be the literal string
     * <code>arn</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegisterWorkflowTypeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the workflow type.</p>  <p>The workflow type consists of
     * the name and version, the combination of which must be unique within the domain.
     * To get a list of all currently registered workflow types, use the
     * <a>ListWorkflowTypes</a> action.</p>  <p>The specified string must not
     * contain a <code>:</code> (colon), <code>/</code> (slash), <code>|</code>
     * (vertical bar), or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must <i>not</i> be the literal string
     * <code>arn</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RegisterWorkflowTypeRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Textual description of the workflow type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegisterWorkflowTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration of decision tasks for this
     * workflow type. This default can be overridden when starting a workflow execution
     * using the <a>StartWorkflowExecution</a> action or the
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const { return m_defaultTaskStartToCloseTimeout; }
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    void SetDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::forward<DefaultTaskStartToCloseTimeoutT>(value); }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    RegisterWorkflowTypeRequest& WithDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { SetDefaultTaskStartToCloseTimeout(std::forward<DefaultTaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration for executions of this
     * workflow type. You can override this default when starting an execution through
     * the <a>StartWorkflowExecution</a> Action or
     * <code>StartChildWorkflowExecution</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds; an integer greater than or equal to 0. Unlike some of the
     * other timeout parameters in Amazon SWF, you cannot specify a value of "NONE" for
     * <code>defaultExecutionStartToCloseTimeout</code>; there is a one-year max limit
     * on the time that a workflow execution can run. Exceeding this limit always
     * causes the workflow execution to time out.</p>
     */
    inline const Aws::String& GetDefaultExecutionStartToCloseTimeout() const { return m_defaultExecutionStartToCloseTimeout; }
    inline bool DefaultExecutionStartToCloseTimeoutHasBeenSet() const { return m_defaultExecutionStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultExecutionStartToCloseTimeoutT = Aws::String>
    void SetDefaultExecutionStartToCloseTimeout(DefaultExecutionStartToCloseTimeoutT&& value) { m_defaultExecutionStartToCloseTimeoutHasBeenSet = true; m_defaultExecutionStartToCloseTimeout = std::forward<DefaultExecutionStartToCloseTimeoutT>(value); }
    template<typename DefaultExecutionStartToCloseTimeoutT = Aws::String>
    RegisterWorkflowTypeRequest& WithDefaultExecutionStartToCloseTimeout(DefaultExecutionStartToCloseTimeoutT&& value) { SetDefaultExecutionStartToCloseTimeout(std::forward<DefaultExecutionStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default task list to use for scheduling decision tasks
     * for executions of this workflow type. This default is used only if a task list
     * isn't provided when starting the execution through the
     * <a>StartWorkflowExecution</a> Action or <code>StartChildWorkflowExecution</code>
     * <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const { return m_defaultTaskList; }
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }
    template<typename DefaultTaskListT = TaskList>
    void SetDefaultTaskList(DefaultTaskListT&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::forward<DefaultTaskListT>(value); }
    template<typename DefaultTaskListT = TaskList>
    RegisterWorkflowTypeRequest& WithDefaultTaskList(DefaultTaskListT&& value) { SetDefaultTaskList(std::forward<DefaultTaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default task priority to assign to the workflow type. If not assigned,
     * then <code>0</code> is used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const { return m_defaultTaskPriority; }
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }
    template<typename DefaultTaskPriorityT = Aws::String>
    void SetDefaultTaskPriority(DefaultTaskPriorityT&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::forward<DefaultTaskPriorityT>(value); }
    template<typename DefaultTaskPriorityT = Aws::String>
    RegisterWorkflowTypeRequest& WithDefaultTaskPriority(DefaultTaskPriorityT&& value) { SetDefaultTaskPriority(std::forward<DefaultTaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default policy to use for the child workflow executions
     * when a workflow execution of this type is terminated, by calling the
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
    inline RegisterWorkflowTypeRequest& WithDefaultChildPolicy(ChildPolicy value) { SetDefaultChildPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default IAM role attached to this workflow type.</p>  <p>Executions
     * of this workflow type need IAM roles to invoke Lambda functions. If you don't
     * specify an IAM role when you start this workflow type, the default Lambda role
     * is attached to the execution. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html">https://docs.aws.amazon.com/amazonswf/latest/developerguide/lambda-task.html</a>
     * in the <i>Amazon SWF Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetDefaultLambdaRole() const { return m_defaultLambdaRole; }
    inline bool DefaultLambdaRoleHasBeenSet() const { return m_defaultLambdaRoleHasBeenSet; }
    template<typename DefaultLambdaRoleT = Aws::String>
    void SetDefaultLambdaRole(DefaultLambdaRoleT&& value) { m_defaultLambdaRoleHasBeenSet = true; m_defaultLambdaRole = std::forward<DefaultLambdaRoleT>(value); }
    template<typename DefaultLambdaRoleT = Aws::String>
    RegisterWorkflowTypeRequest& WithDefaultLambdaRole(DefaultLambdaRoleT&& value) { SetDefaultLambdaRole(std::forward<DefaultLambdaRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
