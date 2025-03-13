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
    AWS_SWF_API ActivityTaskScheduledEventAttributes() = default;
    AWS_SWF_API ActivityTaskScheduledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityTaskScheduledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the activity task.</p>
     */
    inline const ActivityType& GetActivityType() const { return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    template<typename ActivityTypeT = ActivityType>
    void SetActivityType(ActivityTypeT&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::forward<ActivityTypeT>(value); }
    template<typename ActivityTypeT = ActivityType>
    ActivityTaskScheduledEventAttributes& WithActivityType(ActivityTypeT&& value) { SetActivityType(std::forward<ActivityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the activity task.</p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input provided to the activity task.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time the activity task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetScheduleToStartTimeout() const { return m_scheduleToStartTimeout; }
    inline bool ScheduleToStartTimeoutHasBeenSet() const { return m_scheduleToStartTimeoutHasBeenSet; }
    template<typename ScheduleToStartTimeoutT = Aws::String>
    void SetScheduleToStartTimeout(ScheduleToStartTimeoutT&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = std::forward<ScheduleToStartTimeoutT>(value); }
    template<typename ScheduleToStartTimeoutT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithScheduleToStartTimeout(ScheduleToStartTimeoutT&& value) { SetScheduleToStartTimeout(std::forward<ScheduleToStartTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time for this activity task.</p>
     */
    inline const Aws::String& GetScheduleToCloseTimeout() const { return m_scheduleToCloseTimeout; }
    inline bool ScheduleToCloseTimeoutHasBeenSet() const { return m_scheduleToCloseTimeoutHasBeenSet; }
    template<typename ScheduleToCloseTimeoutT = Aws::String>
    void SetScheduleToCloseTimeout(ScheduleToCloseTimeoutT&& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = std::forward<ScheduleToCloseTimeoutT>(value); }
    template<typename ScheduleToCloseTimeoutT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithScheduleToCloseTimeout(ScheduleToCloseTimeoutT&& value) { SetScheduleToCloseTimeout(std::forward<ScheduleToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time a worker may take to process the activity
     * task.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const { return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    template<typename StartToCloseTimeoutT = Aws::String>
    void SetStartToCloseTimeout(StartToCloseTimeoutT&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::forward<StartToCloseTimeoutT>(value); }
    template<typename StartToCloseTimeoutT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithStartToCloseTimeout(StartToCloseTimeoutT&& value) { SetStartToCloseTimeout(std::forward<StartToCloseTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task list in which the activity task has been scheduled.</p>
     */
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    ActivityTaskScheduledEventAttributes& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
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
    inline const Aws::String& GetTaskPriority() const { return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    template<typename TaskPriorityT = Aws::String>
    void SetTaskPriority(TaskPriorityT&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::forward<TaskPriorityT>(value); }
    template<typename TaskPriorityT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithTaskPriority(TaskPriorityT&& value) { SetTaskPriority(std::forward<TaskPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision that resulted in the scheduling of this activity task. This information
     * can be useful for diagnosing problems by tracing back the chain of events
     * leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const { return m_decisionTaskCompletedEventId; }
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
    inline const Aws::String& GetHeartbeatTimeout() const { return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    template<typename HeartbeatTimeoutT = Aws::String>
    void SetHeartbeatTimeout(HeartbeatTimeoutT&& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = std::forward<HeartbeatTimeoutT>(value); }
    template<typename HeartbeatTimeoutT = Aws::String>
    ActivityTaskScheduledEventAttributes& WithHeartbeatTimeout(HeartbeatTimeoutT&& value) { SetHeartbeatTimeout(std::forward<HeartbeatTimeoutT>(value)); return *this;}
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

    long long m_decisionTaskCompletedEventId{0};
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;

    Aws::String m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
