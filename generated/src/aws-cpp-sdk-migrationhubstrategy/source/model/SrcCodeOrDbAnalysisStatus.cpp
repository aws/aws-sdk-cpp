/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SrcCodeOrDbAnalysisStatus.h>
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
      namespace SrcCodeOrDbAnalysisStatusMapper
      {

        static const int ANALYSIS_TO_BE_SCHEDULED_HASH = HashingUtils::HashString("ANALYSIS_TO_BE_SCHEDULED");
        static const int ANALYSIS_STARTED_HASH = HashingUtils::HashString("ANALYSIS_STARTED");
        static const int ANALYSIS_SUCCESS_HASH = HashingUtils::HashString("ANALYSIS_SUCCESS");
        static const int ANALYSIS_FAILED_HASH = HashingUtils::HashString("ANALYSIS_FAILED");
        static const int ANALYSIS_PARTIAL_SUCCESS_HASH = HashingUtils::HashString("ANALYSIS_PARTIAL_SUCCESS");
        static const int UNCONFIGURED_HASH = HashingUtils::HashString("UNCONFIGURED");
        static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");


        SrcCodeOrDbAnalysisStatus GetSrcCodeOrDbAnalysisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANALYSIS_TO_BE_SCHEDULED_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::ANALYSIS_TO_BE_SCHEDULED;
          }
          else if (hashCode == ANALYSIS_STARTED_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::ANALYSIS_STARTED;
          }
          else if (hashCode == ANALYSIS_SUCCESS_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::ANALYSIS_SUCCESS;
          }
          else if (hashCode == ANALYSIS_FAILED_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::ANALYSIS_FAILED;
          }
          else if (hashCode == ANALYSIS_PARTIAL_SUCCESS_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::ANALYSIS_PARTIAL_SUCCESS;
          }
          else if (hashCode == UNCONFIGURED_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::UNCONFIGURED;
          }
          else if (hashCode == CONFIGURED_HASH)
          {
            return SrcCodeOrDbAnalysisStatus::CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SrcCodeOrDbAnalysisStatus>(hashCode);
          }

          return SrcCodeOrDbAnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForSrcCodeOrDbAnalysisStatus(SrcCodeOrDbAnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case SrcCodeOrDbAnalysisStatus::ANALYSIS_TO_BE_SCHEDULED:
            return "ANALYSIS_TO_BE_SCHEDULED";
          case SrcCodeOrDbAnalysisStatus::ANALYSIS_STARTED:
            return "ANALYSIS_STARTED";
          case SrcCodeOrDbAnalysisStatus::ANALYSIS_SUCCESS:
            return "ANALYSIS_SUCCESS";
          case SrcCodeOrDbAnalysisStatus::ANALYSIS_FAILED:
            return "ANALYSIS_FAILED";
          case SrcCodeOrDbAnalysisStatus::ANALYSIS_PARTIAL_SUCCESS:
            return "ANALYSIS_PARTIAL_SUCCESS";
          case SrcCodeOrDbAnalysisStatus::UNCONFIGURED:
            return "UNCONFIGURED";
          case SrcCodeOrDbAnalysisStatus::CONFIGURED:
            return "CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SrcCodeOrDbAnalysisStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
