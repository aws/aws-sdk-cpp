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
  enum class LongTermPricingType
  {
    NOT_SET,
    OneYear,
    ThreeYear,
    OneMonth
  };

namespace LongTermPricingTypeMapper
{
AWS_SNOWBALL_API LongTermPricingType GetLongTermPricingTypeForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForLongTermPricingType(LongTermPricingType value);
} // namespace LongTermPricingTypeMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
