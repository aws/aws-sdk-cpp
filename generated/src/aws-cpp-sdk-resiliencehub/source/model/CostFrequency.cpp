/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/CostFrequency.h>
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
      namespace CostFrequencyMapper
      {

        static constexpr uint32_t Hourly_HASH = ConstExprHashingUtils::HashString("Hourly");
        static constexpr uint32_t Daily_HASH = ConstExprHashingUtils::HashString("Daily");
        static constexpr uint32_t Monthly_HASH = ConstExprHashingUtils::HashString("Monthly");
        static constexpr uint32_t Yearly_HASH = ConstExprHashingUtils::HashString("Yearly");


        CostFrequency GetCostFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Hourly_HASH)
          {
            return CostFrequency::Hourly;
          }
          else if (hashCode == Daily_HASH)
          {
            return CostFrequency::Daily;
          }
          else if (hashCode == Monthly_HASH)
          {
            return CostFrequency::Monthly;
          }
          else if (hashCode == Yearly_HASH)
          {
            return CostFrequency::Yearly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostFrequency>(hashCode);
          }

          return CostFrequency::NOT_SET;
        }

        Aws::String GetNameForCostFrequency(CostFrequency enumValue)
        {
          switch(enumValue)
          {
          case CostFrequency::NOT_SET:
            return {};
          case CostFrequency::Hourly:
            return "Hourly";
          case CostFrequency::Daily:
            return "Daily";
          case CostFrequency::Monthly:
            return "Monthly";
          case CostFrequency::Yearly:
            return "Yearly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostFrequencyMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
