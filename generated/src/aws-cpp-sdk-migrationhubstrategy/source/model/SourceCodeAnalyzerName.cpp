/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SourceCodeAnalyzerName.h>
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
      namespace SourceCodeAnalyzerNameMapper
      {

        static const int CSHARP_ANALYZER_HASH = HashingUtils::HashString("CSHARP_ANALYZER");
        static const int JAVA_ANALYZER_HASH = HashingUtils::HashString("JAVA_ANALYZER");
        static const int BYTECODE_ANALYZER_HASH = HashingUtils::HashString("BYTECODE_ANALYZER");
        static const int PORTING_ASSISTANT_HASH = HashingUtils::HashString("PORTING_ASSISTANT");


        SourceCodeAnalyzerName GetSourceCodeAnalyzerNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSHARP_ANALYZER_HASH)
          {
            return SourceCodeAnalyzerName::CSHARP_ANALYZER;
          }
          else if (hashCode == JAVA_ANALYZER_HASH)
          {
            return SourceCodeAnalyzerName::JAVA_ANALYZER;
          }
          else if (hashCode == BYTECODE_ANALYZER_HASH)
          {
            return SourceCodeAnalyzerName::BYTECODE_ANALYZER;
          }
          else if (hashCode == PORTING_ASSISTANT_HASH)
          {
            return SourceCodeAnalyzerName::PORTING_ASSISTANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceCodeAnalyzerName>(hashCode);
          }

          return SourceCodeAnalyzerName::NOT_SET;
        }

        Aws::String GetNameForSourceCodeAnalyzerName(SourceCodeAnalyzerName enumValue)
        {
          switch(enumValue)
          {
          case SourceCodeAnalyzerName::NOT_SET:
            return {};
          case SourceCodeAnalyzerName::CSHARP_ANALYZER:
            return "CSHARP_ANALYZER";
          case SourceCodeAnalyzerName::JAVA_ANALYZER:
            return "JAVA_ANALYZER";
          case SourceCodeAnalyzerName::BYTECODE_ANALYZER:
            return "BYTECODE_ANALYZER";
          case SourceCodeAnalyzerName::PORTING_ASSISTANT:
            return "PORTING_ASSISTANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceCodeAnalyzerNameMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
