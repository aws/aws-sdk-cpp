/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SeverityRating.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace SeverityRatingMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");


        SeverityRating GetSeverityRatingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return SeverityRating::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return SeverityRating::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return SeverityRating::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return SeverityRating::CRITICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SeverityRating>(hashCode);
          }

          return SeverityRating::NOT_SET;
        }

        Aws::String GetNameForSeverityRating(SeverityRating enumValue)
        {
          switch(enumValue)
          {
          case SeverityRating::NOT_SET:
            return {};
          case SeverityRating::LOW:
            return "LOW";
          case SeverityRating::MEDIUM:
            return "MEDIUM";
          case SeverityRating::HIGH:
            return "HIGH";
          case SeverityRating::CRITICAL:
            return "CRITICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeverityRatingMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
