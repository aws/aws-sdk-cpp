﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowExecutionCancelRequestedCause.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionCancelRequested</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionCancelRequestedEventAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionCancelRequestedEventAttributes
  {
  public:
    AWS_SWF_API WorkflowExecutionCancelRequestedEventAttributes() = default;
    AWS_SWF_API WorkflowExecutionCancelRequestedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionCancelRequestedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The external workflow execution for which the cancellation was requested.</p>
     */
    inline const WorkflowExecution& GetExternalWorkflowExecution() const { return m_externalWorkflowExecution; }
    inline bool ExternalWorkflowExecutionHasBeenSet() const { return m_externalWorkflowExecutionHasBeenSet; }
    template<typename ExternalWorkflowExecutionT = WorkflowExecution>
    void SetExternalWorkflowExecution(ExternalWorkflowExecutionT&& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = std::forward<ExternalWorkflowExecutionT>(value); }
    template<typename ExternalWorkflowExecutionT = WorkflowExecution>
    WorkflowExecutionCancelRequestedEventAttributes& WithExternalWorkflowExecution(ExternalWorkflowExecutionT&& value) { SetExternalWorkflowExecution(std::forward<ExternalWorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>RequestCancelExternalWorkflowExecutionInitiated</code>
     * event corresponding to the <code>RequestCancelExternalWorkflowExecution</code>
     * decision to cancel this workflow execution.The source event with this ID can be
     * found in the history of the source workflow execution. This information can be
     * useful for diagnosing problems by tracing back the chain of events leading up to
     * this event.</p>
     */
    inline long long GetExternalInitiatedEventId() const { return m_externalInitiatedEventId; }
    inline bool ExternalInitiatedEventIdHasBeenSet() const { return m_externalInitiatedEventIdHasBeenSet; }
    inline void SetExternalInitiatedEventId(long long value) { m_externalInitiatedEventIdHasBeenSet = true; m_externalInitiatedEventId = value; }
    inline WorkflowExecutionCancelRequestedEventAttributes& WithExternalInitiatedEventId(long long value) { SetExternalInitiatedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, indicates that the request to cancel the workflow execution was
     * automatically generated, and specifies the cause. This happens if the parent
     * workflow execution times out or is terminated, and the child policy is set to
     * cancel child executions.</p>
     */
    inline WorkflowExecutionCancelRequestedCause GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(WorkflowExecutionCancelRequestedCause value) { m_causeHasBeenSet = true; m_cause = value; }
    inline WorkflowExecutionCancelRequestedEventAttributes& WithCause(WorkflowExecutionCancelRequestedCause value) { SetCause(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_externalWorkflowExecution;
    bool m_externalWorkflowExecutionHasBeenSet = false;

    long long m_externalInitiatedEventId{0};
    bool m_externalInitiatedEventIdHasBeenSet = false;

    WorkflowExecutionCancelRequestedCause m_cause{WorkflowExecutionCancelRequestedCause::NOT_SET};
    bool m_causeHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
