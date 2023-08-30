/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ListGremlinQueriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGremlinQueriesResult::ListGremlinQueriesResult() : 
    m_acceptedQueryCount(0),
    m_runningQueryCount(0)
{
}

ListGremlinQueriesResult::ListGremlinQueriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_acceptedQueryCount(0),
    m_runningQueryCount(0)
{
  *this = result;
}

ListGremlinQueriesResult& ListGremlinQueriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acceptedQueryCount"))
  {
    m_acceptedQueryCount = jsonValue.GetInteger("acceptedQueryCount");

  }

  if(jsonValue.ValueExists("runningQueryCount"))
  {
    m_runningQueryCount = jsonValue.GetInteger("runningQueryCount");

  }

  if(jsonValue.ValueExists("queries"))
  {
    Aws::Utils::Array<JsonView> queriesJsonList = jsonValue.GetArray("queries");
    for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
    {
      m_queries.push_back(queriesJsonList[queriesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
