/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class IncludeExecutionDataOption
  {
    NOT_SET,
    ALL
  };

namespace IncludeExecutionDataOptionMapper
{
AWS_PIPES_API IncludeExecutionDataOption GetIncludeExecutionDataOptionForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForIncludeExecutionDataOption(IncludeExecutionDataOption value);
} // namespace IncludeExecutionDataOptionMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
