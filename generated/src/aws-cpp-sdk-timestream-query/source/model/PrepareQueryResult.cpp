/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/PrepareQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PrepareQueryResult::PrepareQueryResult()
{
}

PrepareQueryResult::PrepareQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PrepareQueryResult& PrepareQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryString"))
  {
    m_queryString = jsonValue.GetString("QueryString");

  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
  }



  return *this;
}
