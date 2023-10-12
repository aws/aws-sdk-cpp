/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationComplianceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace RecommendationComplianceStatusMapper
      {

        static constexpr uint32_t BreachedUnattainable_HASH = ConstExprHashingUtils::HashString("BreachedUnattainable");
        static constexpr uint32_t BreachedCanMeet_HASH = ConstExprHashingUtils::HashString("BreachedCanMeet");
        static constexpr uint32_t MetCanImprove_HASH = ConstExprHashingUtils::HashString("MetCanImprove");


        RecommendationComplianceStatus GetRecommendationComplianceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BreachedUnattainable_HASH)
          {
            return RecommendationComplianceStatus::BreachedUnattainable;
          }
          else if (hashCode == BreachedCanMeet_HASH)
          {
            return RecommendationComplianceStatus::BreachedCanMeet;
          }
          else if (hashCode == MetCanImprove_HASH)
          {
            return RecommendationComplianceStatus::MetCanImprove;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationComplianceStatus>(hashCode);
          }

          return RecommendationComplianceStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationComplianceStatus(RecommendationComplianceStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationComplianceStatus::NOT_SET:
            return {};
          case RecommendationComplianceStatus::BreachedUnattainable:
            return "BreachedUnattainable";
          case RecommendationComplianceStatus::BreachedCanMeet:
            return "BreachedCanMeet";
          case RecommendationComplianceStatus::MetCanImprove:
            return "MetCanImprove";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationComplianceStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
