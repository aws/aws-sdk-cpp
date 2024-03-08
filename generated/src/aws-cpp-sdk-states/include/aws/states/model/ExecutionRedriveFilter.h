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
  enum class ExecutionRedriveFilter
  {
    NOT_SET,
    REDRIVEN,
    NOT_REDRIVEN
  };

namespace ExecutionRedriveFilterMapper
{
AWS_SFN_API ExecutionRedriveFilter GetExecutionRedriveFilterForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForExecutionRedriveFilter(ExecutionRedriveFilter value);
} // namespace ExecutionRedriveFilterMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
