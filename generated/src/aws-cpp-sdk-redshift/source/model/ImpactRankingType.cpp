/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ImpactRankingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ImpactRankingTypeMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        ImpactRankingType GetImpactRankingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return ImpactRankingType::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ImpactRankingType::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return ImpactRankingType::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImpactRankingType>(hashCode);
          }

          return ImpactRankingType::NOT_SET;
        }

        Aws::String GetNameForImpactRankingType(ImpactRankingType enumValue)
        {
          switch(enumValue)
          {
          case ImpactRankingType::NOT_SET:
            return {};
          case ImpactRankingType::HIGH:
            return "HIGH";
          case ImpactRankingType::MEDIUM:
            return "MEDIUM";
          case ImpactRankingType::LOW:
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

      } // namespace ImpactRankingTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
