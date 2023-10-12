/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/TransformationToolName.h>
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
      namespace TransformationToolNameMapper
      {

        static constexpr uint32_t App2Container_HASH = ConstExprHashingUtils::HashString("App2Container");
        static constexpr uint32_t Porting_Assistant_For_NET_HASH = ConstExprHashingUtils::HashString("Porting Assistant For .NET");
        static constexpr uint32_t End_of_Support_Migration_HASH = ConstExprHashingUtils::HashString("End of Support Migration");
        static constexpr uint32_t Windows_Web_Application_Migration_Assistant_HASH = ConstExprHashingUtils::HashString("Windows Web Application Migration Assistant");
        static constexpr uint32_t Application_Migration_Service_HASH = ConstExprHashingUtils::HashString("Application Migration Service");
        static constexpr uint32_t Strategy_Recommendation_Support_HASH = ConstExprHashingUtils::HashString("Strategy Recommendation Support");
        static constexpr uint32_t In_Place_Operating_System_Upgrade_HASH = ConstExprHashingUtils::HashString("In Place Operating System Upgrade");
        static constexpr uint32_t Schema_Conversion_Tool_HASH = ConstExprHashingUtils::HashString("Schema Conversion Tool");
        static constexpr uint32_t Database_Migration_Service_HASH = ConstExprHashingUtils::HashString("Database Migration Service");
        static constexpr uint32_t Native_SQL_Server_Backup_Restore_HASH = ConstExprHashingUtils::HashString("Native SQL Server Backup/Restore");


        TransformationToolName GetTransformationToolNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == App2Container_HASH)
          {
            return TransformationToolName::App2Container;
          }
          else if (hashCode == Porting_Assistant_For_NET_HASH)
          {
            return TransformationToolName::Porting_Assistant_For_NET;
          }
          else if (hashCode == End_of_Support_Migration_HASH)
          {
            return TransformationToolName::End_of_Support_Migration;
          }
          else if (hashCode == Windows_Web_Application_Migration_Assistant_HASH)
          {
            return TransformationToolName::Windows_Web_Application_Migration_Assistant;
          }
          else if (hashCode == Application_Migration_Service_HASH)
          {
            return TransformationToolName::Application_Migration_Service;
          }
          else if (hashCode == Strategy_Recommendation_Support_HASH)
          {
            return TransformationToolName::Strategy_Recommendation_Support;
          }
          else if (hashCode == In_Place_Operating_System_Upgrade_HASH)
          {
            return TransformationToolName::In_Place_Operating_System_Upgrade;
          }
          else if (hashCode == Schema_Conversion_Tool_HASH)
          {
            return TransformationToolName::Schema_Conversion_Tool;
          }
          else if (hashCode == Database_Migration_Service_HASH)
          {
            return TransformationToolName::Database_Migration_Service;
          }
          else if (hashCode == Native_SQL_Server_Backup_Restore_HASH)
          {
            return TransformationToolName::Native_SQL_Server_Backup_Restore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformationToolName>(hashCode);
          }

          return TransformationToolName::NOT_SET;
        }

        Aws::String GetNameForTransformationToolName(TransformationToolName enumValue)
        {
          switch(enumValue)
          {
          case TransformationToolName::NOT_SET:
            return {};
          case TransformationToolName::App2Container:
            return "App2Container";
          case TransformationToolName::Porting_Assistant_For_NET:
            return "Porting Assistant For .NET";
          case TransformationToolName::End_of_Support_Migration:
            return "End of Support Migration";
          case TransformationToolName::Windows_Web_Application_Migration_Assistant:
            return "Windows Web Application Migration Assistant";
          case TransformationToolName::Application_Migration_Service:
            return "Application Migration Service";
          case TransformationToolName::Strategy_Recommendation_Support:
            return "Strategy Recommendation Support";
          case TransformationToolName::In_Place_Operating_System_Upgrade:
            return "In Place Operating System Upgrade";
          case TransformationToolName::Schema_Conversion_Tool:
            return "Schema Conversion Tool";
          case TransformationToolName::Database_Migration_Service:
            return "Database Migration Service";
          case TransformationToolName::Native_SQL_Server_Backup_Restore:
            return "Native SQL Server Backup/Restore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformationToolNameMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
