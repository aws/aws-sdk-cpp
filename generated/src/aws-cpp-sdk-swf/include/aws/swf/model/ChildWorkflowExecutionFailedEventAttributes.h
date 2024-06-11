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
   * <p>Provides the details of the <code>ChildWorkflowExecutionFailed</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ChildWorkflowExecutionFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ChildWorkflowExecutionFailedEventAttributes
  {
  public:
    AWS_SWF_API ChildWorkflowExecutionFailedEventAttributes();
    AWS_SWF_API ChildWorkflowExecutionFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ChildWorkflowExecutionFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The child workflow execution that failed.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = value; }
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::move(value); }
    inline ChildWorkflowExecutionFailedEventAttributes& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }
    inline ChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the failure (if provided).</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ChildWorkflowExecutionFailedEventAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the failure (if provided).</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline ChildWorkflowExecutionFailedEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline ChildWorkflowExecutionFailedEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}
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
    inline ChildWorkflowExecutionFailedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}
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
    inline ChildWorkflowExecutionFailedEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    long long m_initiatedEventId;
    bool m_initiatedEventIdHasBeenSet = false;

    long long m_startedEventId;
    bool m_startedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
