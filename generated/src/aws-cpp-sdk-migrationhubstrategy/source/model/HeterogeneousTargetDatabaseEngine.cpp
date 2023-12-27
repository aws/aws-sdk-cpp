/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/HeterogeneousTargetDatabaseEngine.h>
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
      namespace HeterogeneousTargetDatabaseEngineMapper
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


        HeterogeneousTargetDatabaseEngine GetHeterogeneousTargetDatabaseEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_specified_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::None_specified;
          }
          else if (hashCode == Amazon_Aurora_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::Amazon_Aurora;
          }
          else if (hashCode == AWS_PostgreSQL_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::AWS_PostgreSQL;
          }
          else if (hashCode == MySQL_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::MySQL;
          }
          else if (hashCode == Microsoft_SQL_Server_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::Microsoft_SQL_Server;
          }
          else if (hashCode == Oracle_Database_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::Oracle_Database;
          }
          else if (hashCode == MariaDB_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::MariaDB;
          }
          else if (hashCode == SAP_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::SAP;
          }
          else if (hashCode == Db2_LUW_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::Db2_LUW;
          }
          else if (hashCode == MongoDB_HASH)
          {
            return HeterogeneousTargetDatabaseEngine::MongoDB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HeterogeneousTargetDatabaseEngine>(hashCode);
          }

          return HeterogeneousTargetDatabaseEngine::NOT_SET;
        }

        Aws::String GetNameForHeterogeneousTargetDatabaseEngine(HeterogeneousTargetDatabaseEngine enumValue)
        {
          switch(enumValue)
          {
          case HeterogeneousTargetDatabaseEngine::NOT_SET:
            return {};
          case HeterogeneousTargetDatabaseEngine::None_specified:
            return "None specified";
          case HeterogeneousTargetDatabaseEngine::Amazon_Aurora:
            return "Amazon Aurora";
          case HeterogeneousTargetDatabaseEngine::AWS_PostgreSQL:
            return "AWS PostgreSQL";
          case HeterogeneousTargetDatabaseEngine::MySQL:
            return "MySQL";
          case HeterogeneousTargetDatabaseEngine::Microsoft_SQL_Server:
            return "Microsoft SQL Server";
          case HeterogeneousTargetDatabaseEngine::Oracle_Database:
            return "Oracle Database";
          case HeterogeneousTargetDatabaseEngine::MariaDB:
            return "MariaDB";
          case HeterogeneousTargetDatabaseEngine::SAP:
            return "SAP";
          case HeterogeneousTargetDatabaseEngine::Db2_LUW:
            return "Db2 LUW";
          case HeterogeneousTargetDatabaseEngine::MongoDB:
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

      } // namespace HeterogeneousTargetDatabaseEngineMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
