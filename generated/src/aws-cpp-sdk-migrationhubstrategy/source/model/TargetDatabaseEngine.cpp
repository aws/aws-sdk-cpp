/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/TargetDatabaseEngine.h>
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
      namespace TargetDatabaseEngineMapper
      {

        static const int None_specified_HASH = HashingUtils::HashString("None specified");
        static const int Amazon_Aurora_HASH = HashingUtils::HashString("Amazon Aurora");
        static const int AWS_PostgreSQL_HASH = HashingUtils::HashString("AWS PostgreSQL");
        static const int MySQL_HASH = HashingUtils::HashString("MySQL");
        static const int Microsoft_SQL_Server_HASH = HashingUtils::HashString("Microsoft SQL Server");
        static const int Oracle_Database_HASH = HashingUtils::HashString("Oracle Database");
        static const int MariaDB_HASH = HashingUtils::HashString("MariaDB");
        static const int SAP_HASH = HashingUtils::HashString("SAP");
        static const int Db2_LUW_HASH = HashingUtils::HashString("Db2 LUW");
        static const int MongoDB_HASH = HashingUtils::HashString("MongoDB");


        TargetDatabaseEngine GetTargetDatabaseEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return TargetDatabaseEngine::None_specified;
          }
          else if (hashCode == Amazon_Aurora_HASH)
          {
            return TargetDatabaseEngine::Amazon_Aurora;
          }
          else if (hashCode == AWS_PostgreSQL_HASH)
          {
            return TargetDatabaseEngine::AWS_PostgreSQL;
          }
          else if (hashCode == MySQL_HASH)
          {
            return TargetDatabaseEngine::MySQL;
          }
          else if (hashCode == Microsoft_SQL_Server_HASH)
          {
            return TargetDatabaseEngine::Microsoft_SQL_Server;
          }
          else if (hashCode == Oracle_Database_HASH)
          {
            return TargetDatabaseEngine::Oracle_Database;
          }
          else if (hashCode == MariaDB_HASH)
          {
            return TargetDatabaseEngine::MariaDB;
          }
          else if (hashCode == SAP_HASH)
          {
            return TargetDatabaseEngine::SAP;
          }
          else if (hashCode == Db2_LUW_HASH)
          {
            return TargetDatabaseEngine::Db2_LUW;
          }
          else if (hashCode == MongoDB_HASH)
          {
            return TargetDatabaseEngine::MongoDB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDatabaseEngine>(hashCode);
          }

          return TargetDatabaseEngine::NOT_SET;
        }

        Aws::String GetNameForTargetDatabaseEngine(TargetDatabaseEngine enumValue)
        {
          switch(enumValue)
          {
          case TargetDatabaseEngine::NOT_SET:
            return {};
          case TargetDatabaseEngine::None_specified:
            return "None specified";
          case TargetDatabaseEngine::Amazon_Aurora:
            return "Amazon Aurora";
          case TargetDatabaseEngine::AWS_PostgreSQL:
            return "AWS PostgreSQL";
          case TargetDatabaseEngine::MySQL:
            return "MySQL";
          case TargetDatabaseEngine::Microsoft_SQL_Server:
            return "Microsoft SQL Server";
          case TargetDatabaseEngine::Oracle_Database:
            return "Oracle Database";
          case TargetDatabaseEngine::MariaDB:
            return "MariaDB";
          case TargetDatabaseEngine::SAP:
            return "SAP";
          case TargetDatabaseEngine::Db2_LUW:
            return "Db2 LUW";
          case TargetDatabaseEngine::MongoDB:
            return "MongoDB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDatabaseEngineMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
