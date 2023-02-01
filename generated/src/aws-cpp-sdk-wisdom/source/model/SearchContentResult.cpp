/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/SearchContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchContentResult::SearchContentResult()
{
}

SearchContentResult::SearchContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchContentResult& SearchContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contentSummaries"))
  {
    Aws::Utils::Array<JsonView> contentSummariesJsonList = jsonValue.GetArray("contentSummaries");
    for(unsigned contentSummariesIndex = 0; contentSummariesIndex < contentSummariesJsonList.GetLength(); ++contentSummariesIndex)
    {
      m_contentSummaries.push_back(contentSummariesJsonList[contentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
