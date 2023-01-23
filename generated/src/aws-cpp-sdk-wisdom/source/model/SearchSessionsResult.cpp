/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/SearchSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchSessionsResult::SearchSessionsResult()
{
}

SearchSessionsResult::SearchSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchSessionsResult& SearchSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sessionSummaries"))
  {
    Aws::Utils::Array<JsonView> sessionSummariesJsonList = jsonValue.GetArray("sessionSummaries");
    for(unsigned sessionSummariesIndex = 0; sessionSummariesIndex < sessionSummariesJsonList.GetLength(); ++sessionSummariesIndex)
    {
      m_sessionSummaries.push_back(sessionSummariesJsonList[sessionSummariesIndex].AsObject());
    }
  }



  return *this;
}
