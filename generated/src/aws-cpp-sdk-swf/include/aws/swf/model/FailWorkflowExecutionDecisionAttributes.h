﻿/**
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
   * <p>Provides the details of the <code>FailWorkflowExecution</code> decision.</p>
   * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
   * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
   * doesn't have sufficient permissions to invoke the action, or the parameter
   * values fall outside the specified constraints, the action fails. The associated
   * event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/FailWorkflowExecutionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class FailWorkflowExecutionDecisionAttributes
  {
  public:
    AWS_SWF_API FailWorkflowExecutionDecisionAttributes();
    AWS_SWF_API FailWorkflowExecutionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API FailWorkflowExecutionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A descriptive reason for the failure that may help in diagnostics.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline FailWorkflowExecutionDecisionAttributes& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline FailWorkflowExecutionDecisionAttributes& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline FailWorkflowExecutionDecisionAttributes& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details of the failure.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline FailWorkflowExecutionDecisionAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline FailWorkflowExecutionDecisionAttributes& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline FailWorkflowExecutionDecisionAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
