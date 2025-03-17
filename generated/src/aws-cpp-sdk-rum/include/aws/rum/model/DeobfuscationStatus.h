/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{
  enum class DeobfuscationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DeobfuscationStatusMapper
{
AWS_CLOUDWATCHRUM_API DeobfuscationStatus GetDeobfuscationStatusForName(const Aws::String& name);

AWS_CLOUDWATCHRUM_API Aws::String GetNameForDeobfuscationStatus(DeobfuscationStatus value);
} // namespace DeobfuscationStatusMapper
} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
