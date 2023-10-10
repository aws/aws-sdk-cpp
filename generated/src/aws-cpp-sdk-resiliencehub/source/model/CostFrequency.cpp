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

        static const int Hourly_HASH = HashingUtils::HashString("Hourly");
        static const int Daily_HASH = HashingUtils::HashString("Daily");
        static const int Monthly_HASH = HashingUtils::HashString("Monthly");
        static const int Yearly_HASH = HashingUtils::HashString("Yearly");


        CostFrequency GetCostFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
