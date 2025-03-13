/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/ActivityType.h>
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
   * <p>Unit of work sent to an activity worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTask">AWS
   * API Reference</a></p>
   */
  class PollForActivityTaskResult
  {
  public:
    AWS_SWF_API PollForActivityTaskResult() = default;
    AWS_SWF_API PollForActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API PollForActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    PollForActivityTaskResult& WithTaskToken(TaskTokenT&& value) { SetTaskToken(std::forward<TaskTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    PollForActivityTaskResult& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline PollForActivityTaskResult& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const { return m_workflowExecution; }
    template<typename WorkflowExecutionT = WorkflowExecution>
    void SetWorkflowExecution(WorkflowExecutionT&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::forward<WorkflowExecutionT>(value); }
    template<typename WorkflowExecutionT = WorkflowExecution>
    PollForActivityTaskResult& WithWorkflowExecution(WorkflowExecutionT&& value) { SetWorkflowExecution(std::forward<WorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this activity task.</p>
     */
    inline const ActivityType& GetActivityType() const { return m_activityType; }
    template<typename ActivityTypeT = ActivityType>
    void SetActivityType(ActivityTypeT&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::forward<ActivityTypeT>(value); }
    template<typename ActivityTypeT = ActivityType>
    PollForActivityTaskResult& WithActivityType(ActivityTypeT&& value) { SetActivityType(std::forward<ActivityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    PollForActivityTaskResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PollForActivityTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet = false;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
