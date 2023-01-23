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

        static const int DotNetFramework_HASH = HashingUtils::HashString("DotNetFramework");
        static const int Java_HASH = HashingUtils::HashString("Java");
        static const int SQLServer_HASH = HashingUtils::HashString("SQLServer");
        static const int IIS_HASH = HashingUtils::HashString("IIS");
        static const int Oracle_HASH = HashingUtils::HashString("Oracle");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int Tomcat_HASH = HashingUtils::HashString("Tomcat");
        static const int JBoss_HASH = HashingUtils::HashString("JBoss");
        static const int Spring_HASH = HashingUtils::HashString("Spring");
        static const int Mongo_DB_HASH = HashingUtils::HashString("Mongo DB");
        static const int DB2_HASH = HashingUtils::HashString("DB2");
        static const int Maria_DB_HASH = HashingUtils::HashString("Maria DB");
        static const int MySQL_HASH = HashingUtils::HashString("MySQL");
        static const int Sybase_HASH = HashingUtils::HashString("Sybase");
        static const int PostgreSQLServer_HASH = HashingUtils::HashString("PostgreSQLServer");
        static const int Cassandra_HASH = HashingUtils::HashString("Cassandra");
        static const int IBM_WebSphere_HASH = HashingUtils::HashString("IBM WebSphere");
        static const int Oracle_WebLogic_HASH = HashingUtils::HashString("Oracle WebLogic");
        static const int Visual_Basic_HASH = HashingUtils::HashString("Visual Basic");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int DotnetCore_HASH = HashingUtils::HashString("DotnetCore");
        static const int Dotnet_HASH = HashingUtils::HashString("Dotnet");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
