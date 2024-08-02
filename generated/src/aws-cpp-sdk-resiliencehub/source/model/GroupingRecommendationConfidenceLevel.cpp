/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingRecommendationConfidenceLevel.h>
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
      namespace GroupingRecommendationConfidenceLevelMapper
      {

        static const int High_HASH = HashingUtils::HashString("High");
        static const int Medium_HASH = HashingUtils::HashString("Medium");


        GroupingRecommendationConfidenceLevel GetGroupingRecommendationConfidenceLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == High_HASH)
          {
            return GroupingRecommendationConfidenceLevel::High;
          }
          else if (hashCode == Medium_HASH)
          {
            return GroupingRecommendationConfidenceLevel::Medium;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingRecommendationConfidenceLevel>(hashCode);
          }

          return GroupingRecommendationConfidenceLevel::NOT_SET;
        }

        Aws::String GetNameForGroupingRecommendationConfidenceLevel(GroupingRecommendationConfidenceLevel enumValue)
        {
          switch(enumValue)
          {
          case GroupingRecommendationConfidenceLevel::NOT_SET:
            return {};
          case GroupingRecommendationConfidenceLevel::High:
            return "High";
          case GroupingRecommendationConfidenceLevel::Medium:
            return "Medium";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingRecommendationConfidenceLevelMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
