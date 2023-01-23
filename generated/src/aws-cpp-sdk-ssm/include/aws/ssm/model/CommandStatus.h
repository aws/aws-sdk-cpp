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
  enum class CommandStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Success,
    Cancelled,
    Failed,
    TimedOut,
    Cancelling
  };

namespace CommandStatusMapper
{
AWS_SSM_API CommandStatus GetCommandStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCommandStatus(CommandStatus value);
} // namespace CommandStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
