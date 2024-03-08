/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class ExecutionRedriveStatus
  {
    NOT_SET,
    REDRIVABLE,
    NOT_REDRIVABLE,
    REDRIVABLE_BY_MAP_RUN
  };

namespace ExecutionRedriveStatusMapper
{
AWS_SFN_API ExecutionRedriveStatus GetExecutionRedriveStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForExecutionRedriveStatus(ExecutionRedriveStatus value);
} // namespace ExecutionRedriveStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
