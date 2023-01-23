/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/DescribeStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStatementResult::DescribeStatementResult() : 
    m_duration(0),
    m_hasResultSet(false),
    m_redshiftPid(0),
    m_redshiftQueryId(0),
    m_resultRows(0),
    m_resultSize(0),
    m_status(StatusString::NOT_SET)
{
}

DescribeStatementResult::DescribeStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_duration(0),
    m_hasResultSet(false),
    m_redshiftPid(0),
    m_redshiftQueryId(0),
    m_resultRows(0),
    m_resultSize(0),
    m_status(StatusString::NOT_SET)
{
  *this = result;
}

DescribeStatementResult& DescribeStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");

  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

  }

  if(jsonValue.ValueExists("HasResultSet"))
  {
    m_hasResultSet = jsonValue.GetBool("HasResultSet");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("QueryParameters"))
  {
    Aws::Utils::Array<JsonView> queryParametersJsonList = jsonValue.GetArray("QueryParameters");
    for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
    {
      m_queryParameters.push_back(queryParametersJsonList[queryParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

  }

  if(jsonValue.ValueExists("RedshiftPid"))
  {
    m_redshiftPid = jsonValue.GetInt64("RedshiftPid");

  }

  if(jsonValue.ValueExists("RedshiftQueryId"))
  {
    m_redshiftQueryId = jsonValue.GetInt64("RedshiftQueryId");

  }

  if(jsonValue.ValueExists("ResultRows"))
  {
    m_resultRows = jsonValue.GetInt64("ResultRows");

  }

  if(jsonValue.ValueExists("ResultSize"))
  {
    m_resultSize = jsonValue.GetInt64("ResultSize");

  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusStringMapper::GetStatusStringForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("SubStatements"))
  {
    Aws::Utils::Array<JsonView> subStatementsJsonList = jsonValue.GetArray("SubStatements");
    for(unsigned subStatementsIndex = 0; subStatementsIndex < subStatementsJsonList.GetLength(); ++subStatementsIndex)
    {
      m_subStatements.push_back(subStatementsJsonList[subStatementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("WorkgroupName"))
  {
    m_workgroupName = jsonValue.GetString("WorkgroupName");

  }



  return *this;
}
