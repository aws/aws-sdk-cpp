/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanOfferingPropertyKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanOfferingPropertyKeyMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceFamily_HASH = HashingUtils::HashString("instanceFamily");


        SavingsPlanOfferingPropertyKey GetSavingsPlanOfferingPropertyKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanOfferingPropertyKey::region;
          }
          else if (hashCode == instanceFamily_HASH)
          {
            return SavingsPlanOfferingPropertyKey::instanceFamily;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanOfferingPropertyKey>(hashCode);
          }

          return SavingsPlanOfferingPropertyKey::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanOfferingPropertyKey(SavingsPlanOfferingPropertyKey enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanOfferingPropertyKey::region:
            return "region";
          case SavingsPlanOfferingPropertyKey::instanceFamily:
            return "instanceFamily";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanOfferingPropertyKeyMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
