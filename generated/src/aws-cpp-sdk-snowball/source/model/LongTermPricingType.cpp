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

        static const int OneYear_HASH = HashingUtils::HashString("OneYear");
        static const int ThreeYear_HASH = HashingUtils::HashString("ThreeYear");
        static const int OneMonth_HASH = HashingUtils::HashString("OneMonth");


        LongTermPricingType GetLongTermPricingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
