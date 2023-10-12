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

        static constexpr uint32_t Hrs_HASH = ConstExprHashingUtils::HashString("Hrs");
        static constexpr uint32_t Lambda_GB_Second_HASH = ConstExprHashingUtils::HashString("Lambda-GB-Second");
        static constexpr uint32_t Request_HASH = ConstExprHashingUtils::HashString("Request");


        SavingsPlanRateUnit GetSavingsPlanRateUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SavingsPlanRateUnit::NOT_SET:
            return {};
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
