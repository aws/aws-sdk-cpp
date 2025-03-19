/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/HistoryEvent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{
  /**
   * <p>A structure that represents a decision task. Decision tasks are sent to
   * deciders in order for them to make decisions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTask">AWS
   * API Reference</a></p>
   */
  class PollForDecisionTaskResult
  {
  public:
    AWS_SWF_API PollForDecisionTaskResult() = default;
    AWS_SWF_API PollForDecisionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API PollForDecisionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const { return m_taskToken; }
    template<typename TaskTokenT = Aws::String>
    void SetTaskToken(TaskTokenT&& value) { m_taskTokenHasBeenSet = true; m_taskToken = std::forward<TaskTokenT>(value); }
    template<typename TaskTokenT = Aws::String>
    PollForDecisionTaskResult& WithTaskToken(TaskTokenT&& value) { SetTaskToken(std::forward<TaskTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline PollForDecisionTaskResult& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const { return m_workflowExecution; }
    template<typename WorkflowExecutionT = WorkflowExecution>
    void SetWorkflowExecution(WorkflowExecutionT&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::forward<WorkflowExecutionT>(value); }
    template<typename WorkflowExecutionT = WorkflowExecution>
    PollForDecisionTaskResult& WithWorkflowExecution(WorkflowExecutionT&& value) { SetWorkflowExecution(std::forward<WorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    PollForDecisionTaskResult& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline const Aws::Vector<HistoryEvent>& GetEvents() const { return m_events; }
    template<typename EventsT = Aws::Vector<HistoryEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<HistoryEvent>>
    PollForDecisionTaskResult& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = HistoryEvent>
    PollForDecisionTaskResult& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    PollForDecisionTaskResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the DecisionTaskStarted event of the previous decision task of this
     * workflow execution that was processed by the decider. This can be used to
     * determine the events in the history new since the last decision task received by
     * the decider.</p>
     */
    inline long long GetPreviousStartedEventId() const { return m_previousStartedEventId; }
    inline void SetPreviousStartedEventId(long long value) { m_previousStartedEventIdHasBeenSet = true; m_previousStartedEventId = value; }
    inline PollForDecisionTaskResult& WithPreviousStartedEventId(long long value) { SetPreviousStartedEventId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PollForDecisionTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::Vector<HistoryEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    long long m_previousStartedEventId{0};
    bool m_previousStartedEventIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
