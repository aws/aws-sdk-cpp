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

        static constexpr uint32_t ApplicationDiscoveryService_HASH = ConstExprHashingUtils::HashString("ApplicationDiscoveryService");
        static constexpr uint32_t MPA_HASH = ConstExprHashingUtils::HashString("MPA");
        static constexpr uint32_t Import_HASH = ConstExprHashingUtils::HashString("Import");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
