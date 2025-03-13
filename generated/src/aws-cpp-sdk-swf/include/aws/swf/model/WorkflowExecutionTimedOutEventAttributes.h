/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
#include <aws/swf/model/ChildPolicy.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionTimedOut</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionTimedOutEventAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionTimedOutEventAttributes
  {
  public:
    AWS_SWF_API WorkflowExecutionTimedOutEventAttributes() = default;
    AWS_SWF_API WorkflowExecutionTimedOutEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionTimedOutEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of timeout that caused this event.</p>
     */
    inline WorkflowExecutionTimeoutType GetTimeoutType() const { return m_timeoutType; }
    inline bool TimeoutTypeHasBeenSet() const { return m_timeoutTypeHasBeenSet; }
    inline void SetTimeoutType(WorkflowExecutionTimeoutType value) { m_timeoutTypeHasBeenSet = true; m_timeoutType = value; }
    inline WorkflowExecutionTimedOutEventAttributes& WithTimeoutType(WorkflowExecutionTimeoutType value) { SetTimeoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy used for the child workflow executions of this workflow
     * execution.</p> <p>The supported child policies are:</p> <ul> <li> <p>
     * <code>TERMINATE</code> – The child executions are terminated.</p> </li> <li> <p>
     * <code>REQUEST_CANCEL</code> – A request to cancel is attempted for each child
     * execution by recording a <code>WorkflowExecutionCancelRequested</code> event in
     * its history. It is up to the decider to take appropriate actions when it
     * receives an execution history with this event.</p> </li> <li> <p>
     * <code>ABANDON</code> – No action is taken. The child executions continue to
     * run.</p> </li> </ul>
     */
    inline ChildPolicy GetChildPolicy() const { return m_childPolicy; }
    inline bool ChildPolicyHasBeenSet() const { return m_childPolicyHasBeenSet; }
    inline void SetChildPolicy(ChildPolicy value) { m_childPolicyHasBeenSet = true; m_childPolicy = value; }
    inline WorkflowExecutionTimedOutEventAttributes& WithChildPolicy(ChildPolicy value) { SetChildPolicy(value); return *this;}
    ///@}
  private:

    WorkflowExecutionTimeoutType m_timeoutType{WorkflowExecutionTimeoutType::NOT_SET};
    bool m_timeoutTypeHasBeenSet = false;

    ChildPolicy m_childPolicy{ChildPolicy::NOT_SET};
    bool m_childPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
