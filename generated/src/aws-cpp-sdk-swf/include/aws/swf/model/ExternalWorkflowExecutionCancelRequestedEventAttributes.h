/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecution.h>
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
   * <p>Provides the details of the
   * <code>ExternalWorkflowExecutionCancelRequested</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ExternalWorkflowExecutionCancelRequestedEventAttributes">AWS
   * API Reference</a></p>
   */
  class ExternalWorkflowExecutionCancelRequestedEventAttributes
  {
  public:
    AWS_SWF_API ExternalWorkflowExecutionCancelRequestedEventAttributes() = default;
    AWS_SWF_API ExternalWorkflowExecutionCancelRequestedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ExternalWorkflowExecutionCancelRequestedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The external workflow execution to which the cancellation request was
     * delivered.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const { return m_workflowExecution; }
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }
    template<typename WorkflowExecutionT = WorkflowExecution>
    void SetWorkflowExecution(WorkflowExecutionT&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::forward<WorkflowExecutionT>(value); }
    template<typename WorkflowExecutionT = WorkflowExecution>
    ExternalWorkflowExecutionCancelRequestedEventAttributes& WithWorkflowExecution(WorkflowExecutionT&& value) { SetWorkflowExecution(std::forward<WorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this external workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline long long GetInitiatedEventId() const { return m_initiatedEventId; }
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }
    inline ExternalWorkflowExecutionCancelRequestedEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    long long m_initiatedEventId{0};
    bool m_initiatedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
