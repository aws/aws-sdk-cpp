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
    AWS_SWF_API DecisionTaskCompletedEventAttributes();
    AWS_SWF_API DecisionTaskCompletedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DecisionTaskCompletedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User defined context for the workflow execution.</p>
     */
    inline const Aws::String& GetExecutionContext() const{ return m_executionContext; }
    inline bool ExecutionContextHasBeenSet() const { return m_executionContextHasBeenSet; }
    inline void SetExecutionContext(const Aws::String& value) { m_executionContextHasBeenSet = true; m_executionContext = value; }
    inline void SetExecutionContext(Aws::String&& value) { m_executionContextHasBeenSet = true; m_executionContext = std::move(value); }
    inline void SetExecutionContext(const char* value) { m_executionContextHasBeenSet = true; m_executionContext.assign(value); }
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(const Aws::String& value) { SetExecutionContext(value); return *this;}
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(Aws::String&& value) { SetExecutionContext(std::move(value)); return *this;}
    inline DecisionTaskCompletedEventAttributes& WithExecutionContext(const char* value) { SetExecutionContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }
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
    inline long long GetStartedEventId() const{ return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline DecisionTaskCompletedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline DecisionTaskCompletedEventAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline DecisionTaskCompletedEventAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time the decision task can wait to be assigned to a
     * worker.</p>
     */
    inline const Aws::String& GetTaskListScheduleToStartTimeout() const{ return m_taskListScheduleToStartTimeout; }
    inline bool TaskListScheduleToStartTimeoutHasBeenSet() const { return m_taskListScheduleToStartTimeoutHasBeenSet; }
    inline void SetTaskListScheduleToStartTimeout(const Aws::String& value) { m_taskListScheduleToStartTimeoutHasBeenSet = true; m_taskListScheduleToStartTimeout = value; }
    inline void SetTaskListScheduleToStartTimeout(Aws::String&& value) { m_taskListScheduleToStartTimeoutHasBeenSet = true; m_taskListScheduleToStartTimeout = std::move(value); }
    inline void SetTaskListScheduleToStartTimeout(const char* value) { m_taskListScheduleToStartTimeoutHasBeenSet = true; m_taskListScheduleToStartTimeout.assign(value); }
    inline DecisionTaskCompletedEventAttributes& WithTaskListScheduleToStartTimeout(const Aws::String& value) { SetTaskListScheduleToStartTimeout(value); return *this;}
    inline DecisionTaskCompletedEventAttributes& WithTaskListScheduleToStartTimeout(Aws::String&& value) { SetTaskListScheduleToStartTimeout(std::move(value)); return *this;}
    inline DecisionTaskCompletedEventAttributes& WithTaskListScheduleToStartTimeout(const char* value) { SetTaskListScheduleToStartTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_executionContext;
    bool m_executionContextHasBeenSet = false;

    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskListScheduleToStartTimeout;
    bool m_taskListScheduleToStartTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
