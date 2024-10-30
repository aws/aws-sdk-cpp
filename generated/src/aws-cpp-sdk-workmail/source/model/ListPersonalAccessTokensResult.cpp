/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListPersonalAccessTokensResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPersonalAccessTokensResult::ListPersonalAccessTokensResult()
{
}

ListPersonalAccessTokensResult::ListPersonalAccessTokensResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPersonalAccessTokensResult& ListPersonalAccessTokensResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("PersonalAccessTokenSummaries"))
  {
    Aws::Utils::Array<JsonView> personalAccessTokenSummariesJsonList = jsonValue.GetArray("PersonalAccessTokenSummaries");
    for(unsigned personalAccessTokenSummariesIndex = 0; personalAccessTokenSummariesIndex < personalAccessTokenSummariesJsonList.GetLength(); ++personalAccessTokenSummariesIndex)
    {
      m_personalAccessTokenSummaries.push_back(personalAccessTokenSummariesJsonList[personalAccessTokenSummariesIndex].AsObject());
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
