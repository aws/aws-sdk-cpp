/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AppType.h>
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
      namespace AppTypeMapper
      {

        static constexpr uint32_t DotNetFramework_HASH = ConstExprHashingUtils::HashString("DotNetFramework");
        static constexpr uint32_t Java_HASH = ConstExprHashingUtils::HashString("Java");
        static constexpr uint32_t SQLServer_HASH = ConstExprHashingUtils::HashString("SQLServer");
        static constexpr uint32_t IIS_HASH = ConstExprHashingUtils::HashString("IIS");
        static constexpr uint32_t Oracle_HASH = ConstExprHashingUtils::HashString("Oracle");
        static constexpr uint32_t Other_HASH = ConstExprHashingUtils::HashString("Other");
        static constexpr uint32_t Tomcat_HASH = ConstExprHashingUtils::HashString("Tomcat");
        static constexpr uint32_t JBoss_HASH = ConstExprHashingUtils::HashString("JBoss");
        static constexpr uint32_t Spring_HASH = ConstExprHashingUtils::HashString("Spring");
        static constexpr uint32_t Mongo_DB_HASH = ConstExprHashingUtils::HashString("Mongo DB");
        static constexpr uint32_t DB2_HASH = ConstExprHashingUtils::HashString("DB2");
        static constexpr uint32_t Maria_DB_HASH = ConstExprHashingUtils::HashString("Maria DB");
        static constexpr uint32_t MySQL_HASH = ConstExprHashingUtils::HashString("MySQL");
        static constexpr uint32_t Sybase_HASH = ConstExprHashingUtils::HashString("Sybase");
        static constexpr uint32_t PostgreSQLServer_HASH = ConstExprHashingUtils::HashString("PostgreSQLServer");
        static constexpr uint32_t Cassandra_HASH = ConstExprHashingUtils::HashString("Cassandra");
        static constexpr uint32_t IBM_WebSphere_HASH = ConstExprHashingUtils::HashString("IBM WebSphere");
        static constexpr uint32_t Oracle_WebLogic_HASH = ConstExprHashingUtils::HashString("Oracle WebLogic");
        static constexpr uint32_t Visual_Basic_HASH = ConstExprHashingUtils::HashString("Visual Basic");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");
        static constexpr uint32_t DotnetCore_HASH = ConstExprHashingUtils::HashString("DotnetCore");
        static constexpr uint32_t Dotnet_HASH = ConstExprHashingUtils::HashString("Dotnet");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DotNetFramework_HASH)
          {
            return AppType::DotNetFramework;
          }
          else if (hashCode == Java_HASH)
          {
            return AppType::Java;
          }
          else if (hashCode == SQLServer_HASH)
          {
            return AppType::SQLServer;
          }
          else if (hashCode == IIS_HASH)
          {
            return AppType::IIS;
          }
          else if (hashCode == Oracle_HASH)
          {
            return AppType::Oracle;
          }
          else if (hashCode == Other_HASH)
          {
            return AppType::Other;
          }
          else if (hashCode == Tomcat_HASH)
          {
            return AppType::Tomcat;
          }
          else if (hashCode == JBoss_HASH)
          {
            return AppType::JBoss;
          }
          else if (hashCode == Spring_HASH)
          {
            return AppType::Spring;
          }
          else if (hashCode == Mongo_DB_HASH)
          {
            return AppType::Mongo_DB;
          }
          else if (hashCode == DB2_HASH)
          {
            return AppType::DB2;
          }
          else if (hashCode == Maria_DB_HASH)
          {
            return AppType::Maria_DB;
          }
          else if (hashCode == MySQL_HASH)
          {
            return AppType::MySQL;
          }
          else if (hashCode == Sybase_HASH)
          {
            return AppType::Sybase;
          }
          else if (hashCode == PostgreSQLServer_HASH)
          {
            return AppType::PostgreSQLServer;
          }
          else if (hashCode == Cassandra_HASH)
          {
            return AppType::Cassandra;
          }
          else if (hashCode == IBM_WebSphere_HASH)
          {
            return AppType::IBM_WebSphere;
          }
          else if (hashCode == Oracle_WebLogic_HASH)
          {
            return AppType::Oracle_WebLogic;
          }
          else if (hashCode == Visual_Basic_HASH)
          {
            return AppType::Visual_Basic;
          }
          else if (hashCode == Unknown_HASH)
          {
            return AppType::Unknown;
          }
          else if (hashCode == DotnetCore_HASH)
          {
            return AppType::DotnetCore;
          }
          else if (hashCode == Dotnet_HASH)
          {
            return AppType::Dotnet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppType>(hashCode);
          }

          return AppType::NOT_SET;
        }

        Aws::String GetNameForAppType(AppType enumValue)
        {
          switch(enumValue)
          {
          case AppType::NOT_SET:
            return {};
          case AppType::DotNetFramework:
            return "DotNetFramework";
          case AppType::Java:
            return "Java";
          case AppType::SQLServer:
            return "SQLServer";
          case AppType::IIS:
            return "IIS";
          case AppType::Oracle:
            return "Oracle";
          case AppType::Other:
            return "Other";
          case AppType::Tomcat:
            return "Tomcat";
          case AppType::JBoss:
            return "JBoss";
          case AppType::Spring:
            return "Spring";
          case AppType::Mongo_DB:
            return "Mongo DB";
          case AppType::DB2:
            return "DB2";
          case AppType::Maria_DB:
            return "Maria DB";
          case AppType::MySQL:
            return "MySQL";
          case AppType::Sybase:
            return "Sybase";
          case AppType::PostgreSQLServer:
            return "PostgreSQLServer";
          case AppType::Cassandra:
            return "Cassandra";
          case AppType::IBM_WebSphere:
            return "IBM WebSphere";
          case AppType::Oracle_WebLogic:
            return "Oracle WebLogic";
          case AppType::Visual_Basic:
            return "Visual Basic";
          case AppType::Unknown:
            return "Unknown";
          case AppType::DotnetCore:
            return "DotnetCore";
          case AppType::Dotnet:
            return "Dotnet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
