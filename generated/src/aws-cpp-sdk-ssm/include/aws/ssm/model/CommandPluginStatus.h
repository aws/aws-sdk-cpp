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
  enum class CommandPluginStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Success,
    TimedOut,
    Cancelled,
    Failed
  };

namespace CommandPluginStatusMapper
{
AWS_SSM_API CommandPluginStatus GetCommandPluginStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCommandPluginStatus(CommandPluginStatus value);
} // namespace CommandPluginStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
