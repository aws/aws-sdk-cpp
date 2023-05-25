/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ListFraudstersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFraudstersResult::ListFraudstersResult()
{
}

ListFraudstersResult::ListFraudstersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFraudstersResult& ListFraudstersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FraudsterSummaries"))
  {
    Aws::Utils::Array<JsonView> fraudsterSummariesJsonList = jsonValue.GetArray("FraudsterSummaries");
    for(unsigned fraudsterSummariesIndex = 0; fraudsterSummariesIndex < fraudsterSummariesJsonList.GetLength(); ++fraudsterSummariesIndex)
    {
      m_fraudsterSummaries.push_back(fraudsterSummariesJsonList[fraudsterSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
