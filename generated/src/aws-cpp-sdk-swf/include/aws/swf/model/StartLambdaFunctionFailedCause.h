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
  enum class StartLambdaFunctionFailedCause
  {
    NOT_SET,
    ASSUME_ROLE_FAILED
  };

namespace StartLambdaFunctionFailedCauseMapper
{
AWS_SWF_API StartLambdaFunctionFailedCause GetStartLambdaFunctionFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForStartLambdaFunctionFailedCause(StartLambdaFunctionFailedCause value);
} // namespace StartLambdaFunctionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
