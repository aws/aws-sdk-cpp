﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/TaskList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides details about the <code>DecisionTaskScheduled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskScheduledEventAttributes">AWS
   * API Reference</a></p>
   */
  class DecisionTaskScheduledEventAttributes
  {
  public:
    AWS_SWF_API DecisionTaskScheduledEventAttributes();
    AWS_SWF_API DecisionTaskScheduledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DecisionTaskScheduledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the task list in which the decision task was scheduled.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline DecisionTaskScheduledEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A task priority that, if set, specifies the priority for this decision task.
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
    inline DecisionTaskScheduledEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration for this decision task. The task is considered timed out
     * if it doesn't completed within this duration.</p> <p>The duration is specified
     * in seconds, an integer greater than or equal to <code>0</code>. You can use
     * <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }
    inline DecisionTaskScheduledEventAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time the decision task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetScheduleToStartTimeout() const{ return m_scheduleToStartTimeout; }
    inline bool ScheduleToStartTimeoutHasBeenSet() const { return m_scheduleToStartTimeoutHasBeenSet; }
    inline void SetScheduleToStartTimeout(const Aws::String& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }
    inline void SetScheduleToStartTimeout(Aws::String&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = std::move(value); }
    inline void SetScheduleToStartTimeout(const char* value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout.assign(value); }
    inline DecisionTaskScheduledEventAttributes& WithScheduleToStartTimeout(const Aws::String& value) { SetScheduleToStartTimeout(value); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithScheduleToStartTimeout(Aws::String&& value) { SetScheduleToStartTimeout(std::move(value)); return *this;}
    inline DecisionTaskScheduledEventAttributes& WithScheduleToStartTimeout(const char* value) { SetScheduleToStartTimeout(value); return *this;}
    ///@}
  private:

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet = false;

    Aws::String m_scheduleToStartTimeout;
    bool m_scheduleToStartTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
