/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/HomogeneousTargetDatabaseEngine.h>
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
      namespace HomogeneousTargetDatabaseEngineMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");


        HomogeneousTargetDatabaseEngine GetHomogeneousTargetDatabaseEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return HomogeneousTargetDatabaseEngine::None_specified;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HomogeneousTargetDatabaseEngine>(hashCode);
          }

          return HomogeneousTargetDatabaseEngine::NOT_SET;
        }

        Aws::String GetNameForHomogeneousTargetDatabaseEngine(HomogeneousTargetDatabaseEngine enumValue)
        {
          switch(enumValue)
          {
          case HomogeneousTargetDatabaseEngine::NOT_SET:
            return {};
          case HomogeneousTargetDatabaseEngine::None_specified:
            return "None specified";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HomogeneousTargetDatabaseEngineMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
