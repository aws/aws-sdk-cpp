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
  enum class ScheduleLambdaFunctionFailedCause
  {
    NOT_SET,
    ID_ALREADY_IN_USE,
    OPEN_LAMBDA_FUNCTIONS_LIMIT_EXCEEDED,
    LAMBDA_FUNCTION_CREATION_RATE_EXCEEDED,
    LAMBDA_SERVICE_NOT_AVAILABLE_IN_REGION
  };

namespace ScheduleLambdaFunctionFailedCauseMapper
{
AWS_SWF_API ScheduleLambdaFunctionFailedCause GetScheduleLambdaFunctionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForScheduleLambdaFunctionFailedCause(ScheduleLambdaFunctionFailedCause value);
} // namespace ScheduleLambdaFunctionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
