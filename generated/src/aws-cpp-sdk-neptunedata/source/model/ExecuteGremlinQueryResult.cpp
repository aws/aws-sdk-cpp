/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteGremlinQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteGremlinQueryResult::ExecuteGremlinQueryResult()
{
}

ExecuteGremlinQueryResult::ExecuteGremlinQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExecuteGremlinQueryResult& ExecuteGremlinQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetObject("result");

  }

  if(jsonValue.ValueExists("meta"))
  {
    m_meta = jsonValue.GetObject("meta");

  }



  return *this;
}
