/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class RegisterActivityTypeRequest : public SWFRequest
  {
  public:
    AWS_SWF_API RegisterActivityTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterActivityType"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain in which this activity is to be registered.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    RegisterActivityTypeRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must
     * <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegisterActivityTypeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the activity type.</p>  <p>The activity type consists of
     * the name and version, the combination of which must be unique within the
     * domain.</p>  <p>The specified string must not contain a <code>:</code>
     * (colon), <code>/</code> (slash), <code>|</code> (vertical bar), or any control
     * characters (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it
     * must <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RegisterActivityTypeRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A textual description of the activity type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegisterActivityTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration that a worker can take to
     * process tasks of this activity type. This default can be overridden when
     * scheduling an activity task using the <code>ScheduleActivityTask</code>
     * <a>Decision</a>.</p> <p>The duration is specified in seconds, an integer greater
     * than or equal to <code>0</code>. You can use <code>NONE</code> to specify
     * unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const { return m_defaultTaskStartToCloseTimeout; }
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    void SetDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::forward<DefaultTaskStartToCloseTimeoutT>(value); }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { SetDefaultTaskStartToCloseTimeout(std::forward<DefaultTaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum time before which a worker processing a
     * task of this type must report progress by calling
     * <a>RecordActivityTaskHeartbeat</a>. If the timeout is exceeded, the activity
     * task is automatically timed out. This default can be overridden when scheduling
     * an activity task using the <code>ScheduleActivityTask</code> <a>Decision</a>. If
     * the activity worker subsequently attempts to record a heartbeat or returns a
     * result, the activity worker receives an <code>UnknownResource</code> fault. In
     * this case, Amazon SWF no longer considers the activity task to be valid; the
     * activity worker should clean up the activity task.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskHeartbeatTimeout() const { return m_defaultTaskHeartbeatTimeout; }
    inline bool DefaultTaskHeartbeatTimeoutHasBeenSet() const { return m_defaultTaskHeartbeatTimeoutHasBeenSet; }
    template<typename DefaultTaskHeartbeatTimeoutT = Aws::String>
    void SetDefaultTaskHeartbeatTimeout(DefaultTaskHeartbeatTimeoutT&& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = std::forward<DefaultTaskHeartbeatTimeoutT>(value); }
    template<typename DefaultTaskHeartbeatTimeoutT = Aws::String>
    RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(DefaultTaskHeartbeatTimeoutT&& value) { SetDefaultTaskHeartbeatTimeout(std::forward<DefaultTaskHeartbeatTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list isn't provided when
     * a task is scheduled through the <code>ScheduleActivityTask</code>
     * <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const { return m_defaultTaskList; }
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }
    template<typename DefaultTaskListT = TaskList>
    void SetDefaultTaskList(DefaultTaskListT&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::forward<DefaultTaskListT>(value); }
    template<typename DefaultTaskListT = TaskList>
    RegisterActivityTypeRequest& WithDefaultTaskList(DefaultTaskListT&& value) { SetDefaultTaskList(std::forward<DefaultTaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default task priority to assign to the activity type. If not assigned,
     * then <code>0</code> is used. Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>in the <i>Amazon SWF Developer Guide</i>.</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const { return m_defaultTaskPriority; }
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }
    template<typename DefaultTaskPriorityT = Aws::String>
    void SetDefaultTaskPriority(DefaultTaskPriorityT&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::forward<DefaultTaskPriorityT>(value); }
    template<typename DefaultTaskPriorityT = Aws::String>
    RegisterActivityTypeRequest& WithDefaultTaskPriority(DefaultTaskPriorityT&& value) { SetDefaultTaskPriority(std::forward<DefaultTaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration that a task of this activity
     * type can wait before being assigned to a worker. This default can be overridden
     * when scheduling an activity task using the <code>ScheduleActivityTask</code>
     * <a>Decision</a>.</p> <p>The duration is specified in seconds, an integer greater
     * than or equal to <code>0</code>. You can use <code>NONE</code> to specify
     * unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToStartTimeout() const { return m_defaultTaskScheduleToStartTimeout; }
    inline bool DefaultTaskScheduleToStartTimeoutHasBeenSet() const { return m_defaultTaskScheduleToStartTimeoutHasBeenSet; }
    template<typename DefaultTaskScheduleToStartTimeoutT = Aws::String>
    void SetDefaultTaskScheduleToStartTimeout(DefaultTaskScheduleToStartTimeoutT&& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = std::forward<DefaultTaskScheduleToStartTimeoutT>(value); }
    template<typename DefaultTaskScheduleToStartTimeoutT = Aws::String>
    RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(DefaultTaskScheduleToStartTimeoutT&& value) { SetDefaultTaskScheduleToStartTimeout(std::forward<DefaultTaskScheduleToStartTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToCloseTimeout() const { return m_defaultTaskScheduleToCloseTimeout; }
    inline bool DefaultTaskScheduleToCloseTimeoutHasBeenSet() const { return m_defaultTaskScheduleToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskScheduleToCloseTimeoutT = Aws::String>
    void SetDefaultTaskScheduleToCloseTimeout(DefaultTaskScheduleToCloseTimeoutT&& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = std::forward<DefaultTaskScheduleToCloseTimeoutT>(value); }
    template<typename DefaultTaskScheduleToCloseTimeoutT = Aws::String>
    RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(DefaultTaskScheduleToCloseTimeoutT&& value) { SetDefaultTaskScheduleToCloseTimeout(std::forward<DefaultTaskScheduleToCloseTimeoutT>(value)); return *this;}
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

    Aws::String m_defaultTaskHeartbeatTimeout;
    bool m_defaultTaskHeartbeatTimeoutHasBeenSet = false;

    TaskList m_defaultTaskList;
    bool m_defaultTaskListHasBeenSet = false;

    Aws::String m_defaultTaskPriority;
    bool m_defaultTaskPriorityHasBeenSet = false;

    Aws::String m_defaultTaskScheduleToStartTimeout;
    bool m_defaultTaskScheduleToStartTimeoutHasBeenSet = false;

    Aws::String m_defaultTaskScheduleToCloseTimeout;
    bool m_defaultTaskScheduleToCloseTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
