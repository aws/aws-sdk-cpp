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
   * <p>Provides the details of the <code>DecisionTaskCompleted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskCompletedEventAttributes">AWS
   * API Reference</a></p>
   */
  class DecisionTaskCompletedEventAttributes
  {
  public:
    AWS_SWF_API DecisionTaskCompletedEventAttributes() = default;
    AWS_SWF_API DecisionTaskCompletedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DecisionTaskCompletedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline const Aws::String& GetExecutionContext() const { return m_executionContext; }
    inline bool ExecutionContextHasBeenSet() const { return m_executionContextHasBeenSet; }
    template<typename ExecutionContextT = Aws::String>
    void SetExecutionContext(ExecutionContextT&& value) { m_executionContextHasBeenSet = true; m_executionContext = std::forward<ExecutionContextT>(value); }
    template<typename ExecutionContextT = Aws::String>
    DecisionTaskCompletedEventAttributes& WithExecutionContext(ExecutionContextT&& value) { SetExecutionContext(std::forward<ExecutionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const { return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline DecisionTaskCompletedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded when this
     * decision task was started. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline DecisionTaskCompletedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    
    inline const TaskList& GetTaskList() const { return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    template<typename TaskListT = TaskList>
    void SetTaskList(TaskListT&& value) { m_taskListHasBeenSet = true; m_taskList = std::forward<TaskListT>(value); }
    template<typename TaskListT = TaskList>
    DecisionTaskCompletedEventAttributes& WithTaskList(TaskListT&& value) { SetTaskList(std::forward<TaskListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time the decision task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetTaskListScheduleToStartTimeout() const { return m_taskListScheduleToStartTimeout; }
    inline bool TaskListScheduleToStartTimeoutHasBeenSet() const { return m_taskListScheduleToStartTimeoutHasBeenSet; }
    template<typename TaskListScheduleToStartTimeoutT = Aws::String>
    void SetTaskListScheduleToStartTimeout(TaskListScheduleToStartTimeoutT&& value) { m_taskListScheduleToStartTimeoutHasBeenSet = true; m_taskListScheduleToStartTimeout = std::forward<TaskListScheduleToStartTimeoutT>(value); }
    template<typename TaskListScheduleToStartTimeoutT = Aws::String>
    DecisionTaskCompletedEventAttributes& WithTaskListScheduleToStartTimeout(TaskListScheduleToStartTimeoutT&& value) { SetTaskListScheduleToStartTimeout(std::forward<TaskListScheduleToStartTimeoutT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionContext;
    bool m_executionContextHasBeenSet = false;

    long long m_scheduledEventId{0};
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskListScheduleToStartTimeout;
    bool m_taskListScheduleToStartTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
