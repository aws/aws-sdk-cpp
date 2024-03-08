/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RunTimeAnalyzerName.h>
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
      namespace RunTimeAnalyzerNameMapper
      {

        static const int A2C_ANALYZER_HASH = HashingUtils::HashString("A2C_ANALYZER");
        static const int REHOST_ANALYZER_HASH = HashingUtils::HashString("REHOST_ANALYZER");
        static const int EMP_PA_ANALYZER_HASH = HashingUtils::HashString("EMP_PA_ANALYZER");
        static const int DATABASE_ANALYZER_HASH = HashingUtils::HashString("DATABASE_ANALYZER");
        static const int SCT_ANALYZER_HASH = HashingUtils::HashString("SCT_ANALYZER");


        RunTimeAnalyzerName GetRunTimeAnalyzerNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == A2C_ANALYZER_HASH)
          {
            return RunTimeAnalyzerName::A2C_ANALYZER;
          }
          else if (hashCode == REHOST_ANALYZER_HASH)
          {
            return RunTimeAnalyzerName::REHOST_ANALYZER;
          }
          else if (hashCode == EMP_PA_ANALYZER_HASH)
          {
            return RunTimeAnalyzerName::EMP_PA_ANALYZER;
          }
          else if (hashCode == DATABASE_ANALYZER_HASH)
          {
            return RunTimeAnalyzerName::DATABASE_ANALYZER;
          }
          else if (hashCode == SCT_ANALYZER_HASH)
          {
            return RunTimeAnalyzerName::SCT_ANALYZER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunTimeAnalyzerName>(hashCode);
          }

          return RunTimeAnalyzerName::NOT_SET;
        }

        Aws::String GetNameForRunTimeAnalyzerName(RunTimeAnalyzerName enumValue)
        {
          switch(enumValue)
          {
          case RunTimeAnalyzerName::NOT_SET:
            return {};
          case RunTimeAnalyzerName::A2C_ANALYZER:
            return "A2C_ANALYZER";
          case RunTimeAnalyzerName::REHOST_ANALYZER:
            return "REHOST_ANALYZER";
          case RunTimeAnalyzerName::EMP_PA_ANALYZER:
            return "EMP_PA_ANALYZER";
          case RunTimeAnalyzerName::DATABASE_ANALYZER:
            return "DATABASE_ANALYZER";
          case RunTimeAnalyzerName::SCT_ANALYZER:
            return "SCT_ANALYZER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunTimeAnalyzerNameMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
