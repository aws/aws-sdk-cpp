﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
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
   * <p>Provides the details of the <code>ChildWorkflowExecutionTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ChildWorkflowExecutionTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class ChildWorkflowExecutionTimedOutEventAttributes
  {
  public:
    AWS_SWF_API ChildWorkflowExecutionTimedOutEventAttributes() = default;
    AWS_SWF_API ChildWorkflowExecutionTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ChildWorkflowExecutionTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The child workflow execution that timed out.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const { return m_workflowExecution; }
    inline bool WorkflowExecutionHasBeenSet() const { return m_workflowExecutionHasBeenSet; }
    template<typename WorkflowExecutionT = WorkflowExecution>
    void SetWorkflowExecution(WorkflowExecutionT&& value) { m_workflowExecutionHasBeenSet = true; m_workflowExecution = std::forward<WorkflowExecutionT>(value); }
    template<typename WorkflowExecutionT = WorkflowExecution>
    ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowExecution(WorkflowExecutionT&& value) { SetWorkflowExecution(std::forward<WorkflowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the child workflow execution.</p>
     */
    inline const WorkflowType& GetWorkflowType() const { return m_workflowType; }
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }
    template<typename WorkflowTypeT = WorkflowType>
    void SetWorkflowType(WorkflowTypeT&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::forward<WorkflowTypeT>(value); }
    template<typename WorkflowTypeT = WorkflowType>
    ChildWorkflowExecutionTimedOutEventAttributes& WithWorkflowType(WorkflowTypeT&& value) { SetWorkflowType(std::forward<WorkflowTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the timeout that caused the child workflow execution to time
     * out.</p>
     */
    inline WorkflowExecutionTimeoutType GetTimeoutType() const { return m_timeoutType; }
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }
    inline void SetTimeoutType(WorkflowExecutionTimeoutType value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithTimeoutType(WorkflowExecutionTimeoutType value) { SetTimeoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>StartChildWorkflowExecutionInitiated</code> event
     * corresponding to the <code>StartChildWorkflowExecution</code> <a>Decision</a> to
     * start this child workflow execution. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetInitiatedEventId() const { return m_initiatedEventId; }
    inline bool InitiatedEventIdHasBeenSet() const { return m_initiatedEventIdHasBeenSet; }
    inline void SetInitiatedEventId(long long value) { m_initiatedEventIdHasBeenSet = true; m_initiatedEventId = value; }
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithInitiatedEventId(long long value) { SetInitiatedEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>ChildWorkflowExecutionStarted</code> event recorded when
     * this child workflow execution was started. This information can be useful for
     * diagnosing problems by tracing back the chain of events leading up to this
     * event.</p>
     */
    inline long long GetStartedEventId() const { return m_startedEventId; }
    inline bool StartedEventIdHasBeenSet() const { return m_startedEventIdHasBeenSet; }
    inline void SetStartedEventId(long long value) { m_startedEventIdHasBeenSet = true; m_startedEventId = value; }
    inline ChildWorkflowExecutionTimedOutEventAttributes& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}
    ///@}
  private:

    WorkflowExecution m_workflowExecution;
    bool m_workflowExecutionHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;

    WorkflowExecutionTimeoutType m_timeoutType{WorkflowExecutionTimeoutType::NOT_SET};
    bool m_timeoutTypeHasBeenSet = false;

    long long m_initiatedEventId{0};
    bool m_initiatedEventIdHasBeenSet = false;

    long long m_startedEventId{0};
    bool m_startedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
