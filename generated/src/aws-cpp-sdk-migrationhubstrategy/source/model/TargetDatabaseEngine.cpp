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

        static constexpr uint32_t None_specified_HASH = ConstExprHashingUtils::HashString("None specified");
        static constexpr uint32_t Amazon_Aurora_HASH = ConstExprHashingUtils::HashString("Amazon Aurora");
        static constexpr uint32_t AWS_PostgreSQL_HASH = ConstExprHashingUtils::HashString("AWS PostgreSQL");
        static constexpr uint32_t MySQL_HASH = ConstExprHashingUtils::HashString("MySQL");
        static constexpr uint32_t Microsoft_SQL_Server_HASH = ConstExprHashingUtils::HashString("Microsoft SQL Server");
        static constexpr uint32_t Oracle_Database_HASH = ConstExprHashingUtils::HashString("Oracle Database");
        static constexpr uint32_t MariaDB_HASH = ConstExprHashingUtils::HashString("MariaDB");
        static constexpr uint32_t SAP_HASH = ConstExprHashingUtils::HashString("SAP");
        static constexpr uint32_t Db2_LUW_HASH = ConstExprHashingUtils::HashString("Db2 LUW");
        static constexpr uint32_t MongoDB_HASH = ConstExprHashingUtils::HashString("MongoDB");


        TargetDatabaseEngine GetTargetDatabaseEngineForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
