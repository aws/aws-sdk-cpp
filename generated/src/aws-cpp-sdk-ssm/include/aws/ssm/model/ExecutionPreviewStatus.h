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
  enum class ExecutionPreviewStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Success,
    Failed
  };

namespace ExecutionPreviewStatusMapper
{
AWS_SSM_API ExecutionPreviewStatus GetExecutionPreviewStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForExecutionPreviewStatus(ExecutionPreviewStatus value);
} // namespace ExecutionPreviewStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
