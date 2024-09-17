/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingRecommendationStatusType.h>
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
      namespace GroupingRecommendationStatusTypeMapper
      {

        static const int Accepted_HASH = HashingUtils::HashString("Accepted");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int PendingDecision_HASH = HashingUtils::HashString("PendingDecision");


        GroupingRecommendationStatusType GetGroupingRecommendationStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accepted_HASH)
          {
            return GroupingRecommendationStatusType::Accepted;
          }
          else if (hashCode == Rejected_HASH)
          {
            return GroupingRecommendationStatusType::Rejected;
          }
          else if (hashCode == PendingDecision_HASH)
          {
            return GroupingRecommendationStatusType::PendingDecision;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupingRecommendationStatusType>(hashCode);
          }

          return GroupingRecommendationStatusType::NOT_SET;
        }

        Aws::String GetNameForGroupingRecommendationStatusType(GroupingRecommendationStatusType enumValue)
        {
          switch(enumValue)
          {
          case GroupingRecommendationStatusType::NOT_SET:
            return {};
          case GroupingRecommendationStatusType::Accepted:
            return "Accepted";
          case GroupingRecommendationStatusType::Rejected:
            return "Rejected";
          case GroupingRecommendationStatusType::PendingDecision:
            return "PendingDecision";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupingRecommendationStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
