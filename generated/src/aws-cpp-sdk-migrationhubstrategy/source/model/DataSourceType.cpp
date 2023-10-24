/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DataSourceType.h>
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
      namespace DataSourceTypeMapper
      {

        static const int ApplicationDiscoveryService_HASH = HashingUtils::HashString("ApplicationDiscoveryService");
        static const int MPA_HASH = HashingUtils::HashString("MPA");
        static const int Import_HASH = HashingUtils::HashString("Import");
        static const int StrategyRecommendationsApplicationDataCollector_HASH = HashingUtils::HashString("StrategyRecommendationsApplicationDataCollector");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ApplicationDiscoveryService_HASH)
          {
            return DataSourceType::ApplicationDiscoveryService;
          }
          else if (hashCode == MPA_HASH)
          {
            return DataSourceType::MPA;
          }
          else if (hashCode == Import_HASH)
          {
            return DataSourceType::Import;
          }
          else if (hashCode == StrategyRecommendationsApplicationDataCollector_HASH)
          {
            return DataSourceType::StrategyRecommendationsApplicationDataCollector;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceType>(hashCode);
          }

          return DataSourceType::NOT_SET;
        }

        Aws::String GetNameForDataSourceType(DataSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceType::NOT_SET:
            return {};
          case DataSourceType::ApplicationDiscoveryService:
            return "ApplicationDiscoveryService";
          case DataSourceType::MPA:
            return "MPA";
          case DataSourceType::Import:
            return "Import";
          case DataSourceType::StrategyRecommendationsApplicationDataCollector:
            return "StrategyRecommendationsApplicationDataCollector";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
