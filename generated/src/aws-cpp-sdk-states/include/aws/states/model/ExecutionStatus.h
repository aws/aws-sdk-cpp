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
  enum class ExecutionStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    TIMED_OUT,
    ABORTED
  };

namespace ExecutionStatusMapper
{
AWS_SFN_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
