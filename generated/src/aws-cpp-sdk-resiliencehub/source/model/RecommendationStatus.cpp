/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationStatus.h>
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
      namespace RecommendationStatusMapper
      {

        static const int Implemented_HASH = HashingUtils::HashString("Implemented");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");
        static const int NotImplemented_HASH = HashingUtils::HashString("NotImplemented");
        static const int Excluded_HASH = HashingUtils::HashString("Excluded");


        RecommendationStatus GetRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Implemented_HASH)
          {
            return RecommendationStatus::Implemented;
          }
          else if (hashCode == Inactive_HASH)
          {
            return RecommendationStatus::Inactive;
          }
          else if (hashCode == NotImplemented_HASH)
          {
            return RecommendationStatus::NotImplemented;
          }
          else if (hashCode == Excluded_HASH)
          {
            return RecommendationStatus::Excluded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationStatus>(hashCode);
          }

          return RecommendationStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationStatus::NOT_SET:
            return {};
          case RecommendationStatus::Implemented:
            return "Implemented";
          case RecommendationStatus::Inactive:
            return "Inactive";
          case RecommendationStatus::NotImplemented:
            return "NotImplemented";
          case RecommendationStatus::Excluded:
            return "Excluded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
