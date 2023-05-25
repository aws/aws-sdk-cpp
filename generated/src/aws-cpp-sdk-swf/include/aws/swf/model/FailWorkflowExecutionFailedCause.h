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
  enum class FailWorkflowExecutionFailedCause
  {
    NOT_SET,
    UNHANDLED_DECISION,
    OPERATION_NOT_PERMITTED
  };

namespace FailWorkflowExecutionFailedCauseMapper
{
AWS_SWF_API FailWorkflowExecutionFailedCause GetFailWorkflowExecutionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForFailWorkflowExecutionFailedCause(FailWorkflowExecutionFailedCause value);
} // namespace FailWorkflowExecutionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
