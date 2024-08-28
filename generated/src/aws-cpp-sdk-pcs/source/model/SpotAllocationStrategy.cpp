/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/SpotAllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace SpotAllocationStrategyMapper
      {

        static const int lowest_price_HASH = HashingUtils::HashString("lowest-price");
        static const int capacity_optimized_HASH = HashingUtils::HashString("capacity-optimized");
        static const int price_capacity_optimized_HASH = HashingUtils::HashString("price-capacity-optimized");


        SpotAllocationStrategy GetSpotAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowest_price_HASH)
          {
            return SpotAllocationStrategy::lowest_price;
          }
          else if (hashCode == capacity_optimized_HASH)
          {
            return SpotAllocationStrategy::capacity_optimized;
          }
          else if (hashCode == price_capacity_optimized_HASH)
          {
            return SpotAllocationStrategy::price_capacity_optimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotAllocationStrategy>(hashCode);
          }

          return SpotAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForSpotAllocationStrategy(SpotAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case SpotAllocationStrategy::NOT_SET:
            return {};
          case SpotAllocationStrategy::lowest_price:
            return "lowest-price";
          case SpotAllocationStrategy::capacity_optimized:
            return "capacity-optimized";
          case SpotAllocationStrategy::price_capacity_optimized:
            return "price-capacity-optimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotAllocationStrategyMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
