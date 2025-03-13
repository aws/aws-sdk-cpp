/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/DescribeStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStatementResult::DescribeStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStatementResult& DescribeStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");
    m_clusterIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");
    m_dbUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasResultSet"))
  {
    m_hasResultSet = jsonValue.GetBool("HasResultSet");
    m_hasResultSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryParameters"))
  {
    Aws::Utils::Array<JsonView> queryParametersJsonList = jsonValue.GetArray("QueryParameters");
    for(unsigned queryParametersIndex = 0; queryParametersIndex < queryParametersJsonList.GetLength(); ++queryParametersIndex)
    {
      m_queryParameters.push_back(queryParametersJsonList[queryParametersIndex].AsObject());
    }
    m_queryParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");
    m_queryStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftPid"))
  {
    m_redshiftPid = jsonValue.GetInt64("RedshiftPid");
    m_redshiftPidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedshiftQueryId"))
  {
    m_redshiftQueryId = jsonValue.GetInt64("RedshiftQueryId");
    m_redshiftQueryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultFormat"))
  {
    m_resultFormat = ResultFormatStringMapper::GetResultFormatStringForName(jsonValue.GetString("ResultFormat"));
    m_resultFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultRows"))
  {
    m_resultRows = jsonValue.GetInt64("ResultRows");
    m_resultRowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultSize"))
  {
    m_resultSize = jsonValue.GetInt64("ResultSize");
    m_resultSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusStringMapper::GetStatusStringForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubStatements"))
  {
    Aws::Utils::Array<JsonView> subStatementsJsonList = jsonValue.GetArray("SubStatements");
    for(unsigned subStatementsIndex = 0; subStatementsIndex < subStatementsJsonList.GetLength(); ++subStatementsIndex)
    {
      m_subStatements.push_back(subStatementsJsonList[subStatementsIndex].AsObject());
    }
    m_subStatementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkgroupName"))
  {
    m_workgroupName = jsonValue.GetString("WorkgroupName");
    m_workgroupNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
