/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/BinaryAnalyzerName.h>
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
      namespace BinaryAnalyzerNameMapper
      {

        static const int DLL_ANALYZER_HASH = HashingUtils::HashString("DLL_ANALYZER");
        static const int BYTECODE_ANALYZER_HASH = HashingUtils::HashString("BYTECODE_ANALYZER");


        BinaryAnalyzerName GetBinaryAnalyzerNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DLL_ANALYZER_HASH)
          {
            return BinaryAnalyzerName::DLL_ANALYZER;
          }
          else if (hashCode == BYTECODE_ANALYZER_HASH)
          {
            return BinaryAnalyzerName::BYTECODE_ANALYZER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BinaryAnalyzerName>(hashCode);
          }

          return BinaryAnalyzerName::NOT_SET;
        }

        Aws::String GetNameForBinaryAnalyzerName(BinaryAnalyzerName enumValue)
        {
          switch(enumValue)
          {
          case BinaryAnalyzerName::NOT_SET:
            return {};
          case BinaryAnalyzerName::DLL_ANALYZER:
            return "DLL_ANALYZER";
          case BinaryAnalyzerName::BYTECODE_ANALYZER:
            return "BYTECODE_ANALYZER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BinaryAnalyzerNameMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
