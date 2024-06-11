/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
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
   * <p>Provides the details of the <code>ActivityTaskScheduled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskScheduledEventAttributes">AWS
   * API Reference</a></p>
   */
  class ActivityTaskScheduledEventAttributes
  {
  public:
    AWS_SWF_API ActivityTaskScheduledEventAttributes();
    AWS_SWF_API ActivityTaskScheduledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTaskScheduledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the activity task.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }
    inline ActivityTaskScheduledEventAttributes& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input provided to the activity task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithControl(const char* value) { SetControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetScheduleToStartTimeout() const{ return m_scheduleToStartTimeout; }
    inline bool ScheduleToStartTimeoutHasBeenSet() const { return m_scheduleToStartTimeoutHasBeenSet; }
    inline void SetScheduleToStartTimeout(const Aws::String& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }
    inline void SetScheduleToStartTimeout(Aws::String&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = std::move(value); }
    inline void SetScheduleToStartTimeout(const char* value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(const Aws::String& value) { SetScheduleToStartTimeout(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(Aws::String&& value) { SetScheduleToStartTimeout(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(const char* value) { SetScheduleToStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline const Aws::String& GetScheduleToCloseTimeout() const{ return m_scheduleToCloseTimeout; }
    inline bool ScheduleToCloseTimeoutHasBeenSet() const { return m_scheduleToCloseTimeoutHasBeenSet; }
    inline void SetScheduleToCloseTimeout(const Aws::String& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = value; }
    inline void SetScheduleToCloseTimeout(Aws::String&& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = std::move(value); }
    inline void SetScheduleToCloseTimeout(const char* value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(const Aws::String& value) { SetScheduleToCloseTimeout(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(Aws::String&& value) { SetScheduleToCloseTimeout(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(const char* value) { SetScheduleToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline ActivityTaskScheduledEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The priority to assign to the scheduled activity task. If set, this
     * overrides any default priority value that was assigned when the activity type
     * was registered.</p> <p>Valid values are integers that range from Java's
     * <code>Integer.MIN_VALUE</code> (-2147483648) to <code>Integer.MAX_VALUE</code>
     * (2147483647). Higher numbers indicate higher priority.</p> <p>For more
     * information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }
    inline ActivityTaskScheduledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time before which the worker processing this task must report
     * progress by calling <a>RecordActivityTaskHeartbeat</a>. If the timeout is
     * exceeded, the activity task is automatically timed out. If the worker
     * subsequently attempts to record a heartbeat or return a result, it is
     * ignored.</p>
     */
    inline const Aws::String& GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    inline void SetHeartbeatTimeout(const Aws::String& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }
    inline void SetHeartbeatTimeout(Aws::String&& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = std::move(value); }
    inline void SetHeartbeatTimeout(const char* value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout.assign(value); }
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(const Aws::String& value) { SetHeartbeatTimeout(value); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(Aws::String&& value) { SetHeartbeatTimeout(std::move(value)); return *this;}
    inline ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(const char* value) { SetHeartbeatTimeout(value); return *this;}
    ///@}
  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_scheduleToStartTimeout;
    bool m_scheduleToStartTimeoutHasBeenSet = false;

    Aws::String m_scheduleToCloseTimeout;
    bool m_scheduleToCloseTimeoutHasBeenSet = false;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    Aws::String m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
