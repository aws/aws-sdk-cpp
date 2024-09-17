/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class SpotAllocationStrategy
  {
    NOT_SET,
    lowest_price,
    capacity_optimized,
    price_capacity_optimized
  };

namespace SpotAllocationStrategyMapper
{
AWS_PCS_API SpotAllocationStrategy GetSpotAllocationStrategyForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForSpotAllocationStrategy(SpotAllocationStrategy value);
} // namespace SpotAllocationStrategyMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
