/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionCanceled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionCanceledEventAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionCanceledEventAttributes
  {
  public:
    AWS_SWF_API WorkflowExecutionCanceledEventAttributes();
    AWS_SWF_API WorkflowExecutionCanceledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionCanceledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the cancellation.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details of the cancellation.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>The details of the cancellation.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the cancellation.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>The details of the cancellation.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details of the cancellation.</p>
     */
    inline WorkflowExecutionCanceledEventAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the cancellation.</p>
     */
    inline WorkflowExecutionCanceledEventAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>The details of the cancellation.</p>
     */
    inline WorkflowExecutionCanceledEventAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CancelWorkflowExecution</code> decision
     * for this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CancelWorkflowExecution</code> decision
     * for this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline bool DecisionTaskCompletedEventIdHasBeenSet() const { return m_decisionTaskCompletedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CancelWorkflowExecution</code> decision
     * for this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>CancelWorkflowExecution</code> decision
     * for this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline WorkflowExecutionCanceledEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
