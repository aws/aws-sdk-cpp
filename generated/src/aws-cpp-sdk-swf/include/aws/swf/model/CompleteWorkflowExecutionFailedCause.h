/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class CompleteWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNHANDLED_DECISION,
    OPERATION_NOT_PERMITTED
  };

namespace CompleteWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API CompleteWorkflowExecutionFailedCause GetCompleteWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForCompleteWorkflowExecutionFailedCause(CompleteWorkflowExecutionFailedCause value);
} // namespace CompleteWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
