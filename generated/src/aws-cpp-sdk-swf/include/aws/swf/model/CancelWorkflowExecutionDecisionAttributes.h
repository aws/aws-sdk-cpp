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
   * <p>Provides the details of the <code>CancelWorkflowExecution</code>
   * decision.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
   * control this decision's access to Amazon SWF resources as follows:</p> <ul> <li>
   * <p>Use a <code>Resource</code> element with the domain name to limit the action
   * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
   * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
   * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
   * the caller doesn't have sufficient permissions to invoke the action, or the
   * parameter values fall outside the specified constraints, the action fails. The
   * associated event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CancelWorkflowExecutionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class CancelWorkflowExecutionDecisionAttributes
  {
  public:
    AWS_SWF_API CancelWorkflowExecutionDecisionAttributes() = default;
    AWS_SWF_API CancelWorkflowExecutionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API CancelWorkflowExecutionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Details of the cancellation.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    CancelWorkflowExecutionDecisionAttributes& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
