/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RelevanceLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace RelevanceLevelMapper
      {

        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");


        RelevanceLevel GetRelevanceLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return RelevanceLevel::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return RelevanceLevel::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return RelevanceLevel::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelevanceLevel>(hashCode);
          }

          return RelevanceLevel::NOT_SET;
        }

        Aws::String GetNameForRelevanceLevel(RelevanceLevel enumValue)
        {
          switch(enumValue)
          {
          case RelevanceLevel::NOT_SET:
            return {};
          case RelevanceLevel::HIGH:
            return "HIGH";
          case RelevanceLevel::MEDIUM:
            return "MEDIUM";
          case RelevanceLevel::LOW:
            return "LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelevanceLevelMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
