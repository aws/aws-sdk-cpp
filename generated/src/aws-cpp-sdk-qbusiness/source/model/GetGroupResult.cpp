/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGroupResult::GetGroupResult()
{
}

GetGroupResult::GetGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGroupResult& GetGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("statusHistory"))
  {
    Aws::Utils::Array<JsonView> statusHistoryJsonList = jsonValue.GetArray("statusHistory");
    for(unsigned statusHistoryIndex = 0; statusHistoryIndex < statusHistoryJsonList.GetLength(); ++statusHistoryIndex)
    {
      m_statusHistory.push_back(statusHistoryJsonList[statusHistoryIndex].AsObject());
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
