/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRateUnit.h>
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
      namespace SavingsPlanRateUnitMapper
      {

        static const int Hrs_HASH = HashingUtils::HashString("Hrs");
        static const int Lambda_GB_Second_HASH = HashingUtils::HashString("Lambda-GB-Second");
        static const int Request_HASH = HashingUtils::HashString("Request");


        SavingsPlanRateUnit GetSavingsPlanRateUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Hrs_HASH)
          {
            return SavingsPlanRateUnit::Hrs;
          }
          else if (hashCode == Lambda_GB_Second_HASH)
          {
            return SavingsPlanRateUnit::Lambda_GB_Second;
          }
          else if (hashCode == Request_HASH)
          {
            return SavingsPlanRateUnit::Request;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateUnit>(hashCode);
          }

          return SavingsPlanRateUnit::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateUnit(SavingsPlanRateUnit enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateUnit::Hrs:
            return "Hrs";
          case SavingsPlanRateUnit::Lambda_GB_Second:
            return "Lambda-GB-Second";
          case SavingsPlanRateUnit::Request:
            return "Request";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateUnitMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
