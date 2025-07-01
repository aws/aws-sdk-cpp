/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/StringAttributeValueBoostingLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace StringAttributeValueBoostingLevelMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int VERY_HIGH_HASH = HashingUtils::HashString("VERY_HIGH");
        static const int ONE_HASH = HashingUtils::HashString("ONE");
        static const int TWO_HASH = HashingUtils::HashString("TWO");
        static const int THREE_HASH = HashingUtils::HashString("THREE");
        static const int FOUR_HASH = HashingUtils::HashString("FOUR");
        static const int FIVE_HASH = HashingUtils::HashString("FIVE");


        StringAttributeValueBoostingLevel GetStringAttributeValueBoostingLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return StringAttributeValueBoostingLevel::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return StringAttributeValueBoostingLevel::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return StringAttributeValueBoostingLevel::HIGH;
          }
          else if (hashCode == VERY_HIGH_HASH)
          {
            return StringAttributeValueBoostingLevel::VERY_HIGH;
          }
          else if (hashCode == ONE_HASH)
          {
            return StringAttributeValueBoostingLevel::ONE;
          }
          else if (hashCode == TWO_HASH)
          {
            return StringAttributeValueBoostingLevel::TWO;
          }
          else if (hashCode == THREE_HASH)
          {
            return StringAttributeValueBoostingLevel::THREE;
          }
          else if (hashCode == FOUR_HASH)
          {
            return StringAttributeValueBoostingLevel::FOUR;
          }
          else if (hashCode == FIVE_HASH)
          {
            return StringAttributeValueBoostingLevel::FIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringAttributeValueBoostingLevel>(hashCode);
          }

          return StringAttributeValueBoostingLevel::NOT_SET;
        }

        Aws::String GetNameForStringAttributeValueBoostingLevel(StringAttributeValueBoostingLevel enumValue)
        {
          switch(enumValue)
          {
          case StringAttributeValueBoostingLevel::NOT_SET:
            return {};
          case StringAttributeValueBoostingLevel::LOW:
            return "LOW";
          case StringAttributeValueBoostingLevel::MEDIUM:
            return "MEDIUM";
          case StringAttributeValueBoostingLevel::HIGH:
            return "HIGH";
          case StringAttributeValueBoostingLevel::VERY_HIGH:
            return "VERY_HIGH";
          case StringAttributeValueBoostingLevel::ONE:
            return "ONE";
          case StringAttributeValueBoostingLevel::TWO:
            return "TWO";
          case StringAttributeValueBoostingLevel::THREE:
            return "THREE";
          case StringAttributeValueBoostingLevel::FOUR:
            return "FOUR";
          case StringAttributeValueBoostingLevel::FIVE:
            return "FIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringAttributeValueBoostingLevelMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
