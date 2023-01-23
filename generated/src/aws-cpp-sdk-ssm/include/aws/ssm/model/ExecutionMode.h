/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ExecutionMode
  {
    NOT_SET,
    Auto,
    Interactive
  };

namespace ExecutionModeMapper
{
AWS_SSM_API ExecutionMode GetExecutionModeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForExecutionMode(ExecutionMode value);
} // namespace ExecutionModeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
