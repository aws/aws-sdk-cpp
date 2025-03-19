/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
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
   * <p>Configuration settings registered with the activity type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class ActivityTypeConfiguration
  {
  public:
    AWS_SWF_API ActivityTypeConfiguration() = default;
    AWS_SWF_API ActivityTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The default maximum duration for tasks of an activity type specified when
     * registering the activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskStartToCloseTimeout() const { return m_defaultTaskStartToCloseTimeout; }
    inline bool DefaultTaskStartToCloseTimeoutHasBeenSet() const { return m_defaultTaskStartToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    void SetDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { m_defaultTaskStartToCloseTimeoutHasBeenSet = true; m_defaultTaskStartToCloseTimeout = std::forward<DefaultTaskStartToCloseTimeoutT>(value); }
    template<typename DefaultTaskStartToCloseTimeoutT = Aws::String>
    ActivityTypeConfiguration& WithDefaultTaskStartToCloseTimeout(DefaultTaskStartToCloseTimeoutT&& value) { SetDefaultTaskStartToCloseTimeout(std::forward<DefaultTaskStartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default maximum time, in seconds, before which a worker processing a
     * task must report progress by calling <a>RecordActivityTaskHeartbeat</a>.</p>
     * <p>You can specify this value only when <i>registering</i> an activity type. The
     * registered default value can be overridden when you schedule a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>. If the activity worker
     * subsequently attempts to record a heartbeat or returns a result, the activity
     * worker receives an <code>UnknownResource</code> fault. In this case, Amazon SWF
     * no longer considers the activity task to be valid; the activity worker should
     * clean up the activity task.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskHeartbeatTimeout() const { return m_defaultTaskHeartbeatTimeout; }
    inline bool DefaultTaskHeartbeatTimeoutHasBeenSet() const { return m_defaultTaskHeartbeatTimeoutHasBeenSet; }
    template<typename DefaultTaskHeartbeatTimeoutT = Aws::String>
    void SetDefaultTaskHeartbeatTimeout(DefaultTaskHeartbeatTimeoutT&& value) { m_defaultTaskHeartbeatTimeoutHasBeenSet = true; m_defaultTaskHeartbeatTimeout = std::forward<DefaultTaskHeartbeatTimeoutT>(value); }
    template<typename DefaultTaskHeartbeatTimeoutT = Aws::String>
    ActivityTypeConfiguration& WithDefaultTaskHeartbeatTimeout(DefaultTaskHeartbeatTimeoutT&& value) { SetDefaultTaskHeartbeatTimeout(std::forward<DefaultTaskHeartbeatTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default task list specified for this activity type at registration. This
     * default is used if a task list isn't provided when a task is scheduled through
     * the <code>ScheduleActivityTask</code> <a>Decision</a>. You can override the
     * default registered task list when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p>
     */
    inline const TaskList& GetDefaultTaskList() const { return m_defaultTaskList; }
    inline bool DefaultTaskListHasBeenSet() const { return m_defaultTaskListHasBeenSet; }
    template<typename DefaultTaskListT = TaskList>
    void SetDefaultTaskList(DefaultTaskListT&& value) { m_defaultTaskListHasBeenSet = true; m_defaultTaskList = std::forward<DefaultTaskListT>(value); }
    template<typename DefaultTaskListT = TaskList>
    ActivityTypeConfiguration& WithDefaultTaskList(DefaultTaskListT&& value) { SetDefaultTaskList(std::forward<DefaultTaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default task priority for tasks of this activity type, specified at
     * registration. If not set, then <code>0</code> is used as the default priority.
     * This default can be overridden when scheduling an activity task.</p> <p>Valid
     * values are integers that range from Java's <code>Integer.MIN_VALUE</code>
     * (-2147483648) to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers
     * indicate higher priority.</p> <p>For more information about setting task
     * priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDefaultTaskPriority() const { return m_defaultTaskPriority; }
    inline bool DefaultTaskPriorityHasBeenSet() const { return m_defaultTaskPriorityHasBeenSet; }
    template<typename DefaultTaskPriorityT = Aws::String>
    void SetDefaultTaskPriority(DefaultTaskPriorityT&& value) { m_defaultTaskPriorityHasBeenSet = true; m_defaultTaskPriority = std::forward<DefaultTaskPriorityT>(value); }
    template<typename DefaultTaskPriorityT = Aws::String>
    ActivityTypeConfiguration& WithDefaultTaskPriority(DefaultTaskPriorityT&& value) { SetDefaultTaskPriority(std::forward<DefaultTaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * that a task of an activity type can wait before being assigned to a worker. You
     * can override this default when scheduling a task through the
     * <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToStartTimeout() const { return m_defaultTaskScheduleToStartTimeout; }
    inline bool DefaultTaskScheduleToStartTimeoutHasBeenSet() const { return m_defaultTaskScheduleToStartTimeoutHasBeenSet; }
    template<typename DefaultTaskScheduleToStartTimeoutT = Aws::String>
    void SetDefaultTaskScheduleToStartTimeout(DefaultTaskScheduleToStartTimeoutT&& value) { m_defaultTaskScheduleToStartTimeoutHasBeenSet = true; m_defaultTaskScheduleToStartTimeout = std::forward<DefaultTaskScheduleToStartTimeoutT>(value); }
    template<typename DefaultTaskScheduleToStartTimeoutT = Aws::String>
    ActivityTypeConfiguration& WithDefaultTaskScheduleToStartTimeout(DefaultTaskScheduleToStartTimeoutT&& value) { SetDefaultTaskScheduleToStartTimeout(std::forward<DefaultTaskScheduleToStartTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default maximum duration, specified when registering the activity type,
     * for tasks of this activity type. You can override this default when scheduling a
     * task through the <code>ScheduleActivityTask</code> <a>Decision</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetDefaultTaskScheduleToCloseTimeout() const { return m_defaultTaskScheduleToCloseTimeout; }
    inline bool DefaultTaskScheduleToCloseTimeoutHasBeenSet() const { return m_defaultTaskScheduleToCloseTimeoutHasBeenSet; }
    template<typename DefaultTaskScheduleToCloseTimeoutT = Aws::String>
    void SetDefaultTaskScheduleToCloseTimeout(DefaultTaskScheduleToCloseTimeoutT&& value) { m_defaultTaskScheduleToCloseTimeoutHasBeenSet = true; m_defaultTaskScheduleToCloseTimeout = std::forward<DefaultTaskScheduleToCloseTimeoutT>(value); }
    template<typename DefaultTaskScheduleToCloseTimeoutT = Aws::String>
    ActivityTypeConfiguration& WithDefaultTaskScheduleToCloseTimeout(DefaultTaskScheduleToCloseTimeoutT&& value) { SetDefaultTaskScheduleToCloseTimeout(std::forward<DefaultTaskScheduleToCloseTimeoutT>(value)); return *this;}
    ///@}
  private:

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
