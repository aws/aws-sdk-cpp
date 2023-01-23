/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
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
      namespace SavingsPlanPaymentOptionMapper
      {

        static const int All_Upfront_HASH = HashingUtils::HashString("All Upfront");
        static const int Partial_Upfront_HASH = HashingUtils::HashString("Partial Upfront");
        static const int No_Upfront_HASH = HashingUtils::HashString("No Upfront");


        SavingsPlanPaymentOption GetSavingsPlanPaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_Upfront_HASH)
          {
            return SavingsPlanPaymentOption::All_Upfront;
          }
          else if (hashCode == Partial_Upfront_HASH)
          {
            return SavingsPlanPaymentOption::Partial_Upfront;
          }
          else if (hashCode == No_Upfront_HASH)
          {
            return SavingsPlanPaymentOption::No_Upfront;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanPaymentOption>(hashCode);
          }

          return SavingsPlanPaymentOption::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanPaymentOption(SavingsPlanPaymentOption enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanPaymentOption::All_Upfront:
            return "All Upfront";
          case SavingsPlanPaymentOption::Partial_Upfront:
            return "Partial Upfront";
          case SavingsPlanPaymentOption::No_Upfront:
            return "No Upfront";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanPaymentOptionMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
