/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace RecommendationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");


        RecommendationStatus GetRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return RecommendationStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RecommendationStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RecommendationStatus::FAILED;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return RecommendationStatus::NOT_APPLICABLE;
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
          case RecommendationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecommendationStatus::COMPLETED:
            return "COMPLETED";
          case RecommendationStatus::FAILED:
            return "FAILED";
          case RecommendationStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
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
  } // namespace SageMaker
} // namespace Aws
