/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ListQuickResponsesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuickResponsesResult::ListQuickResponsesResult()
{
}

ListQuickResponsesResult::ListQuickResponsesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQuickResponsesResult& ListQuickResponsesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("quickResponseSummaries"))
  {
    Aws::Utils::Array<JsonView> quickResponseSummariesJsonList = jsonValue.GetArray("quickResponseSummaries");
    for(unsigned quickResponseSummariesIndex = 0; quickResponseSummariesIndex < quickResponseSummariesJsonList.GetLength(); ++quickResponseSummariesIndex)
    {
      m_quickResponseSummaries.push_back(quickResponseSummariesJsonList[quickResponseSummariesIndex].AsObject());
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
