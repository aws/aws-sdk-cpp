/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class OutputStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OutputStatusMapper
{
AWS_MEDIACONNECT_API OutputStatus GetOutputStatusForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForOutputStatus(OutputStatus value);
} // namespace OutputStatusMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
