/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ShippingOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ShippingOptionMapper
      {

        static constexpr uint32_t SECOND_DAY_HASH = ConstExprHashingUtils::HashString("SECOND_DAY");
        static constexpr uint32_t NEXT_DAY_HASH = ConstExprHashingUtils::HashString("NEXT_DAY");
        static constexpr uint32_t EXPRESS_HASH = ConstExprHashingUtils::HashString("EXPRESS");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");


        ShippingOption GetShippingOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECOND_DAY_HASH)
          {
            return ShippingOption::SECOND_DAY;
          }
          else if (hashCode == NEXT_DAY_HASH)
          {
            return ShippingOption::NEXT_DAY;
          }
          else if (hashCode == EXPRESS_HASH)
          {
            return ShippingOption::EXPRESS;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ShippingOption::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShippingOption>(hashCode);
          }

          return ShippingOption::NOT_SET;
        }

        Aws::String GetNameForShippingOption(ShippingOption enumValue)
        {
          switch(enumValue)
          {
          case ShippingOption::NOT_SET:
            return {};
          case ShippingOption::SECOND_DAY:
            return "SECOND_DAY";
          case ShippingOption::NEXT_DAY:
            return "NEXT_DAY";
          case ShippingOption::EXPRESS:
            return "EXPRESS";
          case ShippingOption::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShippingOptionMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
