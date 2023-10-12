/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RuntimeAnalysisStatus.h>
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
      namespace RuntimeAnalysisStatusMapper
      {

        static constexpr uint32_t ANALYSIS_TO_BE_SCHEDULED_HASH = ConstExprHashingUtils::HashString("ANALYSIS_TO_BE_SCHEDULED");
        static constexpr uint32_t ANALYSIS_STARTED_HASH = ConstExprHashingUtils::HashString("ANALYSIS_STARTED");
        static constexpr uint32_t ANALYSIS_SUCCESS_HASH = ConstExprHashingUtils::HashString("ANALYSIS_SUCCESS");
        static constexpr uint32_t ANALYSIS_FAILED_HASH = ConstExprHashingUtils::HashString("ANALYSIS_FAILED");


        RuntimeAnalysisStatus GetRuntimeAnalysisStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANALYSIS_TO_BE_SCHEDULED_HASH)
          {
            return RuntimeAnalysisStatus::ANALYSIS_TO_BE_SCHEDULED;
          }
          else if (hashCode == ANALYSIS_STARTED_HASH)
          {
            return RuntimeAnalysisStatus::ANALYSIS_STARTED;
          }
          else if (hashCode == ANALYSIS_SUCCESS_HASH)
          {
            return RuntimeAnalysisStatus::ANALYSIS_SUCCESS;
          }
          else if (hashCode == ANALYSIS_FAILED_HASH)
          {
            return RuntimeAnalysisStatus::ANALYSIS_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuntimeAnalysisStatus>(hashCode);
          }

          return RuntimeAnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForRuntimeAnalysisStatus(RuntimeAnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case RuntimeAnalysisStatus::NOT_SET:
            return {};
          case RuntimeAnalysisStatus::ANALYSIS_TO_BE_SCHEDULED:
            return "ANALYSIS_TO_BE_SCHEDULED";
          case RuntimeAnalysisStatus::ANALYSIS_STARTED:
            return "ANALYSIS_STARTED";
          case RuntimeAnalysisStatus::ANALYSIS_SUCCESS:
            return "ANALYSIS_SUCCESS";
          case RuntimeAnalysisStatus::ANALYSIS_FAILED:
            return "ANALYSIS_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuntimeAnalysisStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
