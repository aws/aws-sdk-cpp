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
#include <aws/quicksight/model/StarburstParameters.h>
#include <aws/quicksight/model/TrinoParameters.h>
#include <aws/quicksight/model/BigQueryParameters.h>
#include <aws/quicksight/model/ImpalaParameters.h>
#include <aws/quicksight/model/CustomConnectionParameters.h>
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
    AWS_QUICKSIGHT_API DataSourceParameters() = default;
    AWS_QUICKSIGHT_API DataSourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline const AmazonElasticsearchParameters& GetAmazonElasticsearchParameters() const { return m_amazonElasticsearchParameters; }
    inline bool AmazonElasticsearchParametersHasBeenSet() const { return m_amazonElasticsearchParametersHasBeenSet; }
    template<typename AmazonElasticsearchParametersT = AmazonElasticsearchParameters>
    void SetAmazonElasticsearchParameters(AmazonElasticsearchParametersT&& value) { m_amazonElasticsearchParametersHasBeenSet = true; m_amazonElasticsearchParameters = std::forward<AmazonElasticsearchParametersT>(value); }
    template<typename AmazonElasticsearchParametersT = AmazonElasticsearchParameters>
    DataSourceParameters& WithAmazonElasticsearchParameters(AmazonElasticsearchParametersT&& value) { SetAmazonElasticsearchParameters(std::forward<AmazonElasticsearchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Amazon Athena.</p>
     */
    inline const AthenaParameters& GetAthenaParameters() const { return m_athenaParameters; }
    inline bool AthenaParametersHasBeenSet() const { return m_athenaParametersHasBeenSet; }
    template<typename AthenaParametersT = AthenaParameters>
    void SetAthenaParameters(AthenaParametersT&& value) { m_athenaParametersHasBeenSet = true; m_athenaParameters = std::forward<AthenaParametersT>(value); }
    template<typename AthenaParametersT = AthenaParameters>
    DataSourceParameters& WithAthenaParameters(AthenaParametersT&& value) { SetAthenaParameters(std::forward<AthenaParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Amazon Aurora MySQL.</p>
     */
    inline const AuroraParameters& GetAuroraParameters() const { return m_auroraParameters; }
    inline bool AuroraParametersHasBeenSet() const { return m_auroraParametersHasBeenSet; }
    template<typename AuroraParametersT = AuroraParameters>
    void SetAuroraParameters(AuroraParametersT&& value) { m_auroraParametersHasBeenSet = true; m_auroraParameters = std::forward<AuroraParametersT>(value); }
    template<typename AuroraParametersT = AuroraParameters>
    DataSourceParameters& WithAuroraParameters(AuroraParametersT&& value) { SetAuroraParameters(std::forward<AuroraParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Amazon Aurora.</p>
     */
    inline const AuroraPostgreSqlParameters& GetAuroraPostgreSqlParameters() const { return m_auroraPostgreSqlParameters; }
    inline bool AuroraPostgreSqlParametersHasBeenSet() const { return m_auroraPostgreSqlParametersHasBeenSet; }
    template<typename AuroraPostgreSqlParametersT = AuroraPostgreSqlParameters>
    void SetAuroraPostgreSqlParameters(AuroraPostgreSqlParametersT&& value) { m_auroraPostgreSqlParametersHasBeenSet = true; m_auroraPostgreSqlParameters = std::forward<AuroraPostgreSqlParametersT>(value); }
    template<typename AuroraPostgreSqlParametersT = AuroraPostgreSqlParameters>
    DataSourceParameters& WithAuroraPostgreSqlParameters(AuroraPostgreSqlParametersT&& value) { SetAuroraPostgreSqlParameters(std::forward<AuroraPostgreSqlParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for IoT Analytics.</p>
     */
    inline const AwsIotAnalyticsParameters& GetAwsIotAnalyticsParameters() const { return m_awsIotAnalyticsParameters; }
    inline bool AwsIotAnalyticsParametersHasBeenSet() const { return m_awsIotAnalyticsParametersHasBeenSet; }
    template<typename AwsIotAnalyticsParametersT = AwsIotAnalyticsParameters>
    void SetAwsIotAnalyticsParameters(AwsIotAnalyticsParametersT&& value) { m_awsIotAnalyticsParametersHasBeenSet = true; m_awsIotAnalyticsParameters = std::forward<AwsIotAnalyticsParametersT>(value); }
    template<typename AwsIotAnalyticsParametersT = AwsIotAnalyticsParameters>
    DataSourceParameters& WithAwsIotAnalyticsParameters(AwsIotAnalyticsParametersT&& value) { SetAwsIotAnalyticsParameters(std::forward<AwsIotAnalyticsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Jira.</p>
     */
    inline const JiraParameters& GetJiraParameters() const { return m_jiraParameters; }
    inline bool JiraParametersHasBeenSet() const { return m_jiraParametersHasBeenSet; }
    template<typename JiraParametersT = JiraParameters>
    void SetJiraParameters(JiraParametersT&& value) { m_jiraParametersHasBeenSet = true; m_jiraParameters = std::forward<JiraParametersT>(value); }
    template<typename JiraParametersT = JiraParameters>
    DataSourceParameters& WithJiraParameters(JiraParametersT&& value) { SetJiraParameters(std::forward<JiraParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for MariaDB.</p>
     */
    inline const MariaDbParameters& GetMariaDbParameters() const { return m_mariaDbParameters; }
    inline bool MariaDbParametersHasBeenSet() const { return m_mariaDbParametersHasBeenSet; }
    template<typename MariaDbParametersT = MariaDbParameters>
    void SetMariaDbParameters(MariaDbParametersT&& value) { m_mariaDbParametersHasBeenSet = true; m_mariaDbParameters = std::forward<MariaDbParametersT>(value); }
    template<typename MariaDbParametersT = MariaDbParameters>
    DataSourceParameters& WithMariaDbParameters(MariaDbParametersT&& value) { SetMariaDbParameters(std::forward<MariaDbParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for MySQL.</p>
     */
    inline const MySqlParameters& GetMySqlParameters() const { return m_mySqlParameters; }
    inline bool MySqlParametersHasBeenSet() const { return m_mySqlParametersHasBeenSet; }
    template<typename MySqlParametersT = MySqlParameters>
    void SetMySqlParameters(MySqlParametersT&& value) { m_mySqlParametersHasBeenSet = true; m_mySqlParameters = std::forward<MySqlParametersT>(value); }
    template<typename MySqlParametersT = MySqlParameters>
    DataSourceParameters& WithMySqlParameters(MySqlParametersT&& value) { SetMySqlParameters(std::forward<MySqlParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Oracle.</p>
     */
    inline const OracleParameters& GetOracleParameters() const { return m_oracleParameters; }
    inline bool OracleParametersHasBeenSet() const { return m_oracleParametersHasBeenSet; }
    template<typename OracleParametersT = OracleParameters>
    void SetOracleParameters(OracleParametersT&& value) { m_oracleParametersHasBeenSet = true; m_oracleParameters = std::forward<OracleParametersT>(value); }
    template<typename OracleParametersT = OracleParameters>
    DataSourceParameters& WithOracleParameters(OracleParametersT&& value) { SetOracleParameters(std::forward<OracleParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for PostgreSQL.</p>
     */
    inline const PostgreSqlParameters& GetPostgreSqlParameters() const { return m_postgreSqlParameters; }
    inline bool PostgreSqlParametersHasBeenSet() const { return m_postgreSqlParametersHasBeenSet; }
    template<typename PostgreSqlParametersT = PostgreSqlParameters>
    void SetPostgreSqlParameters(PostgreSqlParametersT&& value) { m_postgreSqlParametersHasBeenSet = true; m_postgreSqlParameters = std::forward<PostgreSqlParametersT>(value); }
    template<typename PostgreSqlParametersT = PostgreSqlParameters>
    DataSourceParameters& WithPostgreSqlParameters(PostgreSqlParametersT&& value) { SetPostgreSqlParameters(std::forward<PostgreSqlParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Presto.</p>
     */
    inline const PrestoParameters& GetPrestoParameters() const { return m_prestoParameters; }
    inline bool PrestoParametersHasBeenSet() const { return m_prestoParametersHasBeenSet; }
    template<typename PrestoParametersT = PrestoParameters>
    void SetPrestoParameters(PrestoParametersT&& value) { m_prestoParametersHasBeenSet = true; m_prestoParameters = std::forward<PrestoParametersT>(value); }
    template<typename PrestoParametersT = PrestoParameters>
    DataSourceParameters& WithPrestoParameters(PrestoParametersT&& value) { SetPrestoParameters(std::forward<PrestoParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Amazon RDS.</p>
     */
    inline const RdsParameters& GetRdsParameters() const { return m_rdsParameters; }
    inline bool RdsParametersHasBeenSet() const { return m_rdsParametersHasBeenSet; }
    template<typename RdsParametersT = RdsParameters>
    void SetRdsParameters(RdsParametersT&& value) { m_rdsParametersHasBeenSet = true; m_rdsParameters = std::forward<RdsParametersT>(value); }
    template<typename RdsParametersT = RdsParameters>
    DataSourceParameters& WithRdsParameters(RdsParametersT&& value) { SetRdsParameters(std::forward<RdsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Amazon Redshift.</p>
     */
    inline const RedshiftParameters& GetRedshiftParameters() const { return m_redshiftParameters; }
    inline bool RedshiftParametersHasBeenSet() const { return m_redshiftParametersHasBeenSet; }
    template<typename RedshiftParametersT = RedshiftParameters>
    void SetRedshiftParameters(RedshiftParametersT&& value) { m_redshiftParametersHasBeenSet = true; m_redshiftParameters = std::forward<RedshiftParametersT>(value); }
    template<typename RedshiftParametersT = RedshiftParameters>
    DataSourceParameters& WithRedshiftParameters(RedshiftParametersT&& value) { SetRedshiftParameters(std::forward<RedshiftParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for S3.</p>
     */
    inline const S3Parameters& GetS3Parameters() const { return m_s3Parameters; }
    inline bool S3ParametersHasBeenSet() const { return m_s3ParametersHasBeenSet; }
    template<typename S3ParametersT = S3Parameters>
    void SetS3Parameters(S3ParametersT&& value) { m_s3ParametersHasBeenSet = true; m_s3Parameters = std::forward<S3ParametersT>(value); }
    template<typename S3ParametersT = S3Parameters>
    DataSourceParameters& WithS3Parameters(S3ParametersT&& value) { SetS3Parameters(std::forward<S3ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for ServiceNow.</p>
     */
    inline const ServiceNowParameters& GetServiceNowParameters() const { return m_serviceNowParameters; }
    inline bool ServiceNowParametersHasBeenSet() const { return m_serviceNowParametersHasBeenSet; }
    template<typename ServiceNowParametersT = ServiceNowParameters>
    void SetServiceNowParameters(ServiceNowParametersT&& value) { m_serviceNowParametersHasBeenSet = true; m_serviceNowParameters = std::forward<ServiceNowParametersT>(value); }
    template<typename ServiceNowParametersT = ServiceNowParameters>
    DataSourceParameters& WithServiceNowParameters(ServiceNowParametersT&& value) { SetServiceNowParameters(std::forward<ServiceNowParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Snowflake.</p>
     */
    inline const SnowflakeParameters& GetSnowflakeParameters() const { return m_snowflakeParameters; }
    inline bool SnowflakeParametersHasBeenSet() const { return m_snowflakeParametersHasBeenSet; }
    template<typename SnowflakeParametersT = SnowflakeParameters>
    void SetSnowflakeParameters(SnowflakeParametersT&& value) { m_snowflakeParametersHasBeenSet = true; m_snowflakeParameters = std::forward<SnowflakeParametersT>(value); }
    template<typename SnowflakeParametersT = SnowflakeParameters>
    DataSourceParameters& WithSnowflakeParameters(SnowflakeParametersT&& value) { SetSnowflakeParameters(std::forward<SnowflakeParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Spark.</p>
     */
    inline const SparkParameters& GetSparkParameters() const { return m_sparkParameters; }
    inline bool SparkParametersHasBeenSet() const { return m_sparkParametersHasBeenSet; }
    template<typename SparkParametersT = SparkParameters>
    void SetSparkParameters(SparkParametersT&& value) { m_sparkParametersHasBeenSet = true; m_sparkParameters = std::forward<SparkParametersT>(value); }
    template<typename SparkParametersT = SparkParameters>
    DataSourceParameters& WithSparkParameters(SparkParametersT&& value) { SetSparkParameters(std::forward<SparkParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for SQL Server.</p>
     */
    inline const SqlServerParameters& GetSqlServerParameters() const { return m_sqlServerParameters; }
    inline bool SqlServerParametersHasBeenSet() const { return m_sqlServerParametersHasBeenSet; }
    template<typename SqlServerParametersT = SqlServerParameters>
    void SetSqlServerParameters(SqlServerParametersT&& value) { m_sqlServerParametersHasBeenSet = true; m_sqlServerParameters = std::forward<SqlServerParametersT>(value); }
    template<typename SqlServerParametersT = SqlServerParameters>
    DataSourceParameters& WithSqlServerParameters(SqlServerParametersT&& value) { SetSqlServerParameters(std::forward<SqlServerParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Teradata.</p>
     */
    inline const TeradataParameters& GetTeradataParameters() const { return m_teradataParameters; }
    inline bool TeradataParametersHasBeenSet() const { return m_teradataParametersHasBeenSet; }
    template<typename TeradataParametersT = TeradataParameters>
    void SetTeradataParameters(TeradataParametersT&& value) { m_teradataParametersHasBeenSet = true; m_teradataParameters = std::forward<TeradataParametersT>(value); }
    template<typename TeradataParametersT = TeradataParameters>
    DataSourceParameters& WithTeradataParameters(TeradataParametersT&& value) { SetTeradataParameters(std::forward<TeradataParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Twitter.</p>
     */
    inline const TwitterParameters& GetTwitterParameters() const { return m_twitterParameters; }
    inline bool TwitterParametersHasBeenSet() const { return m_twitterParametersHasBeenSet; }
    template<typename TwitterParametersT = TwitterParameters>
    void SetTwitterParameters(TwitterParametersT&& value) { m_twitterParametersHasBeenSet = true; m_twitterParameters = std::forward<TwitterParametersT>(value); }
    template<typename TwitterParametersT = TwitterParameters>
    DataSourceParameters& WithTwitterParameters(TwitterParametersT&& value) { SetTwitterParameters(std::forward<TwitterParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for OpenSearch.</p>
     */
    inline const AmazonOpenSearchParameters& GetAmazonOpenSearchParameters() const { return m_amazonOpenSearchParameters; }
    inline bool AmazonOpenSearchParametersHasBeenSet() const { return m_amazonOpenSearchParametersHasBeenSet; }
    template<typename AmazonOpenSearchParametersT = AmazonOpenSearchParameters>
    void SetAmazonOpenSearchParameters(AmazonOpenSearchParametersT&& value) { m_amazonOpenSearchParametersHasBeenSet = true; m_amazonOpenSearchParameters = std::forward<AmazonOpenSearchParametersT>(value); }
    template<typename AmazonOpenSearchParametersT = AmazonOpenSearchParameters>
    DataSourceParameters& WithAmazonOpenSearchParameters(AmazonOpenSearchParametersT&& value) { SetAmazonOpenSearchParameters(std::forward<AmazonOpenSearchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Exasol.</p>
     */
    inline const ExasolParameters& GetExasolParameters() const { return m_exasolParameters; }
    inline bool ExasolParametersHasBeenSet() const { return m_exasolParametersHasBeenSet; }
    template<typename ExasolParametersT = ExasolParameters>
    void SetExasolParameters(ExasolParametersT&& value) { m_exasolParametersHasBeenSet = true; m_exasolParameters = std::forward<ExasolParametersT>(value); }
    template<typename ExasolParametersT = ExasolParameters>
    DataSourceParameters& WithExasolParameters(ExasolParametersT&& value) { SetExasolParameters(std::forward<ExasolParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are required to connect to a Databricks data source.</p>
     */
    inline const DatabricksParameters& GetDatabricksParameters() const { return m_databricksParameters; }
    inline bool DatabricksParametersHasBeenSet() const { return m_databricksParametersHasBeenSet; }
    template<typename DatabricksParametersT = DatabricksParameters>
    void SetDatabricksParameters(DatabricksParametersT&& value) { m_databricksParametersHasBeenSet = true; m_databricksParameters = std::forward<DatabricksParametersT>(value); }
    template<typename DatabricksParametersT = DatabricksParameters>
    DataSourceParameters& WithDatabricksParameters(DatabricksParametersT&& value) { SetDatabricksParameters(std::forward<DatabricksParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are required to connect to a Starburst data source.</p>
     */
    inline const StarburstParameters& GetStarburstParameters() const { return m_starburstParameters; }
    inline bool StarburstParametersHasBeenSet() const { return m_starburstParametersHasBeenSet; }
    template<typename StarburstParametersT = StarburstParameters>
    void SetStarburstParameters(StarburstParametersT&& value) { m_starburstParametersHasBeenSet = true; m_starburstParameters = std::forward<StarburstParametersT>(value); }
    template<typename StarburstParametersT = StarburstParameters>
    DataSourceParameters& WithStarburstParameters(StarburstParametersT&& value) { SetStarburstParameters(std::forward<StarburstParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are required to connect to a Trino data source.</p>
     */
    inline const TrinoParameters& GetTrinoParameters() const { return m_trinoParameters; }
    inline bool TrinoParametersHasBeenSet() const { return m_trinoParametersHasBeenSet; }
    template<typename TrinoParametersT = TrinoParameters>
    void SetTrinoParameters(TrinoParametersT&& value) { m_trinoParametersHasBeenSet = true; m_trinoParameters = std::forward<TrinoParametersT>(value); }
    template<typename TrinoParametersT = TrinoParameters>
    DataSourceParameters& WithTrinoParameters(TrinoParametersT&& value) { SetTrinoParameters(std::forward<TrinoParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are required to connect to a Google BigQuery data
     * source.</p>
     */
    inline const BigQueryParameters& GetBigQueryParameters() const { return m_bigQueryParameters; }
    inline bool BigQueryParametersHasBeenSet() const { return m_bigQueryParametersHasBeenSet; }
    template<typename BigQueryParametersT = BigQueryParameters>
    void SetBigQueryParameters(BigQueryParametersT&& value) { m_bigQueryParametersHasBeenSet = true; m_bigQueryParameters = std::forward<BigQueryParametersT>(value); }
    template<typename BigQueryParametersT = BigQueryParameters>
    DataSourceParameters& WithBigQueryParameters(BigQueryParametersT&& value) { SetBigQueryParameters(std::forward<BigQueryParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for Impala.</p>
     */
    inline const ImpalaParameters& GetImpalaParameters() const { return m_impalaParameters; }
    inline bool ImpalaParametersHasBeenSet() const { return m_impalaParametersHasBeenSet; }
    template<typename ImpalaParametersT = ImpalaParameters>
    void SetImpalaParameters(ImpalaParametersT&& value) { m_impalaParametersHasBeenSet = true; m_impalaParameters = std::forward<ImpalaParametersT>(value); }
    template<typename ImpalaParametersT = ImpalaParameters>
    DataSourceParameters& WithImpalaParameters(ImpalaParametersT&& value) { SetImpalaParameters(std::forward<ImpalaParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for custom connectors.</p>
     */
    inline const CustomConnectionParameters& GetCustomConnectionParameters() const { return m_customConnectionParameters; }
    inline bool CustomConnectionParametersHasBeenSet() const { return m_customConnectionParametersHasBeenSet; }
    template<typename CustomConnectionParametersT = CustomConnectionParameters>
    void SetCustomConnectionParameters(CustomConnectionParametersT&& value) { m_customConnectionParametersHasBeenSet = true; m_customConnectionParameters = std::forward<CustomConnectionParametersT>(value); }
    template<typename CustomConnectionParametersT = CustomConnectionParameters>
    DataSourceParameters& WithCustomConnectionParameters(CustomConnectionParametersT&& value) { SetCustomConnectionParameters(std::forward<CustomConnectionParametersT>(value)); return *this;}
    ///@}
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

    StarburstParameters m_starburstParameters;
    bool m_starburstParametersHasBeenSet = false;

    TrinoParameters m_trinoParameters;
    bool m_trinoParametersHasBeenSet = false;

    BigQueryParameters m_bigQueryParameters;
    bool m_bigQueryParametersHasBeenSet = false;

    ImpalaParameters m_impalaParameters;
    bool m_impalaParametersHasBeenSet = false;

    CustomConnectionParameters m_customConnectionParameters;
    bool m_customConnectionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
