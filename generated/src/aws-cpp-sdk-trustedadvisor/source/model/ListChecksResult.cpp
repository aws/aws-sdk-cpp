/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListChecksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChecksResult::ListChecksResult()
{
}

ListChecksResult::ListChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChecksResult& ListChecksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("checkSummaries"))
  {
    Aws::Utils::Array<JsonView> checkSummariesJsonList = jsonValue.GetArray("checkSummaries");
    for(unsigned checkSummariesIndex = 0; checkSummariesIndex < checkSummariesJsonList.GetLength(); ++checkSummariesIndex)
    {
      m_checkSummaries.push_back(checkSummariesJsonList[checkSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
