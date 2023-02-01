/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ListAssistantsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssistantsResult::ListAssistantsResult()
{
}

ListAssistantsResult::ListAssistantsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssistantsResult& ListAssistantsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assistantSummaries"))
  {
    Aws::Utils::Array<JsonView> assistantSummariesJsonList = jsonValue.GetArray("assistantSummaries");
    for(unsigned assistantSummariesIndex = 0; assistantSummariesIndex < assistantSummariesJsonList.GetLength(); ++assistantSummariesIndex)
    {
      m_assistantSummaries.push_back(assistantSummariesJsonList[assistantSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
