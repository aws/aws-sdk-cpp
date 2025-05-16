/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Neptune
{
namespace Model
{
  enum class FailoverStatus
  {
    NOT_SET,
    pending,
    failing_over,
    cancelling
  };

namespace FailoverStatusMapper
{
AWS_NEPTUNE_API FailoverStatus GetFailoverStatusForName(const Aws::String& name);

AWS_NEPTUNE_API Aws::String GetNameForFailoverStatus(FailoverStatus value);
} // namespace FailoverStatusMapper
} // namespace Model
} // namespace Neptune
} // namespace Aws
