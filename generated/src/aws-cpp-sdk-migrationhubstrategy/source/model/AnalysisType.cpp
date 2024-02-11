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

        static const int SOURCE_CODE_ANALYSIS_HASH = HashingUtils::HashString("SOURCE_CODE_ANALYSIS");
        static const int DATABASE_ANALYSIS_HASH = HashingUtils::HashString("DATABASE_ANALYSIS");
        static const int RUNTIME_ANALYSIS_HASH = HashingUtils::HashString("RUNTIME_ANALYSIS");
        static const int BINARY_ANALYSIS_HASH = HashingUtils::HashString("BINARY_ANALYSIS");


        AnalysisType GetAnalysisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
