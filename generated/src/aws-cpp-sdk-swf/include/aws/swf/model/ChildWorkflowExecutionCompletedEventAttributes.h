/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowType.h>
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
   * <p>Provides the details of the <code>ChildWorkflowExecutionCompleted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ChildWorkflowExecutionCompletedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ChildWorkflowExecutionCompletedEventAttributes
  {
  public:
    AWS_SWF_API ChildWorkflowExecutionCompletedEventAttributes();
    AWS_SWF_API ChildWorkflowExecutionCompletedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ChildWorkflowExecutionCompletedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The child workflow execution that was completed.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = value; }
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::move(value); }
    inline ChildWorkflowExecutionCompletedEventAttributes& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}
    inline ChildWorkflowExecutionCompletedEventAttributes& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline ChildWorkflowExecutionCompletedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline ChildWorkflowExecutionCompletedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the child workflow execution.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }
    inline ChildWorkflowExecutionCompletedEventAttributes& WithResult(const Aws::String& value) { SetResult(value); return *this;}
    inline ChildWorkflowExecutionCompletedEventAttributes& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}
    inline ChildWorkflowExecutionCompletedEventAttributes& WithResult(const char* value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetInitiatedEventId() const{ return m_initiatedEventId; }
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }
    inline ChildWorkflowExecutionCompletedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline ChildWorkflowExecutionCompletedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
