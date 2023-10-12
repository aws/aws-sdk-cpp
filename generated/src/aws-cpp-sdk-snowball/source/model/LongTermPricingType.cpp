/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/LongTermPricingType.h>
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
      namespace LongTermPricingTypeMapper
      {

        static constexpr uint32_t OneYear_HASH = ConstExprHashingUtils::HashString("OneYear");
        static constexpr uint32_t ThreeYear_HASH = ConstExprHashingUtils::HashString("ThreeYear");
        static constexpr uint32_t OneMonth_HASH = ConstExprHashingUtils::HashString("OneMonth");


        LongTermPricingType GetLongTermPricingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneYear_HASH)
          {
            return LongTermPricingType::OneYear;
          }
          else if (hashCode == ThreeYear_HASH)
          {
            return LongTermPricingType::ThreeYear;
          }
          else if (hashCode == OneMonth_HASH)
          {
            return LongTermPricingType::OneMonth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LongTermPricingType>(hashCode);
          }

          return LongTermPricingType::NOT_SET;
        }

        Aws::String GetNameForLongTermPricingType(LongTermPricingType enumValue)
        {
          switch(enumValue)
          {
          case LongTermPricingType::NOT_SET:
            return {};
          case LongTermPricingType::OneYear:
            return "OneYear";
          case LongTermPricingType::ThreeYear:
            return "ThreeYear";
          case LongTermPricingType::OneMonth:
            return "OneMonth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LongTermPricingTypeMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
