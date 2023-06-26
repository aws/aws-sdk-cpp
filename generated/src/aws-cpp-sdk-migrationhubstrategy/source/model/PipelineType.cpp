/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/PipelineType.h>
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
      namespace PipelineTypeMapper
      {

        static const int AZURE_DEVOPS_HASH = HashingUtils::HashString("AZURE_DEVOPS");


        PipelineType GetPipelineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AZURE_DEVOPS_HASH)
          {
            return PipelineType::AZURE_DEVOPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineType>(hashCode);
          }

          return PipelineType::NOT_SET;
        }

        Aws::String GetNameForPipelineType(PipelineType enumValue)
        {
          switch(enumValue)
          {
          case PipelineType::AZURE_DEVOPS:
            return "AZURE_DEVOPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
