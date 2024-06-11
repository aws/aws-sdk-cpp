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
    AWS_SWF_API PollForActivityTaskResult();
    AWS_SWF_API PollForActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API PollForActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }
    inline void SetTaskToken(const Aws::String& value) { m_taskToken = value; }
    inline void SetTaskToken(Aws::String&& value) { m_taskToken = std::move(value); }
    inline void SetTaskToken(const char* value) { m_taskToken.assign(value); }
    inline PollForActivityTaskResult& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}
    inline PollForActivityTaskResult& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}
    inline PollForActivityTaskResult& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }
    inline void SetActivityId(const Aws::String& value) { m_activityId = value; }
    inline void SetActivityId(Aws::String&& value) { m_activityId = std::move(value); }
    inline void SetActivityId(const char* value) { m_activityId.assign(value); }
    inline PollForActivityTaskResult& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}
    inline PollForActivityTaskResult& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}
    inline PollForActivityTaskResult& WithActivityId(const char* value) { SetActivityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }
    inline void SetStartedEventId(long long value) { m_startedEventId = value; }
    inline PollForActivityTaskResult& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecution = value; }
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecution = std::move(value); }
    inline PollForActivityTaskResult& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}
    inline PollForActivityTaskResult& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this activity task.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }
    inline void SetActivityType(const ActivityType& value) { m_activityType = value; }
    inline void SetActivityType(ActivityType&& value) { m_activityType = std::move(value); }
    inline PollForActivityTaskResult& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}
    inline PollForActivityTaskResult& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline void SetInput(const Aws::String& value) { m_input = value; }
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }
    inline void SetInput(const char* value) { m_input.assign(value); }
    inline PollForActivityTaskResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline PollForActivityTaskResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline PollForActivityTaskResult& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PollForActivityTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PollForActivityTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PollForActivityTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskToken;

    Aws::String m_activityId;

    long long m_startedEventId;

    WorkflowExecution m_workflowExecution;

    ActivityType m_activityType;

    Aws::String m_input;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
