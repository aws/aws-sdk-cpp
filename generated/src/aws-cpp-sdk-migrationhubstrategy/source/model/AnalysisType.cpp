/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AnalysisType.h>
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
      namespace AnalysisTypeMapper
      {

        static constexpr uint32_t SOURCE_CODE_ANALYSIS_HASH = ConstExprHashingUtils::HashString("SOURCE_CODE_ANALYSIS");
        static constexpr uint32_t DATABASE_ANALYSIS_HASH = ConstExprHashingUtils::HashString("DATABASE_ANALYSIS");
        static constexpr uint32_t RUNTIME_ANALYSIS_HASH = ConstExprHashingUtils::HashString("RUNTIME_ANALYSIS");
        static constexpr uint32_t BINARY_ANALYSIS_HASH = ConstExprHashingUtils::HashString("BINARY_ANALYSIS");


        AnalysisType GetAnalysisTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_CODE_ANALYSIS_HASH)
          {
            return AnalysisType::SOURCE_CODE_ANALYSIS;
          }
          else if (hashCode == DATABASE_ANALYSIS_HASH)
          {
            return AnalysisType::DATABASE_ANALYSIS;
          }
          else if (hashCode == RUNTIME_ANALYSIS_HASH)
          {
            return AnalysisType::RUNTIME_ANALYSIS;
          }
          else if (hashCode == BINARY_ANALYSIS_HASH)
          {
            return AnalysisType::BINARY_ANALYSIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisType>(hashCode);
          }

          return AnalysisType::NOT_SET;
        }

        Aws::String GetNameForAnalysisType(AnalysisType enumValue)
        {
          switch(enumValue)
          {
          case AnalysisType::NOT_SET:
            return {};
          case AnalysisType::SOURCE_CODE_ANALYSIS:
            return "SOURCE_CODE_ANALYSIS";
          case AnalysisType::DATABASE_ANALYSIS:
            return "DATABASE_ANALYSIS";
          case AnalysisType::RUNTIME_ANALYSIS:
            return "RUNTIME_ANALYSIS";
          case AnalysisType::BINARY_ANALYSIS:
            return "BINARY_ANALYSIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
