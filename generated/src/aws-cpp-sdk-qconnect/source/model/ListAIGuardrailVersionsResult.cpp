/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ListAIGuardrailVersionsResult.h>
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

ListAIGuardrailVersionsResult::ListAIGuardrailVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAIGuardrailVersionsResult& ListAIGuardrailVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("aiGuardrailVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> aiGuardrailVersionSummariesJsonList = jsonValue.GetArray("aiGuardrailVersionSummaries");
    for(unsigned aiGuardrailVersionSummariesIndex = 0; aiGuardrailVersionSummariesIndex < aiGuardrailVersionSummariesJsonList.GetLength(); ++aiGuardrailVersionSummariesIndex)
    {
      m_aiGuardrailVersionSummaries.push_back(aiGuardrailVersionSummariesJsonList[aiGuardrailVersionSummariesIndex].AsObject());
    }
    m_aiGuardrailVersionSummariesHasBeenSet = true;
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
