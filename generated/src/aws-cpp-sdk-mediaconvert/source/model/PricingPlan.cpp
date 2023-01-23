/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/PricingPlan.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace PricingPlanMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");


        PricingPlan GetPricingPlanForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return PricingPlan::ON_DEMAND;
          }
          else if (hashCode == RESERVED_HASH)
          {
            return PricingPlan::RESERVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingPlan>(hashCode);
          }

          return PricingPlan::NOT_SET;
        }

        Aws::String GetNameForPricingPlan(PricingPlan enumValue)
        {
          switch(enumValue)
          {
          case PricingPlan::ON_DEMAND:
            return "ON_DEMAND";
          case PricingPlan::RESERVED:
            return "RESERVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingPlanMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
