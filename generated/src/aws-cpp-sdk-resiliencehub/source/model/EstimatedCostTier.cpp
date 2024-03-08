/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/EstimatedCostTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace EstimatedCostTierMapper
      {

        static const int L1_HASH = HashingUtils::HashString("L1");
        static const int L2_HASH = HashingUtils::HashString("L2");
        static const int L3_HASH = HashingUtils::HashString("L3");
        static const int L4_HASH = HashingUtils::HashString("L4");


        EstimatedCostTier GetEstimatedCostTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == L1_HASH)
          {
            return EstimatedCostTier::L1;
          }
          else if (hashCode == L2_HASH)
          {
            return EstimatedCostTier::L2;
          }
          else if (hashCode == L3_HASH)
          {
            return EstimatedCostTier::L3;
          }
          else if (hashCode == L4_HASH)
          {
            return EstimatedCostTier::L4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EstimatedCostTier>(hashCode);
          }

          return EstimatedCostTier::NOT_SET;
        }

        Aws::String GetNameForEstimatedCostTier(EstimatedCostTier enumValue)
        {
          switch(enumValue)
          {
          case EstimatedCostTier::NOT_SET:
            return {};
          case EstimatedCostTier::L1:
            return "L1";
          case EstimatedCostTier::L2:
            return "L2";
          case EstimatedCostTier::L3:
            return "L3";
          case EstimatedCostTier::L4:
            return "L4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EstimatedCostTierMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
