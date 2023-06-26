/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class ShippingLabelStatus
  {
    NOT_SET,
    InProgress,
    TimedOut,
    Succeeded,
    Failed
  };

namespace ShippingLabelStatusMapper
{
AWS_SNOWBALL_API ShippingLabelStatus GetShippingLabelStatusForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForShippingLabelStatus(ShippingLabelStatus value);
} // namespace ShippingLabelStatusMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
