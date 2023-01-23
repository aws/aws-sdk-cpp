/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class DataSourceType
  {
    NOT_SET,
    ADOBE_ANALYTICS,
    AMAZON_ELASTICSEARCH,
    ATHENA,
    AURORA,
    AURORA_POSTGRESQL,
    AWS_IOT_ANALYTICS,
    GITHUB,
    JIRA,
    MARIADB,
    MYSQL,
    ORACLE,
    POSTGRESQL,
    PRESTO,
    REDSHIFT,
    S3,
    SALESFORCE,
    SERVICENOW,
    SNOWFLAKE,
    SPARK,
    SQLSERVER,
    TERADATA,
    TWITTER,
    TIMESTREAM,
    AMAZON_OPENSEARCH,
    EXASOL,
    DATABRICKS
  };

namespace DataSourceTypeMapper
{
AWS_QUICKSIGHT_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
