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
    AWS_SWF_API RegisterActivityTypeRequest();

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
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline RegisterActivityTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline RegisterActivityTypeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the activity type within the domain.</p> <p>The specified string
     * must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must
     * <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RegisterActivityTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegisterActivityTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline RegisterActivityTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline RegisterActivityTypeRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A textual description of the activity type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RegisterActivityTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RegisterActivityTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const{ return m_defaultTaskStartToCloseTimeout; }
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }
    inline void SetDefaultTaskStartToCloseTimeout(const Aws::String& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = value; }
    inline void SetDefaultTaskStartToCloseTimeout(Aws::String&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::move(value); }
    inline void SetDefaultTaskStartToCloseTimeout(const char* value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout.assign(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(const Aws::String& value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(Aws::String&& value) { SetDefaultTaskStartToCloseTimeout(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskStartToCloseTimeout(const char* value) { SetDefaultTaskStartToCloseTimeout(value); return *this;}
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
    inline const Aws::String& GetDefaultTaskHeartbeatTimeout() const{ return m_defaultTaskHeartbeatTimeout; }
    inline bool DefaultTaskHeartbeatTimeoutHasBeenSet() const { return m_defaultTaskHeartbeatTimeoutHasBeenSet; }
    inline void SetDefaultTaskHeartbeatTimeout(const Aws::String& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = value; }
    inline void SetDefaultTaskHeartbeatTimeout(Aws::String&& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = std::move(value); }
    inline void SetDefaultTaskHeartbeatTimeout(const char* value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout.assign(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(const Aws::String& value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(Aws::String&& value) { SetDefaultTaskHeartbeatTimeout(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskHeartbeatTimeout(const char* value) { SetDefaultTaskHeartbeatTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default task list to use for scheduling tasks of this
     * activity type. This default task list is used if a task list isn't provided when
     * a task is scheduled through the <code>ScheduleActivityTask</code>
     * <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const{ return m_defaultTaskList; }
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }
    inline void SetDefaultTaskList(const TaskList& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = value; }
    inline void SetDefaultTaskList(TaskList&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::move(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskList(const TaskList& value) { SetDefaultTaskList(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskList(TaskList&& value) { SetDefaultTaskList(std::move(value)); return *this;}
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
    inline const Aws::String& GetDefaultTaskPriority() const{ return m_defaultTaskPriority; }
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }
    inline void SetDefaultTaskPriority(const Aws::String& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = value; }
    inline void SetDefaultTaskPriority(Aws::String&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::move(value); }
    inline void SetDefaultTaskPriority(const char* value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority.assign(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(const Aws::String& value) { SetDefaultTaskPriority(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(Aws::String&& value) { SetDefaultTaskPriority(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskPriority(const char* value) { SetDefaultTaskPriority(value); return *this;}
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
    inline const Aws::String& GetDefaultTaskScheduleToStartTimeout() const{ return m_defaultTaskScheduleToStartTimeout; }
    inline bool DefaultTaskScheduleToStartTimeoutHasBeenSet() const { return m_defaultTaskScheduleToStartTimeoutHasBeenSet; }
    inline void SetDefaultTaskScheduleToStartTimeout(const Aws::String& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = value; }
    inline void SetDefaultTaskScheduleToStartTimeout(Aws::String&& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = std::move(value); }
    inline void SetDefaultTaskScheduleToStartTimeout(const char* value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout.assign(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(const Aws::String& value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(Aws::String&& value) { SetDefaultTaskScheduleToStartTimeout(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToStartTimeout(const char* value) { SetDefaultTaskScheduleToStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the default maximum duration for a task of this activity
     * type. This default can be overridden when scheduling an activity task using the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToCloseTimeout() const{ return m_defaultTaskScheduleToCloseTimeout; }
    inline bool DefaultTaskScheduleToCloseTimeoutHasBeenSet() const { return m_defaultTaskScheduleToCloseTimeoutHasBeenSet; }
    inline void SetDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = value; }
    inline void SetDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = std::move(value); }
    inline void SetDefaultTaskScheduleToCloseTimeout(const char* value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout.assign(value); }
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(const Aws::String& value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(Aws::String&& value) { SetDefaultTaskScheduleToCloseTimeout(std::move(value)); return *this;}
    inline RegisterActivityTypeRequest& WithDefaultTaskScheduleToCloseTimeout(const char* value) { SetDefaultTaskScheduleToCloseTimeout(value); return *this;}
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
