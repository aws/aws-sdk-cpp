/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/CollectorHealth.h>
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
      namespace CollectorHealthMapper
      {

        static const int COLLECTOR_HEALTHY_HASH = HashingUtils::HashString("COLLECTOR_HEALTHY");
        static const int COLLECTOR_UNHEALTHY_HASH = HashingUtils::HashString("COLLECTOR_UNHEALTHY");


        CollectorHealth GetCollectorHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLLECTOR_HEALTHY_HASH)
          {
            return CollectorHealth::COLLECTOR_HEALTHY;
          }
          else if (hashCode == COLLECTOR_UNHEALTHY_HASH)
          {
            return CollectorHealth::COLLECTOR_UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollectorHealth>(hashCode);
          }

          return CollectorHealth::NOT_SET;
        }

        Aws::String GetNameForCollectorHealth(CollectorHealth enumValue)
        {
          switch(enumValue)
          {
          case CollectorHealth::NOT_SET:
            return {};
          case CollectorHealth::COLLECTOR_HEALTHY:
            return "COLLECTOR_HEALTHY";
          case CollectorHealth::COLLECTOR_UNHEALTHY:
            return "COLLECTOR_UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CollectorHealthMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
