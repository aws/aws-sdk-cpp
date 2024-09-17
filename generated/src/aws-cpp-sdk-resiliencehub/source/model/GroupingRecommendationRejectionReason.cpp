/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingRecommendationRejectionReason.h>
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
      namespace GroupingRecommendationRejectionReasonMapper
      {

        static const int DistinctBusinessPurpose_HASH = HashingUtils::HashString("DistinctBusinessPurpose");
        static const int SeparateDataConcern_HASH = HashingUtils::HashString("SeparateDataConcern");
        static const int DistinctUserGroupHandling_HASH = HashingUtils::HashString("DistinctUserGroupHandling");
        static const int Other_HASH = HashingUtils::HashString("Other");


        GroupingRecommendationRejectionReason GetGroupingRecommendationRejectionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DistinctBusinessPurpose_HASH)
          {
            return GroupingRecommendationRejectionReason::DistinctBusinessPurpose;
          }
          else if (hashCode == SeparateDataConcern_HASH)
          {
            return GroupingRecommendationRejectionReason::SeparateDataConcern;
          }
          else if (hashCode == DistinctUserGroupHandling_HASH)
          {
            return GroupingRecommendationRejectionReason::DistinctUserGroupHandling;
          }
          else if (hashCode == Other_HASH)
          {
            return GroupingRecommendationRejectionReason::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingRecommendationRejectionReason>(hashCode);
          }

          return GroupingRecommendationRejectionReason::NOT_SET;
        }

        Aws::String GetNameForGroupingRecommendationRejectionReason(GroupingRecommendationRejectionReason enumValue)
        {
          switch(enumValue)
          {
          case GroupingRecommendationRejectionReason::NOT_SET:
            return {};
          case GroupingRecommendationRejectionReason::DistinctBusinessPurpose:
            return "DistinctBusinessPurpose";
          case GroupingRecommendationRejectionReason::SeparateDataConcern:
            return "SeparateDataConcern";
          case GroupingRecommendationRejectionReason::DistinctUserGroupHandling:
            return "DistinctUserGroupHandling";
          case GroupingRecommendationRejectionReason::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingRecommendationRejectionReasonMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
