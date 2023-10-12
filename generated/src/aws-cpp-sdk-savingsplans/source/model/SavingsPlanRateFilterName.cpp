/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRateFilterName.h>
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
      namespace SavingsPlanRateFilterNameMapper
      {

        static constexpr uint32_t region_HASH = ConstExprHashingUtils::HashString("region");
        static constexpr uint32_t instanceType_HASH = ConstExprHashingUtils::HashString("instanceType");
        static constexpr uint32_t productDescription_HASH = ConstExprHashingUtils::HashString("productDescription");
        static constexpr uint32_t tenancy_HASH = ConstExprHashingUtils::HashString("tenancy");
        static constexpr uint32_t productType_HASH = ConstExprHashingUtils::HashString("productType");
        static constexpr uint32_t serviceCode_HASH = ConstExprHashingUtils::HashString("serviceCode");
        static constexpr uint32_t usageType_HASH = ConstExprHashingUtils::HashString("usageType");
        static constexpr uint32_t operation_HASH = ConstExprHashingUtils::HashString("operation");


        SavingsPlanRateFilterName GetSavingsPlanRateFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanRateFilterName::region;
          }
          else if (hashCode == instanceType_HASH)
          {
            return SavingsPlanRateFilterName::instanceType;
          }
          else if (hashCode == productDescription_HASH)
          {
            return SavingsPlanRateFilterName::productDescription;
          }
          else if (hashCode == tenancy_HASH)
          {
            return SavingsPlanRateFilterName::tenancy;
          }
          else if (hashCode == productType_HASH)
          {
            return SavingsPlanRateFilterName::productType;
          }
          else if (hashCode == serviceCode_HASH)
          {
            return SavingsPlanRateFilterName::serviceCode;
          }
          else if (hashCode == usageType_HASH)
          {
            return SavingsPlanRateFilterName::usageType;
          }
          else if (hashCode == operation_HASH)
          {
            return SavingsPlanRateFilterName::operation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateFilterName>(hashCode);
          }

          return SavingsPlanRateFilterName::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateFilterName(SavingsPlanRateFilterName enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateFilterName::NOT_SET:
            return {};
          case SavingsPlanRateFilterName::region:
            return "region";
          case SavingsPlanRateFilterName::instanceType:
            return "instanceType";
          case SavingsPlanRateFilterName::productDescription:
            return "productDescription";
          case SavingsPlanRateFilterName::tenancy:
            return "tenancy";
          case SavingsPlanRateFilterName::productType:
            return "productType";
          case SavingsPlanRateFilterName::serviceCode:
            return "serviceCode";
          case SavingsPlanRateFilterName::usageType:
            return "usageType";
          case SavingsPlanRateFilterName::operation:
            return "operation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateFilterNameMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
