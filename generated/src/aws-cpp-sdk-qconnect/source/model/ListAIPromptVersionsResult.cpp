/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ListAIPromptVersionsResult.h>
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

ListAIPromptVersionsResult::ListAIPromptVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAIPromptVersionsResult& ListAIPromptVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("aiPromptVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> aiPromptVersionSummariesJsonList = jsonValue.GetArray("aiPromptVersionSummaries");
    for(unsigned aiPromptVersionSummariesIndex = 0; aiPromptVersionSummariesIndex < aiPromptVersionSummariesJsonList.GetLength(); ++aiPromptVersionSummariesIndex)
    {
      m_aiPromptVersionSummaries.push_back(aiPromptVersionSummariesJsonList[aiPromptVersionSummariesIndex].AsObject());
    }
    m_aiPromptVersionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
