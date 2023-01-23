/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AmazonElasticsearchParameters.h>
#include <aws/quicksight/model/AthenaParameters.h>
#include <aws/quicksight/model/AuroraParameters.h>
#include <aws/quicksight/model/AuroraPostgreSqlParameters.h>
#include <aws/quicksight/model/AwsIotAnalyticsParameters.h>
#include <aws/quicksight/model/JiraParameters.h>
#include <aws/quicksight/model/MariaDbParameters.h>
#include <aws/quicksight/model/MySqlParameters.h>
#include <aws/quicksight/model/OracleParameters.h>
#include <aws/quicksight/model/PostgreSqlParameters.h>
#include <aws/quicksight/model/PrestoParameters.h>
#include <aws/quicksight/model/RdsParameters.h>
#include <aws/quicksight/model/RedshiftParameters.h>
#include <aws/quicksight/model/S3Parameters.h>
#include <aws/quicksight/model/ServiceNowParameters.h>
#include <aws/quicksight/model/SnowflakeParameters.h>
#include <aws/quicksight/model/SparkParameters.h>
#include <aws/quicksight/model/SqlServerParameters.h>
#include <aws/quicksight/model/TeradataParameters.h>
#include <aws/quicksight/model/TwitterParameters.h>
#include <aws/quicksight/model/AmazonOpenSearchParameters.h>
#include <aws/quicksight/model/ExasolParameters.h>
#include <aws/quicksight/model/DatabricksParameters.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that Amazon QuickSight uses to connect to your underlying data
   * source. This is a variant type structure. For this structure to be valid, only
   * one of the attributes can be non-null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceParameters">AWS
   * API Reference</a></p>
   */
  class DataSourceParameters
  {
  public:
    AWS_QUICKSIGHT_API DataSourceParameters();
    AWS_QUICKSIGHT_API DataSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline const AmazonElasticsearchParameters& GetAmazonElasticsearchParameters() const{ return m_amazonElasticsearchParameters; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline bool AmazonElasticsearchParametersHasBeenSet() const { return m_amazonElasticsearchParametersHasBeenSet; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline void SetAmazonElasticsearchParameters(const AmazonElasticsearchParameters& value) { m_amazonElasticsearchParametersHasBeenSet = true; m_amazonElasticsearchParameters = value; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline void SetAmazonElasticsearchParameters(AmazonElasticsearchParameters&& value) { m_amazonElasticsearchParametersHasBeenSet = true; m_amazonElasticsearchParameters = std::move(value); }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline DataSourceParameters& WithAmazonElasticsearchParameters(const AmazonElasticsearchParameters& value) { SetAmazonElasticsearchParameters(value); return *this;}

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline DataSourceParameters& WithAmazonElasticsearchParameters(AmazonElasticsearchParameters&& value) { SetAmazonElasticsearchParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline const AthenaParameters& GetAthenaParameters() const{ return m_athenaParameters; }

    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline bool AthenaParametersHasBeenSet() const { return m_athenaParametersHasBeenSet; }

    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline void SetAthenaParameters(const AthenaParameters& value) { m_athenaParametersHasBeenSet = true; m_athenaParameters = value; }

    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline void SetAthenaParameters(AthenaParameters&& value) { m_athenaParametersHasBeenSet = true; m_athenaParameters = std::move(value); }

    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline DataSourceParameters& WithAthenaParameters(const AthenaParameters& value) { SetAthenaParameters(value); return *this;}

    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline DataSourceParameters& WithAthenaParameters(AthenaParameters&& value) { SetAthenaParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline const AuroraParameters& GetAuroraParameters() const{ return m_auroraParameters; }

    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline bool AuroraParametersHasBeenSet() const { return m_auroraParametersHasBeenSet; }

    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline void SetAuroraParameters(const AuroraParameters& value) { m_auroraParametersHasBeenSet = true; m_auroraParameters = value; }

    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline void SetAuroraParameters(AuroraParameters&& value) { m_auroraParametersHasBeenSet = true; m_auroraParameters = std::move(value); }

    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline DataSourceParameters& WithAuroraParameters(const AuroraParameters& value) { SetAuroraParameters(value); return *this;}

    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline DataSourceParameters& WithAuroraParameters(AuroraParameters&& value) { SetAuroraParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline const AuroraPostgreSqlParameters& GetAuroraPostgreSqlParameters() const{ return m_auroraPostgreSqlParameters; }

    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline bool AuroraPostgreSqlParametersHasBeenSet() const { return m_auroraPostgreSqlParametersHasBeenSet; }

    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline void SetAuroraPostgreSqlParameters(const AuroraPostgreSqlParameters& value) { m_auroraPostgreSqlParametersHasBeenSet = true; m_auroraPostgreSqlParameters = value; }

    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline void SetAuroraPostgreSqlParameters(AuroraPostgreSqlParameters&& value) { m_auroraPostgreSqlParametersHasBeenSet = true; m_auroraPostgreSqlParameters = std::move(value); }

    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline DataSourceParameters& WithAuroraPostgreSqlParameters(const AuroraPostgreSqlParameters& value) { SetAuroraPostgreSqlParameters(value); return *this;}

    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline DataSourceParameters& WithAuroraPostgreSqlParameters(AuroraPostgreSqlParameters&& value) { SetAuroraPostgreSqlParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline const AwsIotAnalyticsParameters& GetAwsIotAnalyticsParameters() const{ return m_awsIotAnalyticsParameters; }

    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline bool AwsIotAnalyticsParametersHasBeenSet() const { return m_awsIotAnalyticsParametersHasBeenSet; }

    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline void SetAwsIotAnalyticsParameters(const AwsIotAnalyticsParameters& value) { m_awsIotAnalyticsParametersHasBeenSet = true; m_awsIotAnalyticsParameters = value; }

    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline void SetAwsIotAnalyticsParameters(AwsIotAnalyticsParameters&& value) { m_awsIotAnalyticsParametersHasBeenSet = true; m_awsIotAnalyticsParameters = std::move(value); }

    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline DataSourceParameters& WithAwsIotAnalyticsParameters(const AwsIotAnalyticsParameters& value) { SetAwsIotAnalyticsParameters(value); return *this;}

    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline DataSourceParameters& WithAwsIotAnalyticsParameters(AwsIotAnalyticsParameters&& value) { SetAwsIotAnalyticsParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Jira.</p>
     */
    inline const JiraParameters& GetJiraParameters() const{ return m_jiraParameters; }

    /**
     * <p>The parameters for Jira.</p>
     */
    inline bool JiraParametersHasBeenSet() const { return m_jiraParametersHasBeenSet; }

    /**
     * <p>The parameters for Jira.</p>
     */
    inline void SetJiraParameters(const JiraParameters& value) { m_jiraParametersHasBeenSet = true; m_jiraParameters = value; }

    /**
     * <p>The parameters for Jira.</p>
     */
    inline void SetJiraParameters(JiraParameters&& value) { m_jiraParametersHasBeenSet = true; m_jiraParameters = std::move(value); }

    /**
     * <p>The parameters for Jira.</p>
     */
    inline DataSourceParameters& WithJiraParameters(const JiraParameters& value) { SetJiraParameters(value); return *this;}

    /**
     * <p>The parameters for Jira.</p>
     */
    inline DataSourceParameters& WithJiraParameters(JiraParameters&& value) { SetJiraParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline const MariaDbParameters& GetMariaDbParameters() const{ return m_mariaDbParameters; }

    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline bool MariaDbParametersHasBeenSet() const { return m_mariaDbParametersHasBeenSet; }

    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline void SetMariaDbParameters(const MariaDbParameters& value) { m_mariaDbParametersHasBeenSet = true; m_mariaDbParameters = value; }

    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline void SetMariaDbParameters(MariaDbParameters&& value) { m_mariaDbParametersHasBeenSet = true; m_mariaDbParameters = std::move(value); }

    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline DataSourceParameters& WithMariaDbParameters(const MariaDbParameters& value) { SetMariaDbParameters(value); return *this;}

    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline DataSourceParameters& WithMariaDbParameters(MariaDbParameters&& value) { SetMariaDbParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for MySQL.</p>
     */
    inline const MySqlParameters& GetMySqlParameters() const{ return m_mySqlParameters; }

    /**
     * <p>The parameters for MySQL.</p>
     */
    inline bool MySqlParametersHasBeenSet() const { return m_mySqlParametersHasBeenSet; }

    /**
     * <p>The parameters for MySQL.</p>
     */
    inline void SetMySqlParameters(const MySqlParameters& value) { m_mySqlParametersHasBeenSet = true; m_mySqlParameters = value; }

    /**
     * <p>The parameters for MySQL.</p>
     */
    inline void SetMySqlParameters(MySqlParameters&& value) { m_mySqlParametersHasBeenSet = true; m_mySqlParameters = std::move(value); }

    /**
     * <p>The parameters for MySQL.</p>
     */
    inline DataSourceParameters& WithMySqlParameters(const MySqlParameters& value) { SetMySqlParameters(value); return *this;}

    /**
     * <p>The parameters for MySQL.</p>
     */
    inline DataSourceParameters& WithMySqlParameters(MySqlParameters&& value) { SetMySqlParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Oracle.</p>
     */
    inline const OracleParameters& GetOracleParameters() const{ return m_oracleParameters; }

    /**
     * <p>The parameters for Oracle.</p>
     */
    inline bool OracleParametersHasBeenSet() const { return m_oracleParametersHasBeenSet; }

    /**
     * <p>The parameters for Oracle.</p>
     */
    inline void SetOracleParameters(const OracleParameters& value) { m_oracleParametersHasBeenSet = true; m_oracleParameters = value; }

    /**
     * <p>The parameters for Oracle.</p>
     */
    inline void SetOracleParameters(OracleParameters&& value) { m_oracleParametersHasBeenSet = true; m_oracleParameters = std::move(value); }

    /**
     * <p>The parameters for Oracle.</p>
     */
    inline DataSourceParameters& WithOracleParameters(const OracleParameters& value) { SetOracleParameters(value); return *this;}

    /**
     * <p>The parameters for Oracle.</p>
     */
    inline DataSourceParameters& WithOracleParameters(OracleParameters&& value) { SetOracleParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline const PostgreSqlParameters& GetPostgreSqlParameters() const{ return m_postgreSqlParameters; }

    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline bool PostgreSqlParametersHasBeenSet() const { return m_postgreSqlParametersHasBeenSet; }

    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline void SetPostgreSqlParameters(const PostgreSqlParameters& value) { m_postgreSqlParametersHasBeenSet = true; m_postgreSqlParameters = value; }

    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline void SetPostgreSqlParameters(PostgreSqlParameters&& value) { m_postgreSqlParametersHasBeenSet = true; m_postgreSqlParameters = std::move(value); }

    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline DataSourceParameters& WithPostgreSqlParameters(const PostgreSqlParameters& value) { SetPostgreSqlParameters(value); return *this;}

    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline DataSourceParameters& WithPostgreSqlParameters(PostgreSqlParameters&& value) { SetPostgreSqlParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Presto.</p>
     */
    inline const PrestoParameters& GetPrestoParameters() const{ return m_prestoParameters; }

    /**
     * <p>The parameters for Presto.</p>
     */
    inline bool PrestoParametersHasBeenSet() const { return m_prestoParametersHasBeenSet; }

    /**
     * <p>The parameters for Presto.</p>
     */
    inline void SetPrestoParameters(const PrestoParameters& value) { m_prestoParametersHasBeenSet = true; m_prestoParameters = value; }

    /**
     * <p>The parameters for Presto.</p>
     */
    inline void SetPrestoParameters(PrestoParameters&& value) { m_prestoParametersHasBeenSet = true; m_prestoParameters = std::move(value); }

    /**
     * <p>The parameters for Presto.</p>
     */
    inline DataSourceParameters& WithPrestoParameters(const PrestoParameters& value) { SetPrestoParameters(value); return *this;}

    /**
     * <p>The parameters for Presto.</p>
     */
    inline DataSourceParameters& WithPrestoParameters(PrestoParameters&& value) { SetPrestoParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline const RdsParameters& GetRdsParameters() const{ return m_rdsParameters; }

    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline bool RdsParametersHasBeenSet() const { return m_rdsParametersHasBeenSet; }

    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline void SetRdsParameters(const RdsParameters& value) { m_rdsParametersHasBeenSet = true; m_rdsParameters = value; }

    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline void SetRdsParameters(RdsParameters&& value) { m_rdsParametersHasBeenSet = true; m_rdsParameters = std::move(value); }

    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline DataSourceParameters& WithRdsParameters(const RdsParameters& value) { SetRdsParameters(value); return *this;}

    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline DataSourceParameters& WithRdsParameters(RdsParameters&& value) { SetRdsParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline const RedshiftParameters& GetRedshiftParameters() const{ return m_redshiftParameters; }

    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline bool RedshiftParametersHasBeenSet() const { return m_redshiftParametersHasBeenSet; }

    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline void SetRedshiftParameters(const RedshiftParameters& value) { m_redshiftParametersHasBeenSet = true; m_redshiftParameters = value; }

    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline void SetRedshiftParameters(RedshiftParameters&& value) { m_redshiftParametersHasBeenSet = true; m_redshiftParameters = std::move(value); }

    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline DataSourceParameters& WithRedshiftParameters(const RedshiftParameters& value) { SetRedshiftParameters(value); return *this;}

    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline DataSourceParameters& WithRedshiftParameters(RedshiftParameters&& value) { SetRedshiftParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for S3.</p>
     */
    inline const S3Parameters& GetS3Parameters() const{ return m_s3Parameters; }

    /**
     * <p>The parameters for S3.</p>
     */
    inline bool S3ParametersHasBeenSet() const { return m_s3ParametersHasBeenSet; }

    /**
     * <p>The parameters for S3.</p>
     */
    inline void SetS3Parameters(const S3Parameters& value) { m_s3ParametersHasBeenSet = true; m_s3Parameters = value; }

    /**
     * <p>The parameters for S3.</p>
     */
    inline void SetS3Parameters(S3Parameters&& value) { m_s3ParametersHasBeenSet = true; m_s3Parameters = std::move(value); }

    /**
     * <p>The parameters for S3.</p>
     */
    inline DataSourceParameters& WithS3Parameters(const S3Parameters& value) { SetS3Parameters(value); return *this;}

    /**
     * <p>The parameters for S3.</p>
     */
    inline DataSourceParameters& WithS3Parameters(S3Parameters&& value) { SetS3Parameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline const ServiceNowParameters& GetServiceNowParameters() const{ return m_serviceNowParameters; }

    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline bool ServiceNowParametersHasBeenSet() const { return m_serviceNowParametersHasBeenSet; }

    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline void SetServiceNowParameters(const ServiceNowParameters& value) { m_serviceNowParametersHasBeenSet = true; m_serviceNowParameters = value; }

    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline void SetServiceNowParameters(ServiceNowParameters&& value) { m_serviceNowParametersHasBeenSet = true; m_serviceNowParameters = std::move(value); }

    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline DataSourceParameters& WithServiceNowParameters(const ServiceNowParameters& value) { SetServiceNowParameters(value); return *this;}

    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline DataSourceParameters& WithServiceNowParameters(ServiceNowParameters&& value) { SetServiceNowParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline const SnowflakeParameters& GetSnowflakeParameters() const{ return m_snowflakeParameters; }

    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline bool SnowflakeParametersHasBeenSet() const { return m_snowflakeParametersHasBeenSet; }

    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline void SetSnowflakeParameters(const SnowflakeParameters& value) { m_snowflakeParametersHasBeenSet = true; m_snowflakeParameters = value; }

    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline void SetSnowflakeParameters(SnowflakeParameters&& value) { m_snowflakeParametersHasBeenSet = true; m_snowflakeParameters = std::move(value); }

    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline DataSourceParameters& WithSnowflakeParameters(const SnowflakeParameters& value) { SetSnowflakeParameters(value); return *this;}

    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline DataSourceParameters& WithSnowflakeParameters(SnowflakeParameters&& value) { SetSnowflakeParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Spark.</p>
     */
    inline const SparkParameters& GetSparkParameters() const{ return m_sparkParameters; }

    /**
     * <p>The parameters for Spark.</p>
     */
    inline bool SparkParametersHasBeenSet() const { return m_sparkParametersHasBeenSet; }

    /**
     * <p>The parameters for Spark.</p>
     */
    inline void SetSparkParameters(const SparkParameters& value) { m_sparkParametersHasBeenSet = true; m_sparkParameters = value; }

    /**
     * <p>The parameters for Spark.</p>
     */
    inline void SetSparkParameters(SparkParameters&& value) { m_sparkParametersHasBeenSet = true; m_sparkParameters = std::move(value); }

    /**
     * <p>The parameters for Spark.</p>
     */
    inline DataSourceParameters& WithSparkParameters(const SparkParameters& value) { SetSparkParameters(value); return *this;}

    /**
     * <p>The parameters for Spark.</p>
     */
    inline DataSourceParameters& WithSparkParameters(SparkParameters&& value) { SetSparkParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline const SqlServerParameters& GetSqlServerParameters() const{ return m_sqlServerParameters; }

    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline bool SqlServerParametersHasBeenSet() const { return m_sqlServerParametersHasBeenSet; }

    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline void SetSqlServerParameters(const SqlServerParameters& value) { m_sqlServerParametersHasBeenSet = true; m_sqlServerParameters = value; }

    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline void SetSqlServerParameters(SqlServerParameters&& value) { m_sqlServerParametersHasBeenSet = true; m_sqlServerParameters = std::move(value); }

    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline DataSourceParameters& WithSqlServerParameters(const SqlServerParameters& value) { SetSqlServerParameters(value); return *this;}

    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline DataSourceParameters& WithSqlServerParameters(SqlServerParameters&& value) { SetSqlServerParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Teradata.</p>
     */
    inline const TeradataParameters& GetTeradataParameters() const{ return m_teradataParameters; }

    /**
     * <p>The parameters for Teradata.</p>
     */
    inline bool TeradataParametersHasBeenSet() const { return m_teradataParametersHasBeenSet; }

    /**
     * <p>The parameters for Teradata.</p>
     */
    inline void SetTeradataParameters(const TeradataParameters& value) { m_teradataParametersHasBeenSet = true; m_teradataParameters = value; }

    /**
     * <p>The parameters for Teradata.</p>
     */
    inline void SetTeradataParameters(TeradataParameters&& value) { m_teradataParametersHasBeenSet = true; m_teradataParameters = std::move(value); }

    /**
     * <p>The parameters for Teradata.</p>
     */
    inline DataSourceParameters& WithTeradataParameters(const TeradataParameters& value) { SetTeradataParameters(value); return *this;}

    /**
     * <p>The parameters for Teradata.</p>
     */
    inline DataSourceParameters& WithTeradataParameters(TeradataParameters&& value) { SetTeradataParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Twitter.</p>
     */
    inline const TwitterParameters& GetTwitterParameters() const{ return m_twitterParameters; }

    /**
     * <p>The parameters for Twitter.</p>
     */
    inline bool TwitterParametersHasBeenSet() const { return m_twitterParametersHasBeenSet; }

    /**
     * <p>The parameters for Twitter.</p>
     */
    inline void SetTwitterParameters(const TwitterParameters& value) { m_twitterParametersHasBeenSet = true; m_twitterParameters = value; }

    /**
     * <p>The parameters for Twitter.</p>
     */
    inline void SetTwitterParameters(TwitterParameters&& value) { m_twitterParametersHasBeenSet = true; m_twitterParameters = std::move(value); }

    /**
     * <p>The parameters for Twitter.</p>
     */
    inline DataSourceParameters& WithTwitterParameters(const TwitterParameters& value) { SetTwitterParameters(value); return *this;}

    /**
     * <p>The parameters for Twitter.</p>
     */
    inline DataSourceParameters& WithTwitterParameters(TwitterParameters&& value) { SetTwitterParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline const AmazonOpenSearchParameters& GetAmazonOpenSearchParameters() const{ return m_amazonOpenSearchParameters; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline bool AmazonOpenSearchParametersHasBeenSet() const { return m_amazonOpenSearchParametersHasBeenSet; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline void SetAmazonOpenSearchParameters(const AmazonOpenSearchParameters& value) { m_amazonOpenSearchParametersHasBeenSet = true; m_amazonOpenSearchParameters = value; }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline void SetAmazonOpenSearchParameters(AmazonOpenSearchParameters&& value) { m_amazonOpenSearchParametersHasBeenSet = true; m_amazonOpenSearchParameters = std::move(value); }

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline DataSourceParameters& WithAmazonOpenSearchParameters(const AmazonOpenSearchParameters& value) { SetAmazonOpenSearchParameters(value); return *this;}

    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline DataSourceParameters& WithAmazonOpenSearchParameters(AmazonOpenSearchParameters&& value) { SetAmazonOpenSearchParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for Exasol.</p>
     */
    inline const ExasolParameters& GetExasolParameters() const{ return m_exasolParameters; }

    /**
     * <p>The parameters for Exasol.</p>
     */
    inline bool ExasolParametersHasBeenSet() const { return m_exasolParametersHasBeenSet; }

    /**
     * <p>The parameters for Exasol.</p>
     */
    inline void SetExasolParameters(const ExasolParameters& value) { m_exasolParametersHasBeenSet = true; m_exasolParameters = value; }

    /**
     * <p>The parameters for Exasol.</p>
     */
    inline void SetExasolParameters(ExasolParameters&& value) { m_exasolParametersHasBeenSet = true; m_exasolParameters = std::move(value); }

    /**
     * <p>The parameters for Exasol.</p>
     */
    inline DataSourceParameters& WithExasolParameters(const ExasolParameters& value) { SetExasolParameters(value); return *this;}

    /**
     * <p>The parameters for Exasol.</p>
     */
    inline DataSourceParameters& WithExasolParameters(ExasolParameters&& value) { SetExasolParameters(std::move(value)); return *this;}


    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline const DatabricksParameters& GetDatabricksParameters() const{ return m_databricksParameters; }

    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline bool DatabricksParametersHasBeenSet() const { return m_databricksParametersHasBeenSet; }

    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline void SetDatabricksParameters(const DatabricksParameters& value) { m_databricksParametersHasBeenSet = true; m_databricksParameters = value; }

    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline void SetDatabricksParameters(DatabricksParameters&& value) { m_databricksParametersHasBeenSet = true; m_databricksParameters = std::move(value); }

    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline DataSourceParameters& WithDatabricksParameters(const DatabricksParameters& value) { SetDatabricksParameters(value); return *this;}

    /**
     * <p>The required parameters that are needed to connect to a Databricks data
     * source.</p>
     */
    inline DataSourceParameters& WithDatabricksParameters(DatabricksParameters&& value) { SetDatabricksParameters(std::move(value)); return *this;}

  private:

    AmazonElasticsearchParameters m_amazonElasticsearchParameters;
    bool m_amazonElasticsearchParametersHasBeenSet = false;

    AthenaParameters m_athenaParameters;
    bool m_athenaParametersHasBeenSet = false;

    AuroraParameters m_auroraParameters;
    bool m_auroraParametersHasBeenSet = false;

    AuroraPostgreSqlParameters m_auroraPostgreSqlParameters;
    bool m_auroraPostgreSqlParametersHasBeenSet = false;

    AwsIotAnalyticsParameters m_awsIotAnalyticsParameters;
    bool m_awsIotAnalyticsParametersHasBeenSet = false;

    JiraParameters m_jiraParameters;
    bool m_jiraParametersHasBeenSet = false;

    MariaDbParameters m_mariaDbParameters;
    bool m_mariaDbParametersHasBeenSet = false;

    MySqlParameters m_mySqlParameters;
    bool m_mySqlParametersHasBeenSet = false;

    OracleParameters m_oracleParameters;
    bool m_oracleParametersHasBeenSet = false;

    PostgreSqlParameters m_postgreSqlParameters;
    bool m_postgreSqlParametersHasBeenSet = false;

    PrestoParameters m_prestoParameters;
    bool m_prestoParametersHasBeenSet = false;

    RdsParameters m_rdsParameters;
    bool m_rdsParametersHasBeenSet = false;

    RedshiftParameters m_redshiftParameters;
    bool m_redshiftParametersHasBeenSet = false;

    S3Parameters m_s3Parameters;
    bool m_s3ParametersHasBeenSet = false;

    ServiceNowParameters m_serviceNowParameters;
    bool m_serviceNowParametersHasBeenSet = false;

    SnowflakeParameters m_snowflakeParameters;
    bool m_snowflakeParametersHasBeenSet = false;

    SparkParameters m_sparkParameters;
    bool m_sparkParametersHasBeenSet = false;

    SqlServerParameters m_sqlServerParameters;
    bool m_sqlServerParametersHasBeenSet = false;

    TeradataParameters m_teradataParameters;
    bool m_teradataParametersHasBeenSet = false;

    TwitterParameters m_twitterParameters;
    bool m_twitterParametersHasBeenSet = false;

    AmazonOpenSearchParameters m_amazonOpenSearchParameters;
    bool m_amazonOpenSearchParametersHasBeenSet = false;

    ExasolParameters m_exasolParameters;
    bool m_exasolParametersHasBeenSet = false;

    DatabricksParameters m_databricksParameters;
    bool m_databricksParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
