/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RecommendationReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace RecommendationReportStatusMapper
      {

        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");


        RecommendationReportStatus GetRecommendationReportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RecommendationReportStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecommendationReportStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return RecommendationReportStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationReportStatus>(hashCode);
          }

          return RecommendationReportStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationReportStatus(RecommendationReportStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationReportStatus::NOT_SET:
            return {};
          case RecommendationReportStatus::FAILED:
            return "FAILED";
          case RecommendationReportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecommendationReportStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationReportStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
