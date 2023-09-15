/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetPropertygraphStreamResult.h>
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

GetPropertygraphStreamResult::GetPropertygraphStreamResult() : 
    m_lastTrxTimestampInMillis(0),
    m_totalRecords(0)
{
}

GetPropertygraphStreamResult::GetPropertygraphStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastTrxTimestampInMillis(0),
    m_totalRecords(0)
{
  *this = result;
}

GetPropertygraphStreamResult& GetPropertygraphStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lastEventId"))
  {
    Aws::Map<Aws::String, JsonView> lastEventIdJsonMap = jsonValue.GetObject("lastEventId").GetAllObjects();
    for(auto& lastEventIdItem : lastEventIdJsonMap)
    {
      m_lastEventId[lastEventIdItem.first] = lastEventIdItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("lastTrxTimestamp"))
  {
    m_lastTrxTimestampInMillis = jsonValue.GetInt64("lastTrxTimestamp");

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

  }

  if(jsonValue.ValueExists("records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("totalRecords"))
  {
    m_totalRecords = jsonValue.GetInteger("totalRecords");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
