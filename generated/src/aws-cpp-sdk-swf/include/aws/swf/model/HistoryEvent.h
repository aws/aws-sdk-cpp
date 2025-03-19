/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/swf/model/EventType.h>
#include <aws/swf/model/WorkflowExecutionStartedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCompletedEventAttributes.h>
#include <aws/swf/model/CompleteWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/FailWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionTimedOutEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCanceledEventAttributes.h>
#include <aws/swf/model/CancelWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionContinuedAsNewEventAttributes.h>
#include <aws/swf/model/ContinueAsNewWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionTerminatedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionCancelRequestedEventAttributes.h>
#include <aws/swf/model/DecisionTaskScheduledEventAttributes.h>
#include <aws/swf/model/DecisionTaskStartedEventAttributes.h>
#include <aws/swf/model/DecisionTaskCompletedEventAttributes.h>
#include <aws/swf/model/DecisionTaskTimedOutEventAttributes.h>
#include <aws/swf/model/ActivityTaskScheduledEventAttributes.h>
#include <aws/swf/model/ActivityTaskStartedEventAttributes.h>
#include <aws/swf/model/ActivityTaskCompletedEventAttributes.h>
#include <aws/swf/model/ActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/ActivityTaskTimedOutEventAttributes.h>
#include <aws/swf/model/ActivityTaskCanceledEventAttributes.h>
#include <aws/swf/model/ActivityTaskCancelRequestedEventAttributes.h>
#include <aws/swf/model/WorkflowExecutionSignaledEventAttributes.h>
#include <aws/swf/model/MarkerRecordedEventAttributes.h>
#include <aws/swf/model/RecordMarkerFailedEventAttributes.h>
#include <aws/swf/model/TimerStartedEventAttributes.h>
#include <aws/swf/model/TimerFiredEventAttributes.h>
#include <aws/swf/model/TimerCanceledEventAttributes.h>
#include <aws/swf/model/StartChildWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionStartedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionCompletedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionTimedOutEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionCanceledEventAttributes.h>
#include <aws/swf/model/ChildWorkflowExecutionTerminatedEventAttributes.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/ExternalWorkflowExecutionSignaledEventAttributes.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ExternalWorkflowExecutionCancelRequestedEventAttributes.h>
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionInitiatedEventAttributes.h>
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/ScheduleActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/RequestCancelActivityTaskFailedEventAttributes.h>
#include <aws/swf/model/StartTimerFailedEventAttributes.h>
#include <aws/swf/model/CancelTimerFailedEventAttributes.h>
#include <aws/swf/model/StartChildWorkflowExecutionFailedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionScheduledEventAttributes.h>
#include <aws/swf/model/LambdaFunctionStartedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionCompletedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionFailedEventAttributes.h>
#include <aws/swf/model/LambdaFunctionTimedOutEventAttributes.h>
#include <aws/swf/model/ScheduleLambdaFunctionFailedEventAttributes.h>
#include <aws/swf/model/StartLambdaFunctionFailedEventAttributes.h>
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
   * <p>Event within a workflow execution. A history event can be one of these
   * types:</p> <ul> <li> <p> <code>ActivityTaskCancelRequested</code> – A
   * <code>RequestCancelActivityTask</code> decision was received by the system.</p>
   * </li> <li> <p> <code>ActivityTaskCanceled</code> – The activity task was
   * successfully canceled.</p> </li> <li> <p> <code>ActivityTaskCompleted</code> –
   * An activity worker successfully completed an activity task by calling
   * <a>RespondActivityTaskCompleted</a>.</p> </li> <li> <p>
   * <code>ActivityTaskFailed</code> – An activity worker failed an activity task by
   * calling <a>RespondActivityTaskFailed</a>.</p> </li> <li> <p>
   * <code>ActivityTaskScheduled</code> – An activity task was scheduled for
   * execution.</p> </li> <li> <p> <code>ActivityTaskStarted</code> – The scheduled
   * activity task was dispatched to a worker.</p> </li> <li> <p>
   * <code>ActivityTaskTimedOut</code> – The activity task timed out.</p> </li> <li>
   * <p> <code>CancelTimerFailed</code> – Failed to process CancelTimer decision.
   * This happens when the decision isn't configured properly, for example no timer
   * exists with the specified timer Id.</p> </li> <li> <p>
   * <code>CancelWorkflowExecutionFailed</code> – A request to cancel a workflow
   * execution failed.</p> </li> <li> <p> <code>ChildWorkflowExecutionCanceled</code>
   * – A child workflow execution, started by this workflow execution, was canceled
   * and closed.</p> </li> <li> <p> <code>ChildWorkflowExecutionCompleted</code> – A
   * child workflow execution, started by this workflow execution, completed
   * successfully and was closed.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionFailed</code> – A child workflow execution, started
   * by this workflow execution, failed to complete successfully and was closed.</p>
   * </li> <li> <p> <code>ChildWorkflowExecutionStarted</code> – A child workflow
   * execution was successfully started.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionTerminated</code> – A child workflow execution,
   * started by this workflow execution, was terminated.</p> </li> <li> <p>
   * <code>ChildWorkflowExecutionTimedOut</code> – A child workflow execution,
   * started by this workflow execution, timed out and was closed.</p> </li> <li> <p>
   * <code>CompleteWorkflowExecutionFailed</code> – The workflow execution failed to
   * complete.</p> </li> <li> <p> <code>ContinueAsNewWorkflowExecutionFailed</code> –
   * The workflow execution failed to complete after being continued as a new
   * workflow execution.</p> </li> <li> <p> <code>DecisionTaskCompleted</code> – The
   * decider successfully completed a decision task by calling
   * <a>RespondDecisionTaskCompleted</a>.</p> </li> <li> <p>
   * <code>DecisionTaskScheduled</code> – A decision task was scheduled for the
   * workflow execution.</p> </li> <li> <p> <code>DecisionTaskStarted</code> – The
   * decision task was dispatched to a decider.</p> </li> <li> <p>
   * <code>DecisionTaskTimedOut</code> – The decision task timed out.</p> </li> <li>
   * <p> <code>ExternalWorkflowExecutionCancelRequested</code> – Request to cancel an
   * external workflow execution was successfully delivered to the target
   * execution.</p> </li> <li> <p> <code>ExternalWorkflowExecutionSignaled</code> – A
   * signal, requested by this workflow execution, was successfully delivered to the
   * target external workflow execution.</p> </li> <li> <p>
   * <code>FailWorkflowExecutionFailed</code> – A request to mark a workflow
   * execution as failed, itself failed.</p> </li> <li> <p>
   * <code>MarkerRecorded</code> – A marker was recorded in the workflow history as
   * the result of a <code>RecordMarker</code> decision.</p> </li> <li> <p>
   * <code>RecordMarkerFailed</code> – A <code>RecordMarker</code> decision was
   * returned as failed.</p> </li> <li> <p>
   * <code>RequestCancelActivityTaskFailed</code> – Failed to process
   * RequestCancelActivityTask decision. This happens when the decision isn't
   * configured properly.</p> </li> <li> <p>
   * <code>RequestCancelExternalWorkflowExecutionFailed</code> – Request to cancel an
   * external workflow execution failed.</p> </li> <li> <p>
   * <code>RequestCancelExternalWorkflowExecutionInitiated</code> – A request was
   * made to request the cancellation of an external workflow execution.</p> </li>
   * <li> <p> <code>ScheduleActivityTaskFailed</code> – Failed to process
   * ScheduleActivityTask decision. This happens when the decision isn't configured
   * properly, for example the activity type specified isn't registered.</p> </li>
   * <li> <p> <code>SignalExternalWorkflowExecutionFailed</code> – The request to
   * signal an external workflow execution failed.</p> </li> <li> <p>
   * <code>SignalExternalWorkflowExecutionInitiated</code> – A request to signal an
   * external workflow was made.</p> </li> <li> <p>
   * <code>StartActivityTaskFailed</code> – A scheduled activity task failed to
   * start.</p> </li> <li> <p> <code>StartChildWorkflowExecutionFailed</code> –
   * Failed to process StartChildWorkflowExecution decision. This happens when the
   * decision isn't configured properly, for example the workflow type specified
   * isn't registered.</p> </li> <li> <p>
   * <code>StartChildWorkflowExecutionInitiated</code> – A request was made to start
   * a child workflow execution.</p> </li> <li> <p> <code>StartTimerFailed</code> –
   * Failed to process StartTimer decision. This happens when the decision isn't
   * configured properly, for example a timer already exists with the specified timer
   * Id.</p> </li> <li> <p> <code>TimerCanceled</code> – A timer, previously started
   * for this workflow execution, was successfully canceled.</p> </li> <li> <p>
   * <code>TimerFired</code> – A timer, previously started for this workflow
   * execution, fired.</p> </li> <li> <p> <code>TimerStarted</code> – A timer was
   * started for the workflow execution due to a <code>StartTimer</code>
   * decision.</p> </li> <li> <p> <code>WorkflowExecutionCancelRequested</code> – A
   * request to cancel this workflow execution was made.</p> </li> <li> <p>
   * <code>WorkflowExecutionCanceled</code> – The workflow execution was successfully
   * canceled and closed.</p> </li> <li> <p> <code>WorkflowExecutionCompleted</code>
   * – The workflow execution was closed due to successful completion.</p> </li> <li>
   * <p> <code>WorkflowExecutionContinuedAsNew</code> – The workflow execution was
   * closed and a new execution of the same type was created with the same
   * workflowId.</p> </li> <li> <p> <code>WorkflowExecutionFailed</code> – The
   * workflow execution closed due to a failure.</p> </li> <li> <p>
   * <code>WorkflowExecutionSignaled</code> – An external signal was received for the
   * workflow execution.</p> </li> <li> <p> <code>WorkflowExecutionStarted</code> –
   * The workflow execution was started.</p> </li> <li> <p>
   * <code>WorkflowExecutionTerminated</code> – The workflow execution was
   * terminated.</p> </li> <li> <p> <code>WorkflowExecutionTimedOut</code> – The
   * workflow execution was closed because a time out was exceeded.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/HistoryEvent">AWS
   * API Reference</a></p>
   */
  class HistoryEvent
  {
  public:
    AWS_SWF_API HistoryEvent() = default;
    AWS_SWF_API HistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API HistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    HistoryEvent& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the history event.</p>
     */
    inline EventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline HistoryEvent& WithEventType(EventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system generated ID of the event. This ID uniquely identifies the event
     * with in the workflow execution history.</p>
     */
    inline long long GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(long long value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline HistoryEvent& WithEventId(long long value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionStartedEventAttributes& GetWorkflowExecutionStartedEventAttributes() const { return m_workflowExecutionStartedEventAttributes; }
    inline bool WorkflowExecutionStartedEventAttributesHasBeenSet() const { return m_workflowExecutionStartedEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionStartedEventAttributesT = WorkflowExecutionStartedEventAttributes>
    void SetWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributesT&& value) { m_workflowExecutionStartedEventAttributesHasBeenSet = true; m_workflowExecutionStartedEventAttributes = std::forward<WorkflowExecutionStartedEventAttributesT>(value); }
    template<typename WorkflowExecutionStartedEventAttributesT = WorkflowExecutionStartedEventAttributes>
    HistoryEvent& WithWorkflowExecutionStartedEventAttributes(WorkflowExecutionStartedEventAttributesT&& value) { SetWorkflowExecutionStartedEventAttributes(std::forward<WorkflowExecutionStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionCompleted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCompletedEventAttributes& GetWorkflowExecutionCompletedEventAttributes() const { return m_workflowExecutionCompletedEventAttributes; }
    inline bool WorkflowExecutionCompletedEventAttributesHasBeenSet() const { return m_workflowExecutionCompletedEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionCompletedEventAttributesT = WorkflowExecutionCompletedEventAttributes>
    void SetWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributesT&& value) { m_workflowExecutionCompletedEventAttributesHasBeenSet = true; m_workflowExecutionCompletedEventAttributes = std::forward<WorkflowExecutionCompletedEventAttributesT>(value); }
    template<typename WorkflowExecutionCompletedEventAttributesT = WorkflowExecutionCompletedEventAttributes>
    HistoryEvent& WithWorkflowExecutionCompletedEventAttributes(WorkflowExecutionCompletedEventAttributesT&& value) { SetWorkflowExecutionCompletedEventAttributes(std::forward<WorkflowExecutionCompletedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>CompleteWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const CompleteWorkflowExecutionFailedEventAttributes& GetCompleteWorkflowExecutionFailedEventAttributes() const { return m_completeWorkflowExecutionFailedEventAttributes; }
    inline bool CompleteWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_completeWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename CompleteWorkflowExecutionFailedEventAttributesT = CompleteWorkflowExecutionFailedEventAttributes>
    void SetCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributesT&& value) { m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_completeWorkflowExecutionFailedEventAttributes = std::forward<CompleteWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename CompleteWorkflowExecutionFailedEventAttributesT = CompleteWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithCompleteWorkflowExecutionFailedEventAttributes(CompleteWorkflowExecutionFailedEventAttributesT&& value) { SetCompleteWorkflowExecutionFailedEventAttributes(std::forward<CompleteWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionFailed</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const WorkflowExecutionFailedEventAttributes& GetWorkflowExecutionFailedEventAttributes() const { return m_workflowExecutionFailedEventAttributes; }
    inline bool WorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_workflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionFailedEventAttributesT = WorkflowExecutionFailedEventAttributes>
    void SetWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributesT&& value) { m_workflowExecutionFailedEventAttributesHasBeenSet = true; m_workflowExecutionFailedEventAttributes = std::forward<WorkflowExecutionFailedEventAttributesT>(value); }
    template<typename WorkflowExecutionFailedEventAttributesT = WorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithWorkflowExecutionFailedEventAttributes(WorkflowExecutionFailedEventAttributesT&& value) { SetWorkflowExecutionFailedEventAttributes(std::forward<WorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>FailWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const FailWorkflowExecutionFailedEventAttributes& GetFailWorkflowExecutionFailedEventAttributes() const { return m_failWorkflowExecutionFailedEventAttributes; }
    inline bool FailWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_failWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename FailWorkflowExecutionFailedEventAttributesT = FailWorkflowExecutionFailedEventAttributes>
    void SetFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributesT&& value) { m_failWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_failWorkflowExecutionFailedEventAttributes = std::forward<FailWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename FailWorkflowExecutionFailedEventAttributesT = FailWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithFailWorkflowExecutionFailedEventAttributes(FailWorkflowExecutionFailedEventAttributesT&& value) { SetFailWorkflowExecutionFailedEventAttributes(std::forward<FailWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTimedOutEventAttributes& GetWorkflowExecutionTimedOutEventAttributes() const { return m_workflowExecutionTimedOutEventAttributes; }
    inline bool WorkflowExecutionTimedOutEventAttributesHasBeenSet() const { return m_workflowExecutionTimedOutEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionTimedOutEventAttributesT = WorkflowExecutionTimedOutEventAttributes>
    void SetWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributesT&& value) { m_workflowExecutionTimedOutEventAttributesHasBeenSet = true; m_workflowExecutionTimedOutEventAttributes = std::forward<WorkflowExecutionTimedOutEventAttributesT>(value); }
    template<typename WorkflowExecutionTimedOutEventAttributesT = WorkflowExecutionTimedOutEventAttributes>
    HistoryEvent& WithWorkflowExecutionTimedOutEventAttributes(WorkflowExecutionTimedOutEventAttributesT&& value) { SetWorkflowExecutionTimedOutEventAttributes(std::forward<WorkflowExecutionTimedOutEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionCanceledEventAttributes& GetWorkflowExecutionCanceledEventAttributes() const { return m_workflowExecutionCanceledEventAttributes; }
    inline bool WorkflowExecutionCanceledEventAttributesHasBeenSet() const { return m_workflowExecutionCanceledEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionCanceledEventAttributesT = WorkflowExecutionCanceledEventAttributes>
    void SetWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributesT&& value) { m_workflowExecutionCanceledEventAttributesHasBeenSet = true; m_workflowExecutionCanceledEventAttributes = std::forward<WorkflowExecutionCanceledEventAttributesT>(value); }
    template<typename WorkflowExecutionCanceledEventAttributesT = WorkflowExecutionCanceledEventAttributes>
    HistoryEvent& WithWorkflowExecutionCanceledEventAttributes(WorkflowExecutionCanceledEventAttributesT&& value) { SetWorkflowExecutionCanceledEventAttributes(std::forward<WorkflowExecutionCanceledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>CancelWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const CancelWorkflowExecutionFailedEventAttributes& GetCancelWorkflowExecutionFailedEventAttributes() const { return m_cancelWorkflowExecutionFailedEventAttributes; }
    inline bool CancelWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename CancelWorkflowExecutionFailedEventAttributesT = CancelWorkflowExecutionFailedEventAttributes>
    void SetCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributesT&& value) { m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_cancelWorkflowExecutionFailedEventAttributes = std::forward<CancelWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename CancelWorkflowExecutionFailedEventAttributesT = CancelWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithCancelWorkflowExecutionFailedEventAttributes(CancelWorkflowExecutionFailedEventAttributesT&& value) { SetCancelWorkflowExecutionFailedEventAttributes(std::forward<CancelWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionContinuedAsNew</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const WorkflowExecutionContinuedAsNewEventAttributes& GetWorkflowExecutionContinuedAsNewEventAttributes() const { return m_workflowExecutionContinuedAsNewEventAttributes; }
    inline bool WorkflowExecutionContinuedAsNewEventAttributesHasBeenSet() const { return m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionContinuedAsNewEventAttributesT = WorkflowExecutionContinuedAsNewEventAttributes>
    void SetWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributesT&& value) { m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = true; m_workflowExecutionContinuedAsNewEventAttributes = std::forward<WorkflowExecutionContinuedAsNewEventAttributesT>(value); }
    template<typename WorkflowExecutionContinuedAsNewEventAttributesT = WorkflowExecutionContinuedAsNewEventAttributes>
    HistoryEvent& WithWorkflowExecutionContinuedAsNewEventAttributes(WorkflowExecutionContinuedAsNewEventAttributesT&& value) { SetWorkflowExecutionContinuedAsNewEventAttributes(std::forward<WorkflowExecutionContinuedAsNewEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ContinueAsNewWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const ContinueAsNewWorkflowExecutionFailedEventAttributes& GetContinueAsNewWorkflowExecutionFailedEventAttributes() const { return m_continueAsNewWorkflowExecutionFailedEventAttributes; }
    inline bool ContinueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename ContinueAsNewWorkflowExecutionFailedEventAttributesT = ContinueAsNewWorkflowExecutionFailedEventAttributes>
    void SetContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributesT&& value) { m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionFailedEventAttributes = std::forward<ContinueAsNewWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename ContinueAsNewWorkflowExecutionFailedEventAttributesT = ContinueAsNewWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithContinueAsNewWorkflowExecutionFailedEventAttributes(ContinueAsNewWorkflowExecutionFailedEventAttributesT&& value) { SetContinueAsNewWorkflowExecutionFailedEventAttributes(std::forward<ContinueAsNewWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionTerminated</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionTerminatedEventAttributes& GetWorkflowExecutionTerminatedEventAttributes() const { return m_workflowExecutionTerminatedEventAttributes; }
    inline bool WorkflowExecutionTerminatedEventAttributesHasBeenSet() const { return m_workflowExecutionTerminatedEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionTerminatedEventAttributesT = WorkflowExecutionTerminatedEventAttributes>
    void SetWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributesT&& value) { m_workflowExecutionTerminatedEventAttributesHasBeenSet = true; m_workflowExecutionTerminatedEventAttributes = std::forward<WorkflowExecutionTerminatedEventAttributesT>(value); }
    template<typename WorkflowExecutionTerminatedEventAttributesT = WorkflowExecutionTerminatedEventAttributes>
    HistoryEvent& WithWorkflowExecutionTerminatedEventAttributes(WorkflowExecutionTerminatedEventAttributesT&& value) { SetWorkflowExecutionTerminatedEventAttributes(std::forward<WorkflowExecutionTerminatedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionCancelRequested</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const WorkflowExecutionCancelRequestedEventAttributes& GetWorkflowExecutionCancelRequestedEventAttributes() const { return m_workflowExecutionCancelRequestedEventAttributes; }
    inline bool WorkflowExecutionCancelRequestedEventAttributesHasBeenSet() const { return m_workflowExecutionCancelRequestedEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionCancelRequestedEventAttributesT = WorkflowExecutionCancelRequestedEventAttributes>
    void SetWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributesT&& value) { m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_workflowExecutionCancelRequestedEventAttributes = std::forward<WorkflowExecutionCancelRequestedEventAttributesT>(value); }
    template<typename WorkflowExecutionCancelRequestedEventAttributesT = WorkflowExecutionCancelRequestedEventAttributes>
    HistoryEvent& WithWorkflowExecutionCancelRequestedEventAttributes(WorkflowExecutionCancelRequestedEventAttributesT&& value) { SetWorkflowExecutionCancelRequestedEventAttributes(std::forward<WorkflowExecutionCancelRequestedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>DecisionTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskScheduledEventAttributes& GetDecisionTaskScheduledEventAttributes() const { return m_decisionTaskScheduledEventAttributes; }
    inline bool DecisionTaskScheduledEventAttributesHasBeenSet() const { return m_decisionTaskScheduledEventAttributesHasBeenSet; }
    template<typename DecisionTaskScheduledEventAttributesT = DecisionTaskScheduledEventAttributes>
    void SetDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributesT&& value) { m_decisionTaskScheduledEventAttributesHasBeenSet = true; m_decisionTaskScheduledEventAttributes = std::forward<DecisionTaskScheduledEventAttributesT>(value); }
    template<typename DecisionTaskScheduledEventAttributesT = DecisionTaskScheduledEventAttributes>
    HistoryEvent& WithDecisionTaskScheduledEventAttributes(DecisionTaskScheduledEventAttributesT&& value) { SetDecisionTaskScheduledEventAttributes(std::forward<DecisionTaskScheduledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>DecisionTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskStartedEventAttributes& GetDecisionTaskStartedEventAttributes() const { return m_decisionTaskStartedEventAttributes; }
    inline bool DecisionTaskStartedEventAttributesHasBeenSet() const { return m_decisionTaskStartedEventAttributesHasBeenSet; }
    template<typename DecisionTaskStartedEventAttributesT = DecisionTaskStartedEventAttributes>
    void SetDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributesT&& value) { m_decisionTaskStartedEventAttributesHasBeenSet = true; m_decisionTaskStartedEventAttributes = std::forward<DecisionTaskStartedEventAttributesT>(value); }
    template<typename DecisionTaskStartedEventAttributesT = DecisionTaskStartedEventAttributes>
    HistoryEvent& WithDecisionTaskStartedEventAttributes(DecisionTaskStartedEventAttributesT&& value) { SetDecisionTaskStartedEventAttributes(std::forward<DecisionTaskStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>DecisionTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskCompletedEventAttributes& GetDecisionTaskCompletedEventAttributes() const { return m_decisionTaskCompletedEventAttributes; }
    inline bool DecisionTaskCompletedEventAttributesHasBeenSet() const { return m_decisionTaskCompletedEventAttributesHasBeenSet; }
    template<typename DecisionTaskCompletedEventAttributesT = DecisionTaskCompletedEventAttributes>
    void SetDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributesT&& value) { m_decisionTaskCompletedEventAttributesHasBeenSet = true; m_decisionTaskCompletedEventAttributes = std::forward<DecisionTaskCompletedEventAttributesT>(value); }
    template<typename DecisionTaskCompletedEventAttributesT = DecisionTaskCompletedEventAttributes>
    HistoryEvent& WithDecisionTaskCompletedEventAttributes(DecisionTaskCompletedEventAttributesT&& value) { SetDecisionTaskCompletedEventAttributes(std::forward<DecisionTaskCompletedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>DecisionTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const DecisionTaskTimedOutEventAttributes& GetDecisionTaskTimedOutEventAttributes() const { return m_decisionTaskTimedOutEventAttributes; }
    inline bool DecisionTaskTimedOutEventAttributesHasBeenSet() const { return m_decisionTaskTimedOutEventAttributesHasBeenSet; }
    template<typename DecisionTaskTimedOutEventAttributesT = DecisionTaskTimedOutEventAttributes>
    void SetDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributesT&& value) { m_decisionTaskTimedOutEventAttributesHasBeenSet = true; m_decisionTaskTimedOutEventAttributes = std::forward<DecisionTaskTimedOutEventAttributesT>(value); }
    template<typename DecisionTaskTimedOutEventAttributesT = DecisionTaskTimedOutEventAttributes>
    HistoryEvent& WithDecisionTaskTimedOutEventAttributes(DecisionTaskTimedOutEventAttributesT&& value) { SetDecisionTaskTimedOutEventAttributes(std::forward<DecisionTaskTimedOutEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskScheduled</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskScheduledEventAttributes& GetActivityTaskScheduledEventAttributes() const { return m_activityTaskScheduledEventAttributes; }
    inline bool ActivityTaskScheduledEventAttributesHasBeenSet() const { return m_activityTaskScheduledEventAttributesHasBeenSet; }
    template<typename ActivityTaskScheduledEventAttributesT = ActivityTaskScheduledEventAttributes>
    void SetActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributesT&& value) { m_activityTaskScheduledEventAttributesHasBeenSet = true; m_activityTaskScheduledEventAttributes = std::forward<ActivityTaskScheduledEventAttributesT>(value); }
    template<typename ActivityTaskScheduledEventAttributesT = ActivityTaskScheduledEventAttributes>
    HistoryEvent& WithActivityTaskScheduledEventAttributes(ActivityTaskScheduledEventAttributesT&& value) { SetActivityTaskScheduledEventAttributes(std::forward<ActivityTaskScheduledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskStarted</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskStartedEventAttributes& GetActivityTaskStartedEventAttributes() const { return m_activityTaskStartedEventAttributes; }
    inline bool ActivityTaskStartedEventAttributesHasBeenSet() const { return m_activityTaskStartedEventAttributesHasBeenSet; }
    template<typename ActivityTaskStartedEventAttributesT = ActivityTaskStartedEventAttributes>
    void SetActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributesT&& value) { m_activityTaskStartedEventAttributesHasBeenSet = true; m_activityTaskStartedEventAttributes = std::forward<ActivityTaskStartedEventAttributesT>(value); }
    template<typename ActivityTaskStartedEventAttributesT = ActivityTaskStartedEventAttributes>
    HistoryEvent& WithActivityTaskStartedEventAttributes(ActivityTaskStartedEventAttributesT&& value) { SetActivityTaskStartedEventAttributes(std::forward<ActivityTaskStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskCompleted</code> then this member
     * is set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskCompletedEventAttributes& GetActivityTaskCompletedEventAttributes() const { return m_activityTaskCompletedEventAttributes; }
    inline bool ActivityTaskCompletedEventAttributesHasBeenSet() const { return m_activityTaskCompletedEventAttributesHasBeenSet; }
    template<typename ActivityTaskCompletedEventAttributesT = ActivityTaskCompletedEventAttributes>
    void SetActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributesT&& value) { m_activityTaskCompletedEventAttributesHasBeenSet = true; m_activityTaskCompletedEventAttributes = std::forward<ActivityTaskCompletedEventAttributesT>(value); }
    template<typename ActivityTaskCompletedEventAttributesT = ActivityTaskCompletedEventAttributes>
    HistoryEvent& WithActivityTaskCompletedEventAttributes(ActivityTaskCompletedEventAttributesT&& value) { SetActivityTaskCompletedEventAttributes(std::forward<ActivityTaskCompletedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskFailedEventAttributes& GetActivityTaskFailedEventAttributes() const { return m_activityTaskFailedEventAttributes; }
    inline bool ActivityTaskFailedEventAttributesHasBeenSet() const { return m_activityTaskFailedEventAttributesHasBeenSet; }
    template<typename ActivityTaskFailedEventAttributesT = ActivityTaskFailedEventAttributes>
    void SetActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributesT&& value) { m_activityTaskFailedEventAttributesHasBeenSet = true; m_activityTaskFailedEventAttributes = std::forward<ActivityTaskFailedEventAttributesT>(value); }
    template<typename ActivityTaskFailedEventAttributesT = ActivityTaskFailedEventAttributes>
    HistoryEvent& WithActivityTaskFailedEventAttributes(ActivityTaskFailedEventAttributesT&& value) { SetActivityTaskFailedEventAttributes(std::forward<ActivityTaskFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskTimedOut</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskTimedOutEventAttributes& GetActivityTaskTimedOutEventAttributes() const { return m_activityTaskTimedOutEventAttributes; }
    inline bool ActivityTaskTimedOutEventAttributesHasBeenSet() const { return m_activityTaskTimedOutEventAttributesHasBeenSet; }
    template<typename ActivityTaskTimedOutEventAttributesT = ActivityTaskTimedOutEventAttributes>
    void SetActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributesT&& value) { m_activityTaskTimedOutEventAttributesHasBeenSet = true; m_activityTaskTimedOutEventAttributes = std::forward<ActivityTaskTimedOutEventAttributesT>(value); }
    template<typename ActivityTaskTimedOutEventAttributesT = ActivityTaskTimedOutEventAttributes>
    HistoryEvent& WithActivityTaskTimedOutEventAttributes(ActivityTaskTimedOutEventAttributesT&& value) { SetActivityTaskTimedOutEventAttributes(std::forward<ActivityTaskTimedOutEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskCanceled</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const ActivityTaskCanceledEventAttributes& GetActivityTaskCanceledEventAttributes() const { return m_activityTaskCanceledEventAttributes; }
    inline bool ActivityTaskCanceledEventAttributesHasBeenSet() const { return m_activityTaskCanceledEventAttributesHasBeenSet; }
    template<typename ActivityTaskCanceledEventAttributesT = ActivityTaskCanceledEventAttributes>
    void SetActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributesT&& value) { m_activityTaskCanceledEventAttributesHasBeenSet = true; m_activityTaskCanceledEventAttributes = std::forward<ActivityTaskCanceledEventAttributesT>(value); }
    template<typename ActivityTaskCanceledEventAttributesT = ActivityTaskCanceledEventAttributes>
    HistoryEvent& WithActivityTaskCanceledEventAttributes(ActivityTaskCanceledEventAttributesT&& value) { SetActivityTaskCanceledEventAttributes(std::forward<ActivityTaskCanceledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ActivityTaskcancelRequested</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ActivityTaskCancelRequestedEventAttributes& GetActivityTaskCancelRequestedEventAttributes() const { return m_activityTaskCancelRequestedEventAttributes; }
    inline bool ActivityTaskCancelRequestedEventAttributesHasBeenSet() const { return m_activityTaskCancelRequestedEventAttributesHasBeenSet; }
    template<typename ActivityTaskCancelRequestedEventAttributesT = ActivityTaskCancelRequestedEventAttributes>
    void SetActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributesT&& value) { m_activityTaskCancelRequestedEventAttributesHasBeenSet = true; m_activityTaskCancelRequestedEventAttributes = std::forward<ActivityTaskCancelRequestedEventAttributesT>(value); }
    template<typename ActivityTaskCancelRequestedEventAttributesT = ActivityTaskCancelRequestedEventAttributes>
    HistoryEvent& WithActivityTaskCancelRequestedEventAttributes(ActivityTaskCancelRequestedEventAttributesT&& value) { SetActivityTaskCancelRequestedEventAttributes(std::forward<ActivityTaskCancelRequestedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>WorkflowExecutionSignaled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const WorkflowExecutionSignaledEventAttributes& GetWorkflowExecutionSignaledEventAttributes() const { return m_workflowExecutionSignaledEventAttributes; }
    inline bool WorkflowExecutionSignaledEventAttributesHasBeenSet() const { return m_workflowExecutionSignaledEventAttributesHasBeenSet; }
    template<typename WorkflowExecutionSignaledEventAttributesT = WorkflowExecutionSignaledEventAttributes>
    void SetWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributesT&& value) { m_workflowExecutionSignaledEventAttributesHasBeenSet = true; m_workflowExecutionSignaledEventAttributes = std::forward<WorkflowExecutionSignaledEventAttributesT>(value); }
    template<typename WorkflowExecutionSignaledEventAttributesT = WorkflowExecutionSignaledEventAttributes>
    HistoryEvent& WithWorkflowExecutionSignaledEventAttributes(WorkflowExecutionSignaledEventAttributesT&& value) { SetWorkflowExecutionSignaledEventAttributes(std::forward<WorkflowExecutionSignaledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>MarkerRecorded</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const MarkerRecordedEventAttributes& GetMarkerRecordedEventAttributes() const { return m_markerRecordedEventAttributes; }
    inline bool MarkerRecordedEventAttributesHasBeenSet() const { return m_markerRecordedEventAttributesHasBeenSet; }
    template<typename MarkerRecordedEventAttributesT = MarkerRecordedEventAttributes>
    void SetMarkerRecordedEventAttributes(MarkerRecordedEventAttributesT&& value) { m_markerRecordedEventAttributesHasBeenSet = true; m_markerRecordedEventAttributes = std::forward<MarkerRecordedEventAttributesT>(value); }
    template<typename MarkerRecordedEventAttributesT = MarkerRecordedEventAttributes>
    HistoryEvent& WithMarkerRecordedEventAttributes(MarkerRecordedEventAttributesT&& value) { SetMarkerRecordedEventAttributes(std::forward<MarkerRecordedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>DecisionTaskFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RecordMarkerFailedEventAttributes& GetRecordMarkerFailedEventAttributes() const { return m_recordMarkerFailedEventAttributes; }
    inline bool RecordMarkerFailedEventAttributesHasBeenSet() const { return m_recordMarkerFailedEventAttributesHasBeenSet; }
    template<typename RecordMarkerFailedEventAttributesT = RecordMarkerFailedEventAttributes>
    void SetRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributesT&& value) { m_recordMarkerFailedEventAttributesHasBeenSet = true; m_recordMarkerFailedEventAttributes = std::forward<RecordMarkerFailedEventAttributesT>(value); }
    template<typename RecordMarkerFailedEventAttributesT = RecordMarkerFailedEventAttributes>
    HistoryEvent& WithRecordMarkerFailedEventAttributes(RecordMarkerFailedEventAttributesT&& value) { SetRecordMarkerFailedEventAttributes(std::forward<RecordMarkerFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>TimerStarted</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerStartedEventAttributes& GetTimerStartedEventAttributes() const { return m_timerStartedEventAttributes; }
    inline bool TimerStartedEventAttributesHasBeenSet() const { return m_timerStartedEventAttributesHasBeenSet; }
    template<typename TimerStartedEventAttributesT = TimerStartedEventAttributes>
    void SetTimerStartedEventAttributes(TimerStartedEventAttributesT&& value) { m_timerStartedEventAttributesHasBeenSet = true; m_timerStartedEventAttributes = std::forward<TimerStartedEventAttributesT>(value); }
    template<typename TimerStartedEventAttributesT = TimerStartedEventAttributes>
    HistoryEvent& WithTimerStartedEventAttributes(TimerStartedEventAttributesT&& value) { SetTimerStartedEventAttributes(std::forward<TimerStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>TimerFired</code> then this member is set and
     * provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerFiredEventAttributes& GetTimerFiredEventAttributes() const { return m_timerFiredEventAttributes; }
    inline bool TimerFiredEventAttributesHasBeenSet() const { return m_timerFiredEventAttributesHasBeenSet; }
    template<typename TimerFiredEventAttributesT = TimerFiredEventAttributes>
    void SetTimerFiredEventAttributes(TimerFiredEventAttributesT&& value) { m_timerFiredEventAttributesHasBeenSet = true; m_timerFiredEventAttributes = std::forward<TimerFiredEventAttributesT>(value); }
    template<typename TimerFiredEventAttributesT = TimerFiredEventAttributes>
    HistoryEvent& WithTimerFiredEventAttributes(TimerFiredEventAttributesT&& value) { SetTimerFiredEventAttributes(std::forward<TimerFiredEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>TimerCanceled</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const TimerCanceledEventAttributes& GetTimerCanceledEventAttributes() const { return m_timerCanceledEventAttributes; }
    inline bool TimerCanceledEventAttributesHasBeenSet() const { return m_timerCanceledEventAttributesHasBeenSet; }
    template<typename TimerCanceledEventAttributesT = TimerCanceledEventAttributes>
    void SetTimerCanceledEventAttributes(TimerCanceledEventAttributesT&& value) { m_timerCanceledEventAttributesHasBeenSet = true; m_timerCanceledEventAttributes = std::forward<TimerCanceledEventAttributesT>(value); }
    template<typename TimerCanceledEventAttributesT = TimerCanceledEventAttributes>
    HistoryEvent& WithTimerCanceledEventAttributes(TimerCanceledEventAttributesT&& value) { SetTimerCanceledEventAttributes(std::forward<TimerCanceledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionInitiatedEventAttributes& GetStartChildWorkflowExecutionInitiatedEventAttributes() const { return m_startChildWorkflowExecutionInitiatedEventAttributes; }
    inline bool StartChildWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet; }
    template<typename StartChildWorkflowExecutionInitiatedEventAttributesT = StartChildWorkflowExecutionInitiatedEventAttributes>
    void SetStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributesT&& value) { m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionInitiatedEventAttributes = std::forward<StartChildWorkflowExecutionInitiatedEventAttributesT>(value); }
    template<typename StartChildWorkflowExecutionInitiatedEventAttributesT = StartChildWorkflowExecutionInitiatedEventAttributes>
    HistoryEvent& WithStartChildWorkflowExecutionInitiatedEventAttributes(StartChildWorkflowExecutionInitiatedEventAttributesT&& value) { SetStartChildWorkflowExecutionInitiatedEventAttributes(std::forward<StartChildWorkflowExecutionInitiatedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionStarted</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionStartedEventAttributes& GetChildWorkflowExecutionStartedEventAttributes() const { return m_childWorkflowExecutionStartedEventAttributes; }
    inline bool ChildWorkflowExecutionStartedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionStartedEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionStartedEventAttributesT = ChildWorkflowExecutionStartedEventAttributes>
    void SetChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributesT&& value) { m_childWorkflowExecutionStartedEventAttributesHasBeenSet = true; m_childWorkflowExecutionStartedEventAttributes = std::forward<ChildWorkflowExecutionStartedEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionStartedEventAttributesT = ChildWorkflowExecutionStartedEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionStartedEventAttributes(ChildWorkflowExecutionStartedEventAttributesT&& value) { SetChildWorkflowExecutionStartedEventAttributes(std::forward<ChildWorkflowExecutionStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCompleted</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionCompletedEventAttributes& GetChildWorkflowExecutionCompletedEventAttributes() const { return m_childWorkflowExecutionCompletedEventAttributes; }
    inline bool ChildWorkflowExecutionCompletedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionCompletedEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionCompletedEventAttributesT = ChildWorkflowExecutionCompletedEventAttributes>
    void SetChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributesT&& value) { m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = true; m_childWorkflowExecutionCompletedEventAttributes = std::forward<ChildWorkflowExecutionCompletedEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionCompletedEventAttributesT = ChildWorkflowExecutionCompletedEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionCompletedEventAttributes(ChildWorkflowExecutionCompletedEventAttributesT&& value) { SetChildWorkflowExecutionCompletedEventAttributes(std::forward<ChildWorkflowExecutionCompletedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionFailedEventAttributes& GetChildWorkflowExecutionFailedEventAttributes() const { return m_childWorkflowExecutionFailedEventAttributes; }
    inline bool ChildWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionFailedEventAttributesT = ChildWorkflowExecutionFailedEventAttributes>
    void SetChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributesT&& value) { m_childWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_childWorkflowExecutionFailedEventAttributes = std::forward<ChildWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionFailedEventAttributesT = ChildWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionFailedEventAttributes(ChildWorkflowExecutionFailedEventAttributesT&& value) { SetChildWorkflowExecutionFailedEventAttributes(std::forward<ChildWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTimedOut</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionTimedOutEventAttributes& GetChildWorkflowExecutionTimedOutEventAttributes() const { return m_childWorkflowExecutionTimedOutEventAttributes; }
    inline bool ChildWorkflowExecutionTimedOutEventAttributesHasBeenSet() const { return m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionTimedOutEventAttributesT = ChildWorkflowExecutionTimedOutEventAttributes>
    void SetChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributesT&& value) { m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = true; m_childWorkflowExecutionTimedOutEventAttributes = std::forward<ChildWorkflowExecutionTimedOutEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionTimedOutEventAttributesT = ChildWorkflowExecutionTimedOutEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionTimedOutEventAttributes(ChildWorkflowExecutionTimedOutEventAttributesT&& value) { SetChildWorkflowExecutionTimedOutEventAttributes(std::forward<ChildWorkflowExecutionTimedOutEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionCanceled</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ChildWorkflowExecutionCanceledEventAttributes& GetChildWorkflowExecutionCanceledEventAttributes() const { return m_childWorkflowExecutionCanceledEventAttributes; }
    inline bool ChildWorkflowExecutionCanceledEventAttributesHasBeenSet() const { return m_childWorkflowExecutionCanceledEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionCanceledEventAttributesT = ChildWorkflowExecutionCanceledEventAttributes>
    void SetChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributesT&& value) { m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = true; m_childWorkflowExecutionCanceledEventAttributes = std::forward<ChildWorkflowExecutionCanceledEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionCanceledEventAttributesT = ChildWorkflowExecutionCanceledEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionCanceledEventAttributes(ChildWorkflowExecutionCanceledEventAttributesT&& value) { SetChildWorkflowExecutionCanceledEventAttributes(std::forward<ChildWorkflowExecutionCanceledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ChildWorkflowExecutionTerminated</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ChildWorkflowExecutionTerminatedEventAttributes& GetChildWorkflowExecutionTerminatedEventAttributes() const { return m_childWorkflowExecutionTerminatedEventAttributes; }
    inline bool ChildWorkflowExecutionTerminatedEventAttributesHasBeenSet() const { return m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet; }
    template<typename ChildWorkflowExecutionTerminatedEventAttributesT = ChildWorkflowExecutionTerminatedEventAttributes>
    void SetChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributesT&& value) { m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = true; m_childWorkflowExecutionTerminatedEventAttributes = std::forward<ChildWorkflowExecutionTerminatedEventAttributesT>(value); }
    template<typename ChildWorkflowExecutionTerminatedEventAttributesT = ChildWorkflowExecutionTerminatedEventAttributes>
    HistoryEvent& WithChildWorkflowExecutionTerminatedEventAttributes(ChildWorkflowExecutionTerminatedEventAttributesT&& value) { SetChildWorkflowExecutionTerminatedEventAttributes(std::forward<ChildWorkflowExecutionTerminatedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionInitiated</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionInitiatedEventAttributes& GetSignalExternalWorkflowExecutionInitiatedEventAttributes() const { return m_signalExternalWorkflowExecutionInitiatedEventAttributes; }
    inline bool SignalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet; }
    template<typename SignalExternalWorkflowExecutionInitiatedEventAttributesT = SignalExternalWorkflowExecutionInitiatedEventAttributes>
    void SetSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributesT&& value) { m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionInitiatedEventAttributes = std::forward<SignalExternalWorkflowExecutionInitiatedEventAttributesT>(value); }
    template<typename SignalExternalWorkflowExecutionInitiatedEventAttributesT = SignalExternalWorkflowExecutionInitiatedEventAttributes>
    HistoryEvent& WithSignalExternalWorkflowExecutionInitiatedEventAttributes(SignalExternalWorkflowExecutionInitiatedEventAttributesT&& value) { SetSignalExternalWorkflowExecutionInitiatedEventAttributes(std::forward<SignalExternalWorkflowExecutionInitiatedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionSignaled</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const ExternalWorkflowExecutionSignaledEventAttributes& GetExternalWorkflowExecutionSignaledEventAttributes() const { return m_externalWorkflowExecutionSignaledEventAttributes; }
    inline bool ExternalWorkflowExecutionSignaledEventAttributesHasBeenSet() const { return m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet; }
    template<typename ExternalWorkflowExecutionSignaledEventAttributesT = ExternalWorkflowExecutionSignaledEventAttributes>
    void SetExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributesT&& value) { m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = true; m_externalWorkflowExecutionSignaledEventAttributes = std::forward<ExternalWorkflowExecutionSignaledEventAttributesT>(value); }
    template<typename ExternalWorkflowExecutionSignaledEventAttributesT = ExternalWorkflowExecutionSignaledEventAttributes>
    HistoryEvent& WithExternalWorkflowExecutionSignaledEventAttributes(ExternalWorkflowExecutionSignaledEventAttributesT&& value) { SetExternalWorkflowExecutionSignaledEventAttributes(std::forward<ExternalWorkflowExecutionSignaledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>SignalExternalWorkflowExecutionFailed</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types.</p>
     */
    inline const SignalExternalWorkflowExecutionFailedEventAttributes& GetSignalExternalWorkflowExecutionFailedEventAttributes() const { return m_signalExternalWorkflowExecutionFailedEventAttributes; }
    inline bool SignalExternalWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename SignalExternalWorkflowExecutionFailedEventAttributesT = SignalExternalWorkflowExecutionFailedEventAttributes>
    void SetSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributesT&& value) { m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionFailedEventAttributes = std::forward<SignalExternalWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename SignalExternalWorkflowExecutionFailedEventAttributesT = SignalExternalWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithSignalExternalWorkflowExecutionFailedEventAttributes(SignalExternalWorkflowExecutionFailedEventAttributesT&& value) { SetSignalExternalWorkflowExecutionFailedEventAttributes(std::forward<SignalExternalWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ExternalWorkflowExecutionCancelRequested</code>
     * then this member is set and provides detailed information about the event. It
     * isn't set for other event types. </p>
     */
    inline const ExternalWorkflowExecutionCancelRequestedEventAttributes& GetExternalWorkflowExecutionCancelRequestedEventAttributes() const { return m_externalWorkflowExecutionCancelRequestedEventAttributes; }
    inline bool ExternalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet() const { return m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet; }
    template<typename ExternalWorkflowExecutionCancelRequestedEventAttributesT = ExternalWorkflowExecutionCancelRequestedEventAttributes>
    void SetExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributesT&& value) { m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = true; m_externalWorkflowExecutionCancelRequestedEventAttributes = std::forward<ExternalWorkflowExecutionCancelRequestedEventAttributesT>(value); }
    template<typename ExternalWorkflowExecutionCancelRequestedEventAttributesT = ExternalWorkflowExecutionCancelRequestedEventAttributes>
    HistoryEvent& WithExternalWorkflowExecutionCancelRequestedEventAttributes(ExternalWorkflowExecutionCancelRequestedEventAttributesT&& value) { SetExternalWorkflowExecutionCancelRequestedEventAttributes(std::forward<ExternalWorkflowExecutionCancelRequestedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionInitiated</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionInitiatedEventAttributes& GetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes() const { return m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes; }
    inline bool RequestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet() const { return m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet; }
    template<typename RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT = RequestCancelExternalWorkflowExecutionInitiatedEventAttributes>
    void SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT&& value) { m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes = std::forward<RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT>(value); }
    template<typename RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT = RequestCancelExternalWorkflowExecutionInitiatedEventAttributes>
    HistoryEvent& WithRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT&& value) { SetRequestCancelExternalWorkflowExecutionInitiatedEventAttributes(std::forward<RequestCancelExternalWorkflowExecutionInitiatedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type
     * <code>RequestCancelExternalWorkflowExecutionFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionFailedEventAttributes& GetRequestCancelExternalWorkflowExecutionFailedEventAttributes() const { return m_requestCancelExternalWorkflowExecutionFailedEventAttributes; }
    inline bool RequestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename RequestCancelExternalWorkflowExecutionFailedEventAttributesT = RequestCancelExternalWorkflowExecutionFailedEventAttributes>
    void SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributesT&& value) { m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionFailedEventAttributes = std::forward<RequestCancelExternalWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename RequestCancelExternalWorkflowExecutionFailedEventAttributesT = RequestCancelExternalWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithRequestCancelExternalWorkflowExecutionFailedEventAttributes(RequestCancelExternalWorkflowExecutionFailedEventAttributesT&& value) { SetRequestCancelExternalWorkflowExecutionFailedEventAttributes(std::forward<RequestCancelExternalWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>ScheduleActivityTaskFailed</code> then this
     * member is set and provides detailed information about the event. It isn't set
     * for other event types.</p>
     */
    inline const ScheduleActivityTaskFailedEventAttributes& GetScheduleActivityTaskFailedEventAttributes() const { return m_scheduleActivityTaskFailedEventAttributes; }
    inline bool ScheduleActivityTaskFailedEventAttributesHasBeenSet() const { return m_scheduleActivityTaskFailedEventAttributesHasBeenSet; }
    template<typename ScheduleActivityTaskFailedEventAttributesT = ScheduleActivityTaskFailedEventAttributes>
    void SetScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributesT&& value) { m_scheduleActivityTaskFailedEventAttributesHasBeenSet = true; m_scheduleActivityTaskFailedEventAttributes = std::forward<ScheduleActivityTaskFailedEventAttributesT>(value); }
    template<typename ScheduleActivityTaskFailedEventAttributesT = ScheduleActivityTaskFailedEventAttributes>
    HistoryEvent& WithScheduleActivityTaskFailedEventAttributes(ScheduleActivityTaskFailedEventAttributesT&& value) { SetScheduleActivityTaskFailedEventAttributes(std::forward<ScheduleActivityTaskFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>RequestCancelActivityTaskFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const RequestCancelActivityTaskFailedEventAttributes& GetRequestCancelActivityTaskFailedEventAttributes() const { return m_requestCancelActivityTaskFailedEventAttributes; }
    inline bool RequestCancelActivityTaskFailedEventAttributesHasBeenSet() const { return m_requestCancelActivityTaskFailedEventAttributesHasBeenSet; }
    template<typename RequestCancelActivityTaskFailedEventAttributesT = RequestCancelActivityTaskFailedEventAttributes>
    void SetRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributesT&& value) { m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = true; m_requestCancelActivityTaskFailedEventAttributes = std::forward<RequestCancelActivityTaskFailedEventAttributesT>(value); }
    template<typename RequestCancelActivityTaskFailedEventAttributesT = RequestCancelActivityTaskFailedEventAttributes>
    HistoryEvent& WithRequestCancelActivityTaskFailedEventAttributes(RequestCancelActivityTaskFailedEventAttributesT&& value) { SetRequestCancelActivityTaskFailedEventAttributes(std::forward<RequestCancelActivityTaskFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>StartTimerFailed</code> then this member is set
     * and provides detailed information about the event. It isn't set for other event
     * types.</p>
     */
    inline const StartTimerFailedEventAttributes& GetStartTimerFailedEventAttributes() const { return m_startTimerFailedEventAttributes; }
    inline bool StartTimerFailedEventAttributesHasBeenSet() const { return m_startTimerFailedEventAttributesHasBeenSet; }
    template<typename StartTimerFailedEventAttributesT = StartTimerFailedEventAttributes>
    void SetStartTimerFailedEventAttributes(StartTimerFailedEventAttributesT&& value) { m_startTimerFailedEventAttributesHasBeenSet = true; m_startTimerFailedEventAttributes = std::forward<StartTimerFailedEventAttributesT>(value); }
    template<typename StartTimerFailedEventAttributesT = StartTimerFailedEventAttributes>
    HistoryEvent& WithStartTimerFailedEventAttributes(StartTimerFailedEventAttributesT&& value) { SetStartTimerFailedEventAttributes(std::forward<StartTimerFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>CancelTimerFailed</code> then this member is
     * set and provides detailed information about the event. It isn't set for other
     * event types.</p>
     */
    inline const CancelTimerFailedEventAttributes& GetCancelTimerFailedEventAttributes() const { return m_cancelTimerFailedEventAttributes; }
    inline bool CancelTimerFailedEventAttributesHasBeenSet() const { return m_cancelTimerFailedEventAttributesHasBeenSet; }
    template<typename CancelTimerFailedEventAttributesT = CancelTimerFailedEventAttributes>
    void SetCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributesT&& value) { m_cancelTimerFailedEventAttributesHasBeenSet = true; m_cancelTimerFailedEventAttributes = std::forward<CancelTimerFailedEventAttributesT>(value); }
    template<typename CancelTimerFailedEventAttributesT = CancelTimerFailedEventAttributes>
    HistoryEvent& WithCancelTimerFailedEventAttributes(CancelTimerFailedEventAttributesT&& value) { SetCancelTimerFailedEventAttributes(std::forward<CancelTimerFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event is of type <code>StartChildWorkflowExecutionFailed</code> then
     * this member is set and provides detailed information about the event. It isn't
     * set for other event types.</p>
     */
    inline const StartChildWorkflowExecutionFailedEventAttributes& GetStartChildWorkflowExecutionFailedEventAttributes() const { return m_startChildWorkflowExecutionFailedEventAttributes; }
    inline bool StartChildWorkflowExecutionFailedEventAttributesHasBeenSet() const { return m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet; }
    template<typename StartChildWorkflowExecutionFailedEventAttributesT = StartChildWorkflowExecutionFailedEventAttributes>
    void SetStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributesT&& value) { m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = true; m_startChildWorkflowExecutionFailedEventAttributes = std::forward<StartChildWorkflowExecutionFailedEventAttributesT>(value); }
    template<typename StartChildWorkflowExecutionFailedEventAttributesT = StartChildWorkflowExecutionFailedEventAttributes>
    HistoryEvent& WithStartChildWorkflowExecutionFailedEventAttributes(StartChildWorkflowExecutionFailedEventAttributesT&& value) { SetStartChildWorkflowExecutionFailedEventAttributes(std::forward<StartChildWorkflowExecutionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>LambdaFunctionScheduled</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionScheduledEventAttributes& GetLambdaFunctionScheduledEventAttributes() const { return m_lambdaFunctionScheduledEventAttributes; }
    inline bool LambdaFunctionScheduledEventAttributesHasBeenSet() const { return m_lambdaFunctionScheduledEventAttributesHasBeenSet; }
    template<typename LambdaFunctionScheduledEventAttributesT = LambdaFunctionScheduledEventAttributes>
    void SetLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributesT&& value) { m_lambdaFunctionScheduledEventAttributesHasBeenSet = true; m_lambdaFunctionScheduledEventAttributes = std::forward<LambdaFunctionScheduledEventAttributesT>(value); }
    template<typename LambdaFunctionScheduledEventAttributesT = LambdaFunctionScheduledEventAttributes>
    HistoryEvent& WithLambdaFunctionScheduledEventAttributes(LambdaFunctionScheduledEventAttributesT&& value) { SetLambdaFunctionScheduledEventAttributes(std::forward<LambdaFunctionScheduledEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>LambdaFunctionStarted</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionStartedEventAttributes& GetLambdaFunctionStartedEventAttributes() const { return m_lambdaFunctionStartedEventAttributes; }
    inline bool LambdaFunctionStartedEventAttributesHasBeenSet() const { return m_lambdaFunctionStartedEventAttributesHasBeenSet; }
    template<typename LambdaFunctionStartedEventAttributesT = LambdaFunctionStartedEventAttributes>
    void SetLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributesT&& value) { m_lambdaFunctionStartedEventAttributesHasBeenSet = true; m_lambdaFunctionStartedEventAttributes = std::forward<LambdaFunctionStartedEventAttributesT>(value); }
    template<typename LambdaFunctionStartedEventAttributesT = LambdaFunctionStartedEventAttributes>
    HistoryEvent& WithLambdaFunctionStartedEventAttributes(LambdaFunctionStartedEventAttributesT&& value) { SetLambdaFunctionStartedEventAttributes(std::forward<LambdaFunctionStartedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>LambdaFunctionCompleted</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionCompletedEventAttributes& GetLambdaFunctionCompletedEventAttributes() const { return m_lambdaFunctionCompletedEventAttributes; }
    inline bool LambdaFunctionCompletedEventAttributesHasBeenSet() const { return m_lambdaFunctionCompletedEventAttributesHasBeenSet; }
    template<typename LambdaFunctionCompletedEventAttributesT = LambdaFunctionCompletedEventAttributes>
    void SetLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributesT&& value) { m_lambdaFunctionCompletedEventAttributesHasBeenSet = true; m_lambdaFunctionCompletedEventAttributes = std::forward<LambdaFunctionCompletedEventAttributesT>(value); }
    template<typename LambdaFunctionCompletedEventAttributesT = LambdaFunctionCompletedEventAttributes>
    HistoryEvent& WithLambdaFunctionCompletedEventAttributes(LambdaFunctionCompletedEventAttributesT&& value) { SetLambdaFunctionCompletedEventAttributes(std::forward<LambdaFunctionCompletedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>LambdaFunctionFailed</code> event. It isn't
     * set for other event types.</p>
     */
    inline const LambdaFunctionFailedEventAttributes& GetLambdaFunctionFailedEventAttributes() const { return m_lambdaFunctionFailedEventAttributes; }
    inline bool LambdaFunctionFailedEventAttributesHasBeenSet() const { return m_lambdaFunctionFailedEventAttributesHasBeenSet; }
    template<typename LambdaFunctionFailedEventAttributesT = LambdaFunctionFailedEventAttributes>
    void SetLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributesT&& value) { m_lambdaFunctionFailedEventAttributesHasBeenSet = true; m_lambdaFunctionFailedEventAttributes = std::forward<LambdaFunctionFailedEventAttributesT>(value); }
    template<typename LambdaFunctionFailedEventAttributesT = LambdaFunctionFailedEventAttributes>
    HistoryEvent& WithLambdaFunctionFailedEventAttributes(LambdaFunctionFailedEventAttributesT&& value) { SetLambdaFunctionFailedEventAttributes(std::forward<LambdaFunctionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>LambdaFunctionTimedOut</code> event. It
     * isn't set for other event types.</p>
     */
    inline const LambdaFunctionTimedOutEventAttributes& GetLambdaFunctionTimedOutEventAttributes() const { return m_lambdaFunctionTimedOutEventAttributes; }
    inline bool LambdaFunctionTimedOutEventAttributesHasBeenSet() const { return m_lambdaFunctionTimedOutEventAttributesHasBeenSet; }
    template<typename LambdaFunctionTimedOutEventAttributesT = LambdaFunctionTimedOutEventAttributes>
    void SetLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributesT&& value) { m_lambdaFunctionTimedOutEventAttributesHasBeenSet = true; m_lambdaFunctionTimedOutEventAttributes = std::forward<LambdaFunctionTimedOutEventAttributesT>(value); }
    template<typename LambdaFunctionTimedOutEventAttributesT = LambdaFunctionTimedOutEventAttributes>
    HistoryEvent& WithLambdaFunctionTimedOutEventAttributes(LambdaFunctionTimedOutEventAttributesT&& value) { SetLambdaFunctionTimedOutEventAttributes(std::forward<LambdaFunctionTimedOutEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunctionFailed</code> event.
     * It isn't set for other event types.</p>
     */
    inline const ScheduleLambdaFunctionFailedEventAttributes& GetScheduleLambdaFunctionFailedEventAttributes() const { return m_scheduleLambdaFunctionFailedEventAttributes; }
    inline bool ScheduleLambdaFunctionFailedEventAttributesHasBeenSet() const { return m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet; }
    template<typename ScheduleLambdaFunctionFailedEventAttributesT = ScheduleLambdaFunctionFailedEventAttributes>
    void SetScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributesT&& value) { m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = true; m_scheduleLambdaFunctionFailedEventAttributes = std::forward<ScheduleLambdaFunctionFailedEventAttributesT>(value); }
    template<typename ScheduleLambdaFunctionFailedEventAttributesT = ScheduleLambdaFunctionFailedEventAttributes>
    HistoryEvent& WithScheduleLambdaFunctionFailedEventAttributes(ScheduleLambdaFunctionFailedEventAttributesT&& value) { SetScheduleLambdaFunctionFailedEventAttributes(std::forward<ScheduleLambdaFunctionFailedEventAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>StartLambdaFunctionFailed</code> event. It
     * isn't set for other event types.</p>
     */
    inline const StartLambdaFunctionFailedEventAttributes& GetStartLambdaFunctionFailedEventAttributes() const { return m_startLambdaFunctionFailedEventAttributes; }
    inline bool StartLambdaFunctionFailedEventAttributesHasBeenSet() const { return m_startLambdaFunctionFailedEventAttributesHasBeenSet; }
    template<typename StartLambdaFunctionFailedEventAttributesT = StartLambdaFunctionFailedEventAttributes>
    void SetStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributesT&& value) { m_startLambdaFunctionFailedEventAttributesHasBeenSet = true; m_startLambdaFunctionFailedEventAttributes = std::forward<StartLambdaFunctionFailedEventAttributesT>(value); }
    template<typename StartLambdaFunctionFailedEventAttributesT = StartLambdaFunctionFailedEventAttributes>
    HistoryEvent& WithStartLambdaFunctionFailedEventAttributes(StartLambdaFunctionFailedEventAttributesT&& value) { SetStartLambdaFunctionFailedEventAttributes(std::forward<StartLambdaFunctionFailedEventAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_eventTimestamp{};
    bool m_eventTimestampHasBeenSet = false;

    EventType m_eventType{EventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    long long m_eventId{0};
    bool m_eventIdHasBeenSet = false;

    WorkflowExecutionStartedEventAttributes m_workflowExecutionStartedEventAttributes;
    bool m_workflowExecutionStartedEventAttributesHasBeenSet = false;

    WorkflowExecutionCompletedEventAttributes m_workflowExecutionCompletedEventAttributes;
    bool m_workflowExecutionCompletedEventAttributesHasBeenSet = false;

    CompleteWorkflowExecutionFailedEventAttributes m_completeWorkflowExecutionFailedEventAttributes;
    bool m_completeWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    WorkflowExecutionFailedEventAttributes m_workflowExecutionFailedEventAttributes;
    bool m_workflowExecutionFailedEventAttributesHasBeenSet = false;

    FailWorkflowExecutionFailedEventAttributes m_failWorkflowExecutionFailedEventAttributes;
    bool m_failWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    WorkflowExecutionTimedOutEventAttributes m_workflowExecutionTimedOutEventAttributes;
    bool m_workflowExecutionTimedOutEventAttributesHasBeenSet = false;

    WorkflowExecutionCanceledEventAttributes m_workflowExecutionCanceledEventAttributes;
    bool m_workflowExecutionCanceledEventAttributesHasBeenSet = false;

    CancelWorkflowExecutionFailedEventAttributes m_cancelWorkflowExecutionFailedEventAttributes;
    bool m_cancelWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    WorkflowExecutionContinuedAsNewEventAttributes m_workflowExecutionContinuedAsNewEventAttributes;
    bool m_workflowExecutionContinuedAsNewEventAttributesHasBeenSet = false;

    ContinueAsNewWorkflowExecutionFailedEventAttributes m_continueAsNewWorkflowExecutionFailedEventAttributes;
    bool m_continueAsNewWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    WorkflowExecutionTerminatedEventAttributes m_workflowExecutionTerminatedEventAttributes;
    bool m_workflowExecutionTerminatedEventAttributesHasBeenSet = false;

    WorkflowExecutionCancelRequestedEventAttributes m_workflowExecutionCancelRequestedEventAttributes;
    bool m_workflowExecutionCancelRequestedEventAttributesHasBeenSet = false;

    DecisionTaskScheduledEventAttributes m_decisionTaskScheduledEventAttributes;
    bool m_decisionTaskScheduledEventAttributesHasBeenSet = false;

    DecisionTaskStartedEventAttributes m_decisionTaskStartedEventAttributes;
    bool m_decisionTaskStartedEventAttributesHasBeenSet = false;

    DecisionTaskCompletedEventAttributes m_decisionTaskCompletedEventAttributes;
    bool m_decisionTaskCompletedEventAttributesHasBeenSet = false;

    DecisionTaskTimedOutEventAttributes m_decisionTaskTimedOutEventAttributes;
    bool m_decisionTaskTimedOutEventAttributesHasBeenSet = false;

    ActivityTaskScheduledEventAttributes m_activityTaskScheduledEventAttributes;
    bool m_activityTaskScheduledEventAttributesHasBeenSet = false;

    ActivityTaskStartedEventAttributes m_activityTaskStartedEventAttributes;
    bool m_activityTaskStartedEventAttributesHasBeenSet = false;

    ActivityTaskCompletedEventAttributes m_activityTaskCompletedEventAttributes;
    bool m_activityTaskCompletedEventAttributesHasBeenSet = false;

    ActivityTaskFailedEventAttributes m_activityTaskFailedEventAttributes;
    bool m_activityTaskFailedEventAttributesHasBeenSet = false;

    ActivityTaskTimedOutEventAttributes m_activityTaskTimedOutEventAttributes;
    bool m_activityTaskTimedOutEventAttributesHasBeenSet = false;

    ActivityTaskCanceledEventAttributes m_activityTaskCanceledEventAttributes;
    bool m_activityTaskCanceledEventAttributesHasBeenSet = false;

    ActivityTaskCancelRequestedEventAttributes m_activityTaskCancelRequestedEventAttributes;
    bool m_activityTaskCancelRequestedEventAttributesHasBeenSet = false;

    WorkflowExecutionSignaledEventAttributes m_workflowExecutionSignaledEventAttributes;
    bool m_workflowExecutionSignaledEventAttributesHasBeenSet = false;

    MarkerRecordedEventAttributes m_markerRecordedEventAttributes;
    bool m_markerRecordedEventAttributesHasBeenSet = false;

    RecordMarkerFailedEventAttributes m_recordMarkerFailedEventAttributes;
    bool m_recordMarkerFailedEventAttributesHasBeenSet = false;

    TimerStartedEventAttributes m_timerStartedEventAttributes;
    bool m_timerStartedEventAttributesHasBeenSet = false;

    TimerFiredEventAttributes m_timerFiredEventAttributes;
    bool m_timerFiredEventAttributesHasBeenSet = false;

    TimerCanceledEventAttributes m_timerCanceledEventAttributes;
    bool m_timerCanceledEventAttributesHasBeenSet = false;

    StartChildWorkflowExecutionInitiatedEventAttributes m_startChildWorkflowExecutionInitiatedEventAttributes;
    bool m_startChildWorkflowExecutionInitiatedEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionStartedEventAttributes m_childWorkflowExecutionStartedEventAttributes;
    bool m_childWorkflowExecutionStartedEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionCompletedEventAttributes m_childWorkflowExecutionCompletedEventAttributes;
    bool m_childWorkflowExecutionCompletedEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionFailedEventAttributes m_childWorkflowExecutionFailedEventAttributes;
    bool m_childWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionTimedOutEventAttributes m_childWorkflowExecutionTimedOutEventAttributes;
    bool m_childWorkflowExecutionTimedOutEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionCanceledEventAttributes m_childWorkflowExecutionCanceledEventAttributes;
    bool m_childWorkflowExecutionCanceledEventAttributesHasBeenSet = false;

    ChildWorkflowExecutionTerminatedEventAttributes m_childWorkflowExecutionTerminatedEventAttributes;
    bool m_childWorkflowExecutionTerminatedEventAttributesHasBeenSet = false;

    SignalExternalWorkflowExecutionInitiatedEventAttributes m_signalExternalWorkflowExecutionInitiatedEventAttributes;
    bool m_signalExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = false;

    ExternalWorkflowExecutionSignaledEventAttributes m_externalWorkflowExecutionSignaledEventAttributes;
    bool m_externalWorkflowExecutionSignaledEventAttributesHasBeenSet = false;

    SignalExternalWorkflowExecutionFailedEventAttributes m_signalExternalWorkflowExecutionFailedEventAttributes;
    bool m_signalExternalWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    ExternalWorkflowExecutionCancelRequestedEventAttributes m_externalWorkflowExecutionCancelRequestedEventAttributes;
    bool m_externalWorkflowExecutionCancelRequestedEventAttributesHasBeenSet = false;

    RequestCancelExternalWorkflowExecutionInitiatedEventAttributes m_requestCancelExternalWorkflowExecutionInitiatedEventAttributes;
    bool m_requestCancelExternalWorkflowExecutionInitiatedEventAttributesHasBeenSet = false;

    RequestCancelExternalWorkflowExecutionFailedEventAttributes m_requestCancelExternalWorkflowExecutionFailedEventAttributes;
    bool m_requestCancelExternalWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    ScheduleActivityTaskFailedEventAttributes m_scheduleActivityTaskFailedEventAttributes;
    bool m_scheduleActivityTaskFailedEventAttributesHasBeenSet = false;

    RequestCancelActivityTaskFailedEventAttributes m_requestCancelActivityTaskFailedEventAttributes;
    bool m_requestCancelActivityTaskFailedEventAttributesHasBeenSet = false;

    StartTimerFailedEventAttributes m_startTimerFailedEventAttributes;
    bool m_startTimerFailedEventAttributesHasBeenSet = false;

    CancelTimerFailedEventAttributes m_cancelTimerFailedEventAttributes;
    bool m_cancelTimerFailedEventAttributesHasBeenSet = false;

    StartChildWorkflowExecutionFailedEventAttributes m_startChildWorkflowExecutionFailedEventAttributes;
    bool m_startChildWorkflowExecutionFailedEventAttributesHasBeenSet = false;

    LambdaFunctionScheduledEventAttributes m_lambdaFunctionScheduledEventAttributes;
    bool m_lambdaFunctionScheduledEventAttributesHasBeenSet = false;

    LambdaFunctionStartedEventAttributes m_lambdaFunctionStartedEventAttributes;
    bool m_lambdaFunctionStartedEventAttributesHasBeenSet = false;

    LambdaFunctionCompletedEventAttributes m_lambdaFunctionCompletedEventAttributes;
    bool m_lambdaFunctionCompletedEventAttributesHasBeenSet = false;

    LambdaFunctionFailedEventAttributes m_lambdaFunctionFailedEventAttributes;
    bool m_lambdaFunctionFailedEventAttributesHasBeenSet = false;

    LambdaFunctionTimedOutEventAttributes m_lambdaFunctionTimedOutEventAttributes;
    bool m_lambdaFunctionTimedOutEventAttributesHasBeenSet = false;

    ScheduleLambdaFunctionFailedEventAttributes m_scheduleLambdaFunctionFailedEventAttributes;
    bool m_scheduleLambdaFunctionFailedEventAttributesHasBeenSet = false;

    StartLambdaFunctionFailedEventAttributes m_startLambdaFunctionFailedEventAttributes;
    bool m_startLambdaFunctionFailedEventAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
