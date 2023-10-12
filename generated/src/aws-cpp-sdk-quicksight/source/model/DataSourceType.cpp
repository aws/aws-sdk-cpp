/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static constexpr uint32_t ADOBE_ANALYTICS_HASH = ConstExprHashingUtils::HashString("ADOBE_ANALYTICS");
        static constexpr uint32_t AMAZON_ELASTICSEARCH_HASH = ConstExprHashingUtils::HashString("AMAZON_ELASTICSEARCH");
        static constexpr uint32_t ATHENA_HASH = ConstExprHashingUtils::HashString("ATHENA");
        static constexpr uint32_t AURORA_HASH = ConstExprHashingUtils::HashString("AURORA");
        static constexpr uint32_t AURORA_POSTGRESQL_HASH = ConstExprHashingUtils::HashString("AURORA_POSTGRESQL");
        static constexpr uint32_t AWS_IOT_ANALYTICS_HASH = ConstExprHashingUtils::HashString("AWS_IOT_ANALYTICS");
        static constexpr uint32_t GITHUB_HASH = ConstExprHashingUtils::HashString("GITHUB");
        static constexpr uint32_t JIRA_HASH = ConstExprHashingUtils::HashString("JIRA");
        static constexpr uint32_t MARIADB_HASH = ConstExprHashingUtils::HashString("MARIADB");
        static constexpr uint32_t MYSQL_HASH = ConstExprHashingUtils::HashString("MYSQL");
        static constexpr uint32_t ORACLE_HASH = ConstExprHashingUtils::HashString("ORACLE");
        static constexpr uint32_t POSTGRESQL_HASH = ConstExprHashingUtils::HashString("POSTGRESQL");
        static constexpr uint32_t PRESTO_HASH = ConstExprHashingUtils::HashString("PRESTO");
        static constexpr uint32_t REDSHIFT_HASH = ConstExprHashingUtils::HashString("REDSHIFT");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");
        static constexpr uint32_t SALESFORCE_HASH = ConstExprHashingUtils::HashString("SALESFORCE");
        static constexpr uint32_t SERVICENOW_HASH = ConstExprHashingUtils::HashString("SERVICENOW");
        static constexpr uint32_t SNOWFLAKE_HASH = ConstExprHashingUtils::HashString("SNOWFLAKE");
        static constexpr uint32_t SPARK_HASH = ConstExprHashingUtils::HashString("SPARK");
        static constexpr uint32_t SQLSERVER_HASH = ConstExprHashingUtils::HashString("SQLSERVER");
        static constexpr uint32_t TERADATA_HASH = ConstExprHashingUtils::HashString("TERADATA");
        static constexpr uint32_t TWITTER_HASH = ConstExprHashingUtils::HashString("TWITTER");
        static constexpr uint32_t TIMESTREAM_HASH = ConstExprHashingUtils::HashString("TIMESTREAM");
        static constexpr uint32_t AMAZON_OPENSEARCH_HASH = ConstExprHashingUtils::HashString("AMAZON_OPENSEARCH");
        static constexpr uint32_t EXASOL_HASH = ConstExprHashingUtils::HashString("EXASOL");
        static constexpr uint32_t DATABRICKS_HASH = ConstExprHashingUtils::HashString("DATABRICKS");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADOBE_ANALYTICS_HASH)
          {
            return DataSourceType::ADOBE_ANALYTICS;
          }
          else if (hashCode == AMAZON_ELASTICSEARCH_HASH)
          {
            return DataSourceType::AMAZON_ELASTICSEARCH;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return DataSourceType::ATHENA;
          }
          else if (hashCode == AURORA_HASH)
          {
            return DataSourceType::AURORA;
          }
          else if (hashCode == AURORA_POSTGRESQL_HASH)
          {
            return DataSourceType::AURORA_POSTGRESQL;
          }
          else if (hashCode == AWS_IOT_ANALYTICS_HASH)
          {
            return DataSourceType::AWS_IOT_ANALYTICS;
          }
          else if (hashCode == GITHUB_HASH)
          {
            return DataSourceType::GITHUB;
          }
          else if (hashCode == JIRA_HASH)
          {
            return DataSourceType::JIRA;
          }
          else if (hashCode == MARIADB_HASH)
          {
            return DataSourceType::MARIADB;
          }
          else if (hashCode == MYSQL_HASH)
          {
            return DataSourceType::MYSQL;
          }
          else if (hashCode == ORACLE_HASH)
          {
            return DataSourceType::ORACLE;
          }
          else if (hashCode == POSTGRESQL_HASH)
          {
            return DataSourceType::POSTGRESQL;
          }
          else if (hashCode == PRESTO_HASH)
          {
            return DataSourceType::PRESTO;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return DataSourceType::REDSHIFT;
          }
          else if (hashCode == S3_HASH)
          {
            return DataSourceType::S3;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return DataSourceType::SALESFORCE;
          }
          else if (hashCode == SERVICENOW_HASH)
          {
            return DataSourceType::SERVICENOW;
          }
          else if (hashCode == SNOWFLAKE_HASH)
          {
            return DataSourceType::SNOWFLAKE;
          }
          else if (hashCode == SPARK_HASH)
          {
            return DataSourceType::SPARK;
          }
          else if (hashCode == SQLSERVER_HASH)
          {
            return DataSourceType::SQLSERVER;
          }
          else if (hashCode == TERADATA_HASH)
          {
            return DataSourceType::TERADATA;
          }
          else if (hashCode == TWITTER_HASH)
          {
            return DataSourceType::TWITTER;
          }
          else if (hashCode == TIMESTREAM_HASH)
          {
            return DataSourceType::TIMESTREAM;
          }
          else if (hashCode == AMAZON_OPENSEARCH_HASH)
          {
            return DataSourceType::AMAZON_OPENSEARCH;
          }
          else if (hashCode == EXASOL_HASH)
          {
            return DataSourceType::EXASOL;
          }
          else if (hashCode == DATABRICKS_HASH)
          {
            return DataSourceType::DATABRICKS;
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
          case DataSourceType::ADOBE_ANALYTICS:
            return "ADOBE_ANALYTICS";
          case DataSourceType::AMAZON_ELASTICSEARCH:
            return "AMAZON_ELASTICSEARCH";
          case DataSourceType::ATHENA:
            return "ATHENA";
          case DataSourceType::AURORA:
            return "AURORA";
          case DataSourceType::AURORA_POSTGRESQL:
            return "AURORA_POSTGRESQL";
          case DataSourceType::AWS_IOT_ANALYTICS:
            return "AWS_IOT_ANALYTICS";
          case DataSourceType::GITHUB:
            return "GITHUB";
          case DataSourceType::JIRA:
            return "JIRA";
          case DataSourceType::MARIADB:
            return "MARIADB";
          case DataSourceType::MYSQL:
            return "MYSQL";
          case DataSourceType::ORACLE:
            return "ORACLE";
          case DataSourceType::POSTGRESQL:
            return "POSTGRESQL";
          case DataSourceType::PRESTO:
            return "PRESTO";
          case DataSourceType::REDSHIFT:
            return "REDSHIFT";
          case DataSourceType::S3:
            return "S3";
          case DataSourceType::SALESFORCE:
            return "SALESFORCE";
          case DataSourceType::SERVICENOW:
            return "SERVICENOW";
          case DataSourceType::SNOWFLAKE:
            return "SNOWFLAKE";
          case DataSourceType::SPARK:
            return "SPARK";
          case DataSourceType::SQLSERVER:
            return "SQLSERVER";
          case DataSourceType::TERADATA:
            return "TERADATA";
          case DataSourceType::TWITTER:
            return "TWITTER";
          case DataSourceType::TIMESTREAM:
            return "TIMESTREAM";
          case DataSourceType::AMAZON_OPENSEARCH:
            return "AMAZON_OPENSEARCH";
          case DataSourceType::EXASOL:
            return "EXASOL";
          case DataSourceType::DATABRICKS:
            return "DATABRICKS";
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
  } // namespace QuickSight
} // namespace Aws
