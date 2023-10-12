/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AntipatternReportStatus.h>
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
      namespace AntipatternReportStatusMapper
      {

        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");


        AntipatternReportStatus GetAntipatternReportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return AntipatternReportStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AntipatternReportStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return AntipatternReportStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AntipatternReportStatus>(hashCode);
          }

          return AntipatternReportStatus::NOT_SET;
        }

        Aws::String GetNameForAntipatternReportStatus(AntipatternReportStatus enumValue)
        {
          switch(enumValue)
          {
          case AntipatternReportStatus::NOT_SET:
            return {};
          case AntipatternReportStatus::FAILED:
            return "FAILED";
          case AntipatternReportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AntipatternReportStatus::SUCCESS:
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

      } // namespace AntipatternReportStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
