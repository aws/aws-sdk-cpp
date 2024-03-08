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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        RecommendationJobStatus GetRecommendationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == DELETING_HASH)
          {
            return RecommendationJobStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RecommendationJobStatus::DELETED;
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
          case RecommendationJobStatus::DELETING:
            return "DELETING";
          case RecommendationJobStatus::DELETED:
            return "DELETED";
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
