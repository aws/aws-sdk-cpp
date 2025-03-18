/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/HistoryEventType.h>
#include <aws/states/model/ActivityFailedEventDetails.h>
#include <aws/states/model/ActivityScheduleFailedEventDetails.h>
#include <aws/states/model/ActivityScheduledEventDetails.h>
#include <aws/states/model/ActivityStartedEventDetails.h>
#include <aws/states/model/ActivitySucceededEventDetails.h>
#include <aws/states/model/ActivityTimedOutEventDetails.h>
#include <aws/states/model/TaskFailedEventDetails.h>
#include <aws/states/model/TaskScheduledEventDetails.h>
#include <aws/states/model/TaskStartFailedEventDetails.h>
#include <aws/states/model/TaskStartedEventDetails.h>
#include <aws/states/model/TaskSubmitFailedEventDetails.h>
#include <aws/states/model/TaskSubmittedEventDetails.h>
#include <aws/states/model/TaskSucceededEventDetails.h>
#include <aws/states/model/TaskTimedOutEventDetails.h>
#include <aws/states/model/ExecutionFailedEventDetails.h>
#include <aws/states/model/ExecutionStartedEventDetails.h>
#include <aws/states/model/ExecutionSucceededEventDetails.h>
#include <aws/states/model/ExecutionAbortedEventDetails.h>
#include <aws/states/model/ExecutionTimedOutEventDetails.h>
#include <aws/states/model/ExecutionRedrivenEventDetails.h>
#include <aws/states/model/MapStateStartedEventDetails.h>
#include <aws/states/model/MapIterationEventDetails.h>
#include <aws/states/model/LambdaFunctionFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduleFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduledEventDetails.h>
#include <aws/states/model/LambdaFunctionStartFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionSucceededEventDetails.h>
#include <aws/states/model/LambdaFunctionTimedOutEventDetails.h>
#include <aws/states/model/StateEnteredEventDetails.h>
#include <aws/states/model/StateExitedEventDetails.h>
#include <aws/states/model/MapRunStartedEventDetails.h>
#include <aws/states/model/MapRunFailedEventDetails.h>
#include <aws/states/model/MapRunRedrivenEventDetails.h>
#include <aws/states/model/EvaluationFailedEventDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the events of an execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/HistoryEvent">AWS
   * API Reference</a></p>
   */
  class HistoryEvent
  {
  public:
    AWS_SFN_API HistoryEvent() = default;
    AWS_SFN_API HistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API HistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    HistoryEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the event.</p>
     */
    inline HistoryEventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HistoryEventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HistoryEvent& WithType(HistoryEventType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the event. Events are numbered sequentially, starting at one.</p>
     */
    inline long long GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(long long value) { m_idHasBeenSet = true; m_id = value; }
    inline HistoryEvent& WithId(long long value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the previous event.</p>
     */
    inline long long GetPreviousEventId() const { return m_previousEventId; }
    inline bool PreviousEventIdHasBeenSet() const { return m_previousEventIdHasBeenSet; }
    inline void SetPreviousEventId(long long value) { m_previousEventIdHasBeenSet = true; m_previousEventId = value; }
    inline HistoryEvent& WithPreviousEventId(long long value) { SetPreviousEventId(value); return *this;}
    ///@}

    ///@{
    
    inline const ActivityFailedEventDetails& GetActivityFailedEventDetails() const { return m_activityFailedEventDetails; }
    inline bool ActivityFailedEventDetailsHasBeenSet() const { return m_activityFailedEventDetailsHasBeenSet; }
    template<typename ActivityFailedEventDetailsT = ActivityFailedEventDetails>
    void SetActivityFailedEventDetails(ActivityFailedEventDetailsT&& value) { m_activityFailedEventDetailsHasBeenSet = true; m_activityFailedEventDetails = std::forward<ActivityFailedEventDetailsT>(value); }
    template<typename ActivityFailedEventDetailsT = ActivityFailedEventDetails>
    HistoryEvent& WithActivityFailedEventDetails(ActivityFailedEventDetailsT&& value) { SetActivityFailedEventDetails(std::forward<ActivityFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an activity schedule event that failed during an
     * execution.</p>
     */
    inline const ActivityScheduleFailedEventDetails& GetActivityScheduleFailedEventDetails() const { return m_activityScheduleFailedEventDetails; }
    inline bool ActivityScheduleFailedEventDetailsHasBeenSet() const { return m_activityScheduleFailedEventDetailsHasBeenSet; }
    template<typename ActivityScheduleFailedEventDetailsT = ActivityScheduleFailedEventDetails>
    void SetActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetailsT&& value) { m_activityScheduleFailedEventDetailsHasBeenSet = true; m_activityScheduleFailedEventDetails = std::forward<ActivityScheduleFailedEventDetailsT>(value); }
    template<typename ActivityScheduleFailedEventDetailsT = ActivityScheduleFailedEventDetails>
    HistoryEvent& WithActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetailsT&& value) { SetActivityScheduleFailedEventDetails(std::forward<ActivityScheduleFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityScheduledEventDetails& GetActivityScheduledEventDetails() const { return m_activityScheduledEventDetails; }
    inline bool ActivityScheduledEventDetailsHasBeenSet() const { return m_activityScheduledEventDetailsHasBeenSet; }
    template<typename ActivityScheduledEventDetailsT = ActivityScheduledEventDetails>
    void SetActivityScheduledEventDetails(ActivityScheduledEventDetailsT&& value) { m_activityScheduledEventDetailsHasBeenSet = true; m_activityScheduledEventDetails = std::forward<ActivityScheduledEventDetailsT>(value); }
    template<typename ActivityScheduledEventDetailsT = ActivityScheduledEventDetails>
    HistoryEvent& WithActivityScheduledEventDetails(ActivityScheduledEventDetailsT&& value) { SetActivityScheduledEventDetails(std::forward<ActivityScheduledEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityStartedEventDetails& GetActivityStartedEventDetails() const { return m_activityStartedEventDetails; }
    inline bool ActivityStartedEventDetailsHasBeenSet() const { return m_activityStartedEventDetailsHasBeenSet; }
    template<typename ActivityStartedEventDetailsT = ActivityStartedEventDetails>
    void SetActivityStartedEventDetails(ActivityStartedEventDetailsT&& value) { m_activityStartedEventDetailsHasBeenSet = true; m_activityStartedEventDetails = std::forward<ActivityStartedEventDetailsT>(value); }
    template<typename ActivityStartedEventDetailsT = ActivityStartedEventDetails>
    HistoryEvent& WithActivityStartedEventDetails(ActivityStartedEventDetailsT&& value) { SetActivityStartedEventDetails(std::forward<ActivityStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivitySucceededEventDetails& GetActivitySucceededEventDetails() const { return m_activitySucceededEventDetails; }
    inline bool ActivitySucceededEventDetailsHasBeenSet() const { return m_activitySucceededEventDetailsHasBeenSet; }
    template<typename ActivitySucceededEventDetailsT = ActivitySucceededEventDetails>
    void SetActivitySucceededEventDetails(ActivitySucceededEventDetailsT&& value) { m_activitySucceededEventDetailsHasBeenSet = true; m_activitySucceededEventDetails = std::forward<ActivitySucceededEventDetailsT>(value); }
    template<typename ActivitySucceededEventDetailsT = ActivitySucceededEventDetails>
    HistoryEvent& WithActivitySucceededEventDetails(ActivitySucceededEventDetailsT&& value) { SetActivitySucceededEventDetails(std::forward<ActivitySucceededEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityTimedOutEventDetails& GetActivityTimedOutEventDetails() const { return m_activityTimedOutEventDetails; }
    inline bool ActivityTimedOutEventDetailsHasBeenSet() const { return m_activityTimedOutEventDetailsHasBeenSet; }
    template<typename ActivityTimedOutEventDetailsT = ActivityTimedOutEventDetails>
    void SetActivityTimedOutEventDetails(ActivityTimedOutEventDetailsT&& value) { m_activityTimedOutEventDetailsHasBeenSet = true; m_activityTimedOutEventDetails = std::forward<ActivityTimedOutEventDetailsT>(value); }
    template<typename ActivityTimedOutEventDetailsT = ActivityTimedOutEventDetails>
    HistoryEvent& WithActivityTimedOutEventDetails(ActivityTimedOutEventDetailsT&& value) { SetActivityTimedOutEventDetails(std::forward<ActivityTimedOutEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the failure of a task.</p>
     */
    inline const TaskFailedEventDetails& GetTaskFailedEventDetails() const { return m_taskFailedEventDetails; }
    inline bool TaskFailedEventDetailsHasBeenSet() const { return m_taskFailedEventDetailsHasBeenSet; }
    template<typename TaskFailedEventDetailsT = TaskFailedEventDetails>
    void SetTaskFailedEventDetails(TaskFailedEventDetailsT&& value) { m_taskFailedEventDetailsHasBeenSet = true; m_taskFailedEventDetails = std::forward<TaskFailedEventDetailsT>(value); }
    template<typename TaskFailedEventDetailsT = TaskFailedEventDetails>
    HistoryEvent& WithTaskFailedEventDetails(TaskFailedEventDetailsT&& value) { SetTaskFailedEventDetails(std::forward<TaskFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that was scheduled.</p>
     */
    inline const TaskScheduledEventDetails& GetTaskScheduledEventDetails() const { return m_taskScheduledEventDetails; }
    inline bool TaskScheduledEventDetailsHasBeenSet() const { return m_taskScheduledEventDetailsHasBeenSet; }
    template<typename TaskScheduledEventDetailsT = TaskScheduledEventDetails>
    void SetTaskScheduledEventDetails(TaskScheduledEventDetailsT&& value) { m_taskScheduledEventDetailsHasBeenSet = true; m_taskScheduledEventDetails = std::forward<TaskScheduledEventDetailsT>(value); }
    template<typename TaskScheduledEventDetailsT = TaskScheduledEventDetails>
    HistoryEvent& WithTaskScheduledEventDetails(TaskScheduledEventDetailsT&& value) { SetTaskScheduledEventDetails(std::forward<TaskScheduledEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that failed to start.</p>
     */
    inline const TaskStartFailedEventDetails& GetTaskStartFailedEventDetails() const { return m_taskStartFailedEventDetails; }
    inline bool TaskStartFailedEventDetailsHasBeenSet() const { return m_taskStartFailedEventDetailsHasBeenSet; }
    template<typename TaskStartFailedEventDetailsT = TaskStartFailedEventDetails>
    void SetTaskStartFailedEventDetails(TaskStartFailedEventDetailsT&& value) { m_taskStartFailedEventDetailsHasBeenSet = true; m_taskStartFailedEventDetails = std::forward<TaskStartFailedEventDetailsT>(value); }
    template<typename TaskStartFailedEventDetailsT = TaskStartFailedEventDetails>
    HistoryEvent& WithTaskStartFailedEventDetails(TaskStartFailedEventDetailsT&& value) { SetTaskStartFailedEventDetails(std::forward<TaskStartFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that was started.</p>
     */
    inline const TaskStartedEventDetails& GetTaskStartedEventDetails() const { return m_taskStartedEventDetails; }
    inline bool TaskStartedEventDetailsHasBeenSet() const { return m_taskStartedEventDetailsHasBeenSet; }
    template<typename TaskStartedEventDetailsT = TaskStartedEventDetails>
    void SetTaskStartedEventDetails(TaskStartedEventDetailsT&& value) { m_taskStartedEventDetailsHasBeenSet = true; m_taskStartedEventDetails = std::forward<TaskStartedEventDetailsT>(value); }
    template<typename TaskStartedEventDetailsT = TaskStartedEventDetails>
    HistoryEvent& WithTaskStartedEventDetails(TaskStartedEventDetailsT&& value) { SetTaskStartedEventDetails(std::forward<TaskStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that where the submit failed.</p>
     */
    inline const TaskSubmitFailedEventDetails& GetTaskSubmitFailedEventDetails() const { return m_taskSubmitFailedEventDetails; }
    inline bool TaskSubmitFailedEventDetailsHasBeenSet() const { return m_taskSubmitFailedEventDetailsHasBeenSet; }
    template<typename TaskSubmitFailedEventDetailsT = TaskSubmitFailedEventDetails>
    void SetTaskSubmitFailedEventDetails(TaskSubmitFailedEventDetailsT&& value) { m_taskSubmitFailedEventDetailsHasBeenSet = true; m_taskSubmitFailedEventDetails = std::forward<TaskSubmitFailedEventDetailsT>(value); }
    template<typename TaskSubmitFailedEventDetailsT = TaskSubmitFailedEventDetails>
    HistoryEvent& WithTaskSubmitFailedEventDetails(TaskSubmitFailedEventDetailsT&& value) { SetTaskSubmitFailedEventDetails(std::forward<TaskSubmitFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a submitted task.</p>
     */
    inline const TaskSubmittedEventDetails& GetTaskSubmittedEventDetails() const { return m_taskSubmittedEventDetails; }
    inline bool TaskSubmittedEventDetailsHasBeenSet() const { return m_taskSubmittedEventDetailsHasBeenSet; }
    template<typename TaskSubmittedEventDetailsT = TaskSubmittedEventDetails>
    void SetTaskSubmittedEventDetails(TaskSubmittedEventDetailsT&& value) { m_taskSubmittedEventDetailsHasBeenSet = true; m_taskSubmittedEventDetails = std::forward<TaskSubmittedEventDetailsT>(value); }
    template<typename TaskSubmittedEventDetailsT = TaskSubmittedEventDetails>
    HistoryEvent& WithTaskSubmittedEventDetails(TaskSubmittedEventDetailsT&& value) { SetTaskSubmittedEventDetails(std::forward<TaskSubmittedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that succeeded.</p>
     */
    inline const TaskSucceededEventDetails& GetTaskSucceededEventDetails() const { return m_taskSucceededEventDetails; }
    inline bool TaskSucceededEventDetailsHasBeenSet() const { return m_taskSucceededEventDetailsHasBeenSet; }
    template<typename TaskSucceededEventDetailsT = TaskSucceededEventDetails>
    void SetTaskSucceededEventDetails(TaskSucceededEventDetailsT&& value) { m_taskSucceededEventDetailsHasBeenSet = true; m_taskSucceededEventDetails = std::forward<TaskSucceededEventDetailsT>(value); }
    template<typename TaskSucceededEventDetailsT = TaskSucceededEventDetails>
    HistoryEvent& WithTaskSucceededEventDetails(TaskSucceededEventDetailsT&& value) { SetTaskSucceededEventDetails(std::forward<TaskSucceededEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that timed out.</p>
     */
    inline const TaskTimedOutEventDetails& GetTaskTimedOutEventDetails() const { return m_taskTimedOutEventDetails; }
    inline bool TaskTimedOutEventDetailsHasBeenSet() const { return m_taskTimedOutEventDetailsHasBeenSet; }
    template<typename TaskTimedOutEventDetailsT = TaskTimedOutEventDetails>
    void SetTaskTimedOutEventDetails(TaskTimedOutEventDetailsT&& value) { m_taskTimedOutEventDetailsHasBeenSet = true; m_taskTimedOutEventDetails = std::forward<TaskTimedOutEventDetailsT>(value); }
    template<typename TaskTimedOutEventDetailsT = TaskTimedOutEventDetails>
    HistoryEvent& WithTaskTimedOutEventDetails(TaskTimedOutEventDetailsT&& value) { SetTaskTimedOutEventDetails(std::forward<TaskTimedOutEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionFailedEventDetails& GetExecutionFailedEventDetails() const { return m_executionFailedEventDetails; }
    inline bool ExecutionFailedEventDetailsHasBeenSet() const { return m_executionFailedEventDetailsHasBeenSet; }
    template<typename ExecutionFailedEventDetailsT = ExecutionFailedEventDetails>
    void SetExecutionFailedEventDetails(ExecutionFailedEventDetailsT&& value) { m_executionFailedEventDetailsHasBeenSet = true; m_executionFailedEventDetails = std::forward<ExecutionFailedEventDetailsT>(value); }
    template<typename ExecutionFailedEventDetailsT = ExecutionFailedEventDetails>
    HistoryEvent& WithExecutionFailedEventDetails(ExecutionFailedEventDetailsT&& value) { SetExecutionFailedEventDetails(std::forward<ExecutionFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionStartedEventDetails& GetExecutionStartedEventDetails() const { return m_executionStartedEventDetails; }
    inline bool ExecutionStartedEventDetailsHasBeenSet() const { return m_executionStartedEventDetailsHasBeenSet; }
    template<typename ExecutionStartedEventDetailsT = ExecutionStartedEventDetails>
    void SetExecutionStartedEventDetails(ExecutionStartedEventDetailsT&& value) { m_executionStartedEventDetailsHasBeenSet = true; m_executionStartedEventDetails = std::forward<ExecutionStartedEventDetailsT>(value); }
    template<typename ExecutionStartedEventDetailsT = ExecutionStartedEventDetails>
    HistoryEvent& WithExecutionStartedEventDetails(ExecutionStartedEventDetailsT&& value) { SetExecutionStartedEventDetails(std::forward<ExecutionStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionSucceededEventDetails& GetExecutionSucceededEventDetails() const { return m_executionSucceededEventDetails; }
    inline bool ExecutionSucceededEventDetailsHasBeenSet() const { return m_executionSucceededEventDetailsHasBeenSet; }
    template<typename ExecutionSucceededEventDetailsT = ExecutionSucceededEventDetails>
    void SetExecutionSucceededEventDetails(ExecutionSucceededEventDetailsT&& value) { m_executionSucceededEventDetailsHasBeenSet = true; m_executionSucceededEventDetails = std::forward<ExecutionSucceededEventDetailsT>(value); }
    template<typename ExecutionSucceededEventDetailsT = ExecutionSucceededEventDetails>
    HistoryEvent& WithExecutionSucceededEventDetails(ExecutionSucceededEventDetailsT&& value) { SetExecutionSucceededEventDetails(std::forward<ExecutionSucceededEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionAbortedEventDetails& GetExecutionAbortedEventDetails() const { return m_executionAbortedEventDetails; }
    inline bool ExecutionAbortedEventDetailsHasBeenSet() const { return m_executionAbortedEventDetailsHasBeenSet; }
    template<typename ExecutionAbortedEventDetailsT = ExecutionAbortedEventDetails>
    void SetExecutionAbortedEventDetails(ExecutionAbortedEventDetailsT&& value) { m_executionAbortedEventDetailsHasBeenSet = true; m_executionAbortedEventDetails = std::forward<ExecutionAbortedEventDetailsT>(value); }
    template<typename ExecutionAbortedEventDetailsT = ExecutionAbortedEventDetails>
    HistoryEvent& WithExecutionAbortedEventDetails(ExecutionAbortedEventDetailsT&& value) { SetExecutionAbortedEventDetails(std::forward<ExecutionAbortedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionTimedOutEventDetails& GetExecutionTimedOutEventDetails() const { return m_executionTimedOutEventDetails; }
    inline bool ExecutionTimedOutEventDetailsHasBeenSet() const { return m_executionTimedOutEventDetailsHasBeenSet; }
    template<typename ExecutionTimedOutEventDetailsT = ExecutionTimedOutEventDetails>
    void SetExecutionTimedOutEventDetails(ExecutionTimedOutEventDetailsT&& value) { m_executionTimedOutEventDetailsHasBeenSet = true; m_executionTimedOutEventDetails = std::forward<ExecutionTimedOutEventDetailsT>(value); }
    template<typename ExecutionTimedOutEventDetailsT = ExecutionTimedOutEventDetails>
    HistoryEvent& WithExecutionTimedOutEventDetails(ExecutionTimedOutEventDetailsT&& value) { SetExecutionTimedOutEventDetails(std::forward<ExecutionTimedOutEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the redrive attempt of an execution.</p>
     */
    inline const ExecutionRedrivenEventDetails& GetExecutionRedrivenEventDetails() const { return m_executionRedrivenEventDetails; }
    inline bool ExecutionRedrivenEventDetailsHasBeenSet() const { return m_executionRedrivenEventDetailsHasBeenSet; }
    template<typename ExecutionRedrivenEventDetailsT = ExecutionRedrivenEventDetails>
    void SetExecutionRedrivenEventDetails(ExecutionRedrivenEventDetailsT&& value) { m_executionRedrivenEventDetailsHasBeenSet = true; m_executionRedrivenEventDetails = std::forward<ExecutionRedrivenEventDetailsT>(value); }
    template<typename ExecutionRedrivenEventDetailsT = ExecutionRedrivenEventDetails>
    HistoryEvent& WithExecutionRedrivenEventDetails(ExecutionRedrivenEventDetailsT&& value) { SetExecutionRedrivenEventDetails(std::forward<ExecutionRedrivenEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about Map state that was started.</p>
     */
    inline const MapStateStartedEventDetails& GetMapStateStartedEventDetails() const { return m_mapStateStartedEventDetails; }
    inline bool MapStateStartedEventDetailsHasBeenSet() const { return m_mapStateStartedEventDetailsHasBeenSet; }
    template<typename MapStateStartedEventDetailsT = MapStateStartedEventDetails>
    void SetMapStateStartedEventDetails(MapStateStartedEventDetailsT&& value) { m_mapStateStartedEventDetailsHasBeenSet = true; m_mapStateStartedEventDetails = std::forward<MapStateStartedEventDetailsT>(value); }
    template<typename MapStateStartedEventDetailsT = MapStateStartedEventDetails>
    HistoryEvent& WithMapStateStartedEventDetails(MapStateStartedEventDetailsT&& value) { SetMapStateStartedEventDetails(std::forward<MapStateStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that was started.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationStartedEventDetails() const { return m_mapIterationStartedEventDetails; }
    inline bool MapIterationStartedEventDetailsHasBeenSet() const { return m_mapIterationStartedEventDetailsHasBeenSet; }
    template<typename MapIterationStartedEventDetailsT = MapIterationEventDetails>
    void SetMapIterationStartedEventDetails(MapIterationStartedEventDetailsT&& value) { m_mapIterationStartedEventDetailsHasBeenSet = true; m_mapIterationStartedEventDetails = std::forward<MapIterationStartedEventDetailsT>(value); }
    template<typename MapIterationStartedEventDetailsT = MapIterationEventDetails>
    HistoryEvent& WithMapIterationStartedEventDetails(MapIterationStartedEventDetailsT&& value) { SetMapIterationStartedEventDetails(std::forward<MapIterationStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that succeeded.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationSucceededEventDetails() const { return m_mapIterationSucceededEventDetails; }
    inline bool MapIterationSucceededEventDetailsHasBeenSet() const { return m_mapIterationSucceededEventDetailsHasBeenSet; }
    template<typename MapIterationSucceededEventDetailsT = MapIterationEventDetails>
    void SetMapIterationSucceededEventDetails(MapIterationSucceededEventDetailsT&& value) { m_mapIterationSucceededEventDetailsHasBeenSet = true; m_mapIterationSucceededEventDetails = std::forward<MapIterationSucceededEventDetailsT>(value); }
    template<typename MapIterationSucceededEventDetailsT = MapIterationEventDetails>
    HistoryEvent& WithMapIterationSucceededEventDetails(MapIterationSucceededEventDetailsT&& value) { SetMapIterationSucceededEventDetails(std::forward<MapIterationSucceededEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that failed.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationFailedEventDetails() const { return m_mapIterationFailedEventDetails; }
    inline bool MapIterationFailedEventDetailsHasBeenSet() const { return m_mapIterationFailedEventDetailsHasBeenSet; }
    template<typename MapIterationFailedEventDetailsT = MapIterationEventDetails>
    void SetMapIterationFailedEventDetails(MapIterationFailedEventDetailsT&& value) { m_mapIterationFailedEventDetailsHasBeenSet = true; m_mapIterationFailedEventDetails = std::forward<MapIterationFailedEventDetailsT>(value); }
    template<typename MapIterationFailedEventDetailsT = MapIterationEventDetails>
    HistoryEvent& WithMapIterationFailedEventDetails(MapIterationFailedEventDetailsT&& value) { SetMapIterationFailedEventDetails(std::forward<MapIterationFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that was aborted.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationAbortedEventDetails() const { return m_mapIterationAbortedEventDetails; }
    inline bool MapIterationAbortedEventDetailsHasBeenSet() const { return m_mapIterationAbortedEventDetailsHasBeenSet; }
    template<typename MapIterationAbortedEventDetailsT = MapIterationEventDetails>
    void SetMapIterationAbortedEventDetails(MapIterationAbortedEventDetailsT&& value) { m_mapIterationAbortedEventDetailsHasBeenSet = true; m_mapIterationAbortedEventDetails = std::forward<MapIterationAbortedEventDetailsT>(value); }
    template<typename MapIterationAbortedEventDetailsT = MapIterationEventDetails>
    HistoryEvent& WithMapIterationAbortedEventDetails(MapIterationAbortedEventDetailsT&& value) { SetMapIterationAbortedEventDetails(std::forward<MapIterationAbortedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionFailedEventDetails& GetLambdaFunctionFailedEventDetails() const { return m_lambdaFunctionFailedEventDetails; }
    inline bool LambdaFunctionFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionFailedEventDetailsHasBeenSet; }
    template<typename LambdaFunctionFailedEventDetailsT = LambdaFunctionFailedEventDetails>
    void SetLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetailsT&& value) { m_lambdaFunctionFailedEventDetailsHasBeenSet = true; m_lambdaFunctionFailedEventDetails = std::forward<LambdaFunctionFailedEventDetailsT>(value); }
    template<typename LambdaFunctionFailedEventDetailsT = LambdaFunctionFailedEventDetails>
    HistoryEvent& WithLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetailsT&& value) { SetLambdaFunctionFailedEventDetails(std::forward<LambdaFunctionFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionScheduleFailedEventDetails& GetLambdaFunctionScheduleFailedEventDetails() const { return m_lambdaFunctionScheduleFailedEventDetails; }
    inline bool LambdaFunctionScheduleFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet; }
    template<typename LambdaFunctionScheduleFailedEventDetailsT = LambdaFunctionScheduleFailedEventDetails>
    void SetLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetailsT&& value) { m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true; m_lambdaFunctionScheduleFailedEventDetails = std::forward<LambdaFunctionScheduleFailedEventDetailsT>(value); }
    template<typename LambdaFunctionScheduleFailedEventDetailsT = LambdaFunctionScheduleFailedEventDetails>
    HistoryEvent& WithLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetailsT&& value) { SetLambdaFunctionScheduleFailedEventDetails(std::forward<LambdaFunctionScheduleFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionScheduledEventDetails& GetLambdaFunctionScheduledEventDetails() const { return m_lambdaFunctionScheduledEventDetails; }
    inline bool LambdaFunctionScheduledEventDetailsHasBeenSet() const { return m_lambdaFunctionScheduledEventDetailsHasBeenSet; }
    template<typename LambdaFunctionScheduledEventDetailsT = LambdaFunctionScheduledEventDetails>
    void SetLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetailsT&& value) { m_lambdaFunctionScheduledEventDetailsHasBeenSet = true; m_lambdaFunctionScheduledEventDetails = std::forward<LambdaFunctionScheduledEventDetailsT>(value); }
    template<typename LambdaFunctionScheduledEventDetailsT = LambdaFunctionScheduledEventDetails>
    HistoryEvent& WithLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetailsT&& value) { SetLambdaFunctionScheduledEventDetails(std::forward<LambdaFunctionScheduledEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a lambda function that failed to start during an
     * execution.</p>
     */
    inline const LambdaFunctionStartFailedEventDetails& GetLambdaFunctionStartFailedEventDetails() const { return m_lambdaFunctionStartFailedEventDetails; }
    inline bool LambdaFunctionStartFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionStartFailedEventDetailsHasBeenSet; }
    template<typename LambdaFunctionStartFailedEventDetailsT = LambdaFunctionStartFailedEventDetails>
    void SetLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetailsT&& value) { m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true; m_lambdaFunctionStartFailedEventDetails = std::forward<LambdaFunctionStartFailedEventDetailsT>(value); }
    template<typename LambdaFunctionStartFailedEventDetailsT = LambdaFunctionStartFailedEventDetails>
    HistoryEvent& WithLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetailsT&& value) { SetLambdaFunctionStartFailedEventDetails(std::forward<LambdaFunctionStartFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a Lambda function that terminated successfully during
     * an execution.</p>
     */
    inline const LambdaFunctionSucceededEventDetails& GetLambdaFunctionSucceededEventDetails() const { return m_lambdaFunctionSucceededEventDetails; }
    inline bool LambdaFunctionSucceededEventDetailsHasBeenSet() const { return m_lambdaFunctionSucceededEventDetailsHasBeenSet; }
    template<typename LambdaFunctionSucceededEventDetailsT = LambdaFunctionSucceededEventDetails>
    void SetLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetailsT&& value) { m_lambdaFunctionSucceededEventDetailsHasBeenSet = true; m_lambdaFunctionSucceededEventDetails = std::forward<LambdaFunctionSucceededEventDetailsT>(value); }
    template<typename LambdaFunctionSucceededEventDetailsT = LambdaFunctionSucceededEventDetails>
    HistoryEvent& WithLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetailsT&& value) { SetLambdaFunctionSucceededEventDetails(std::forward<LambdaFunctionSucceededEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionTimedOutEventDetails& GetLambdaFunctionTimedOutEventDetails() const { return m_lambdaFunctionTimedOutEventDetails; }
    inline bool LambdaFunctionTimedOutEventDetailsHasBeenSet() const { return m_lambdaFunctionTimedOutEventDetailsHasBeenSet; }
    template<typename LambdaFunctionTimedOutEventDetailsT = LambdaFunctionTimedOutEventDetails>
    void SetLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetailsT&& value) { m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true; m_lambdaFunctionTimedOutEventDetails = std::forward<LambdaFunctionTimedOutEventDetailsT>(value); }
    template<typename LambdaFunctionTimedOutEventDetailsT = LambdaFunctionTimedOutEventDetails>
    HistoryEvent& WithLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetailsT&& value) { SetLambdaFunctionTimedOutEventDetails(std::forward<LambdaFunctionTimedOutEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateEnteredEventDetails& GetStateEnteredEventDetails() const { return m_stateEnteredEventDetails; }
    inline bool StateEnteredEventDetailsHasBeenSet() const { return m_stateEnteredEventDetailsHasBeenSet; }
    template<typename StateEnteredEventDetailsT = StateEnteredEventDetails>
    void SetStateEnteredEventDetails(StateEnteredEventDetailsT&& value) { m_stateEnteredEventDetailsHasBeenSet = true; m_stateEnteredEventDetails = std::forward<StateEnteredEventDetailsT>(value); }
    template<typename StateEnteredEventDetailsT = StateEnteredEventDetails>
    HistoryEvent& WithStateEnteredEventDetails(StateEnteredEventDetailsT&& value) { SetStateEnteredEventDetails(std::forward<StateEnteredEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateExitedEventDetails& GetStateExitedEventDetails() const { return m_stateExitedEventDetails; }
    inline bool StateExitedEventDetailsHasBeenSet() const { return m_stateExitedEventDetailsHasBeenSet; }
    template<typename StateExitedEventDetailsT = StateExitedEventDetails>
    void SetStateExitedEventDetails(StateExitedEventDetailsT&& value) { m_stateExitedEventDetailsHasBeenSet = true; m_stateExitedEventDetails = std::forward<StateExitedEventDetailsT>(value); }
    template<typename StateExitedEventDetailsT = StateExitedEventDetails>
    HistoryEvent& WithStateExitedEventDetails(StateExitedEventDetailsT&& value) { SetStateExitedEventDetails(std::forward<StateExitedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details, such as <code>mapRunArn</code>, and the start date and time
     * of a Map Run. <code>mapRunArn</code> is the Amazon Resource Name (ARN) of the
     * Map Run that was started.</p>
     */
    inline const MapRunStartedEventDetails& GetMapRunStartedEventDetails() const { return m_mapRunStartedEventDetails; }
    inline bool MapRunStartedEventDetailsHasBeenSet() const { return m_mapRunStartedEventDetailsHasBeenSet; }
    template<typename MapRunStartedEventDetailsT = MapRunStartedEventDetails>
    void SetMapRunStartedEventDetails(MapRunStartedEventDetailsT&& value) { m_mapRunStartedEventDetailsHasBeenSet = true; m_mapRunStartedEventDetails = std::forward<MapRunStartedEventDetailsT>(value); }
    template<typename MapRunStartedEventDetailsT = MapRunStartedEventDetails>
    HistoryEvent& WithMapRunStartedEventDetails(MapRunStartedEventDetailsT&& value) { SetMapRunStartedEventDetails(std::forward<MapRunStartedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains error and cause details about a Map Run that failed.</p>
     */
    inline const MapRunFailedEventDetails& GetMapRunFailedEventDetails() const { return m_mapRunFailedEventDetails; }
    inline bool MapRunFailedEventDetailsHasBeenSet() const { return m_mapRunFailedEventDetailsHasBeenSet; }
    template<typename MapRunFailedEventDetailsT = MapRunFailedEventDetails>
    void SetMapRunFailedEventDetails(MapRunFailedEventDetailsT&& value) { m_mapRunFailedEventDetailsHasBeenSet = true; m_mapRunFailedEventDetails = std::forward<MapRunFailedEventDetailsT>(value); }
    template<typename MapRunFailedEventDetailsT = MapRunFailedEventDetails>
    HistoryEvent& WithMapRunFailedEventDetails(MapRunFailedEventDetailsT&& value) { SetMapRunFailedEventDetails(std::forward<MapRunFailedEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the redrive attempt of a Map Run.</p>
     */
    inline const MapRunRedrivenEventDetails& GetMapRunRedrivenEventDetails() const { return m_mapRunRedrivenEventDetails; }
    inline bool MapRunRedrivenEventDetailsHasBeenSet() const { return m_mapRunRedrivenEventDetailsHasBeenSet; }
    template<typename MapRunRedrivenEventDetailsT = MapRunRedrivenEventDetails>
    void SetMapRunRedrivenEventDetails(MapRunRedrivenEventDetailsT&& value) { m_mapRunRedrivenEventDetailsHasBeenSet = true; m_mapRunRedrivenEventDetails = std::forward<MapRunRedrivenEventDetailsT>(value); }
    template<typename MapRunRedrivenEventDetailsT = MapRunRedrivenEventDetails>
    HistoryEvent& WithMapRunRedrivenEventDetails(MapRunRedrivenEventDetailsT&& value) { SetMapRunRedrivenEventDetails(std::forward<MapRunRedrivenEventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an evaluation failure that occurred while processing a
     * state.</p>
     */
    inline const EvaluationFailedEventDetails& GetEvaluationFailedEventDetails() const { return m_evaluationFailedEventDetails; }
    inline bool EvaluationFailedEventDetailsHasBeenSet() const { return m_evaluationFailedEventDetailsHasBeenSet; }
    template<typename EvaluationFailedEventDetailsT = EvaluationFailedEventDetails>
    void SetEvaluationFailedEventDetails(EvaluationFailedEventDetailsT&& value) { m_evaluationFailedEventDetailsHasBeenSet = true; m_evaluationFailedEventDetails = std::forward<EvaluationFailedEventDetailsT>(value); }
    template<typename EvaluationFailedEventDetailsT = EvaluationFailedEventDetails>
    HistoryEvent& WithEvaluationFailedEventDetails(EvaluationFailedEventDetailsT&& value) { SetEvaluationFailedEventDetails(std::forward<EvaluationFailedEventDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    HistoryEventType m_type{HistoryEventType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_id{0};
    bool m_idHasBeenSet = false;

    long long m_previousEventId{0};
    bool m_previousEventIdHasBeenSet = false;

    ActivityFailedEventDetails m_activityFailedEventDetails;
    bool m_activityFailedEventDetailsHasBeenSet = false;

    ActivityScheduleFailedEventDetails m_activityScheduleFailedEventDetails;
    bool m_activityScheduleFailedEventDetailsHasBeenSet = false;

    ActivityScheduledEventDetails m_activityScheduledEventDetails;
    bool m_activityScheduledEventDetailsHasBeenSet = false;

    ActivityStartedEventDetails m_activityStartedEventDetails;
    bool m_activityStartedEventDetailsHasBeenSet = false;

    ActivitySucceededEventDetails m_activitySucceededEventDetails;
    bool m_activitySucceededEventDetailsHasBeenSet = false;

    ActivityTimedOutEventDetails m_activityTimedOutEventDetails;
    bool m_activityTimedOutEventDetailsHasBeenSet = false;

    TaskFailedEventDetails m_taskFailedEventDetails;
    bool m_taskFailedEventDetailsHasBeenSet = false;

    TaskScheduledEventDetails m_taskScheduledEventDetails;
    bool m_taskScheduledEventDetailsHasBeenSet = false;

    TaskStartFailedEventDetails m_taskStartFailedEventDetails;
    bool m_taskStartFailedEventDetailsHasBeenSet = false;

    TaskStartedEventDetails m_taskStartedEventDetails;
    bool m_taskStartedEventDetailsHasBeenSet = false;

    TaskSubmitFailedEventDetails m_taskSubmitFailedEventDetails;
    bool m_taskSubmitFailedEventDetailsHasBeenSet = false;

    TaskSubmittedEventDetails m_taskSubmittedEventDetails;
    bool m_taskSubmittedEventDetailsHasBeenSet = false;

    TaskSucceededEventDetails m_taskSucceededEventDetails;
    bool m_taskSucceededEventDetailsHasBeenSet = false;

    TaskTimedOutEventDetails m_taskTimedOutEventDetails;
    bool m_taskTimedOutEventDetailsHasBeenSet = false;

    ExecutionFailedEventDetails m_executionFailedEventDetails;
    bool m_executionFailedEventDetailsHasBeenSet = false;

    ExecutionStartedEventDetails m_executionStartedEventDetails;
    bool m_executionStartedEventDetailsHasBeenSet = false;

    ExecutionSucceededEventDetails m_executionSucceededEventDetails;
    bool m_executionSucceededEventDetailsHasBeenSet = false;

    ExecutionAbortedEventDetails m_executionAbortedEventDetails;
    bool m_executionAbortedEventDetailsHasBeenSet = false;

    ExecutionTimedOutEventDetails m_executionTimedOutEventDetails;
    bool m_executionTimedOutEventDetailsHasBeenSet = false;

    ExecutionRedrivenEventDetails m_executionRedrivenEventDetails;
    bool m_executionRedrivenEventDetailsHasBeenSet = false;

    MapStateStartedEventDetails m_mapStateStartedEventDetails;
    bool m_mapStateStartedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationStartedEventDetails;
    bool m_mapIterationStartedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationSucceededEventDetails;
    bool m_mapIterationSucceededEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationFailedEventDetails;
    bool m_mapIterationFailedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationAbortedEventDetails;
    bool m_mapIterationAbortedEventDetailsHasBeenSet = false;

    LambdaFunctionFailedEventDetails m_lambdaFunctionFailedEventDetails;
    bool m_lambdaFunctionFailedEventDetailsHasBeenSet = false;

    LambdaFunctionScheduleFailedEventDetails m_lambdaFunctionScheduleFailedEventDetails;
    bool m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = false;

    LambdaFunctionScheduledEventDetails m_lambdaFunctionScheduledEventDetails;
    bool m_lambdaFunctionScheduledEventDetailsHasBeenSet = false;

    LambdaFunctionStartFailedEventDetails m_lambdaFunctionStartFailedEventDetails;
    bool m_lambdaFunctionStartFailedEventDetailsHasBeenSet = false;

    LambdaFunctionSucceededEventDetails m_lambdaFunctionSucceededEventDetails;
    bool m_lambdaFunctionSucceededEventDetailsHasBeenSet = false;

    LambdaFunctionTimedOutEventDetails m_lambdaFunctionTimedOutEventDetails;
    bool m_lambdaFunctionTimedOutEventDetailsHasBeenSet = false;

    StateEnteredEventDetails m_stateEnteredEventDetails;
    bool m_stateEnteredEventDetailsHasBeenSet = false;

    StateExitedEventDetails m_stateExitedEventDetails;
    bool m_stateExitedEventDetailsHasBeenSet = false;

    MapRunStartedEventDetails m_mapRunStartedEventDetails;
    bool m_mapRunStartedEventDetailsHasBeenSet = false;

    MapRunFailedEventDetails m_mapRunFailedEventDetails;
    bool m_mapRunFailedEventDetailsHasBeenSet = false;

    MapRunRedrivenEventDetails m_mapRunRedrivenEventDetails;
    bool m_mapRunRedrivenEventDetailsHasBeenSet = false;

    EvaluationFailedEventDetails m_evaluationFailedEventDetails;
    bool m_evaluationFailedEventDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
