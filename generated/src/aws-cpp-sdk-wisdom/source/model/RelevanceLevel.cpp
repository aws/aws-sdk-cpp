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

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        RelevanceLevel GetRelevanceLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
