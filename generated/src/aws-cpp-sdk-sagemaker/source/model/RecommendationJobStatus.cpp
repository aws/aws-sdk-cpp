/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobStatus.h>
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
      namespace RecommendationJobStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        RecommendationJobStatus GetRecommendationJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RecommendationJobStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecommendationJobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RecommendationJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RecommendationJobStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return RecommendationJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return RecommendationJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationJobStatus>(hashCode);
          }

          return RecommendationJobStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationJobStatus(RecommendationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationJobStatus::NOT_SET:
            return {};
          case RecommendationJobStatus::PENDING:
            return "PENDING";
          case RecommendationJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecommendationJobStatus::COMPLETED:
            return "COMPLETED";
          case RecommendationJobStatus::FAILED:
            return "FAILED";
          case RecommendationJobStatus::STOPPING:
            return "STOPPING";
          case RecommendationJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
