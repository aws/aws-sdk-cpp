/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResult::GetQueryResult() : 
    m_waited(0),
    m_elapsed(0),
    m_state(QueryState::NOT_SET)
{
}

GetQueryResult::GetQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_waited(0),
    m_elapsed(0),
    m_state(QueryState::NOT_SET)
{
  *this = result;
}

GetQueryResult& GetQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

  }

  if(jsonValue.ValueExists("waited"))
  {
    m_waited = jsonValue.GetInteger("waited");

  }

  if(jsonValue.ValueExists("elapsed"))
  {
    m_elapsed = jsonValue.GetInteger("elapsed");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = QueryStateMapper::GetQueryStateForName(jsonValue.GetString("state"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
