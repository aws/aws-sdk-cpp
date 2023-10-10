/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/OutputFormat.h>
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
      namespace OutputFormatMapper
      {

        static const int Excel_HASH = HashingUtils::HashString("Excel");
        static const int Json_HASH = HashingUtils::HashString("Json");


        OutputFormat GetOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Excel_HASH)
          {
            return OutputFormat::Excel;
          }
          else if (hashCode == Json_HASH)
          {
            return OutputFormat::Json;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutputFormat>(hashCode);
          }

          return OutputFormat::NOT_SET;
        }

        Aws::String GetNameForOutputFormat(OutputFormat enumValue)
        {
          switch(enumValue)
          {
          case OutputFormat::NOT_SET:
            return {};
          case OutputFormat::Excel:
            return "Excel";
          case OutputFormat::Json:
            return "Json";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutputFormatMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
