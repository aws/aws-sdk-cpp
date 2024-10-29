/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/GetStatementResultV2Result.h>
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

GetStatementResultV2Result::GetStatementResultV2Result() : 
    m_resultFormat(ResultFormatString::NOT_SET),
    m_totalNumRows(0)
{
}

GetStatementResultV2Result::GetStatementResultV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetStatementResultV2Result()
{
  *this = result;
}

GetStatementResultV2Result& GetStatementResultV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ColumnMetadata"))
  {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("ColumnMetadata");
    for(unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex)
    {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ResultFormat"))
  {
    m_resultFormat = ResultFormatStringMapper::GetResultFormatStringForName(jsonValue.GetString("ResultFormat"));

  }

  if(jsonValue.ValueExists("TotalNumRows"))
  {
    m_totalNumRows = jsonValue.GetInt64("TotalNumRows");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
