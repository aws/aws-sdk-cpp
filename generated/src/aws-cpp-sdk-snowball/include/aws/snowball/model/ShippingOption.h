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
  enum class ShippingOption
  {
    NOT_SET,
    SECOND_DAY,
    NEXT_DAY,
    EXPRESS,
    STANDARD
  };

namespace ShippingOptionMapper
{
AWS_SNOWBALL_API ShippingOption GetShippingOptionForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForShippingOption(ShippingOption value);
} // namespace ShippingOptionMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
