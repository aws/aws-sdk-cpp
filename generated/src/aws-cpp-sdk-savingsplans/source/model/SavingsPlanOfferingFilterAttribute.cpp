/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanOfferingFilterAttribute.h>
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
      namespace SavingsPlanOfferingFilterAttributeMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceFamily_HASH = HashingUtils::HashString("instanceFamily");


        SavingsPlanOfferingFilterAttribute GetSavingsPlanOfferingFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanOfferingFilterAttribute::region;
          }
          else if (hashCode == instanceFamily_HASH)
          {
            return SavingsPlanOfferingFilterAttribute::instanceFamily;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanOfferingFilterAttribute>(hashCode);
          }

          return SavingsPlanOfferingFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanOfferingFilterAttribute(SavingsPlanOfferingFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanOfferingFilterAttribute::region:
            return "region";
          case SavingsPlanOfferingFilterAttribute::instanceFamily:
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

      } // namespace SavingsPlanOfferingFilterAttributeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
