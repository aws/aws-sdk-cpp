/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsResult.h>
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

ListOrganizationRecommendationAccountsResult::ListOrganizationRecommendationAccountsResult()
{
}

ListOrganizationRecommendationAccountsResult::ListOrganizationRecommendationAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationRecommendationAccountsResult& ListOrganizationRecommendationAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountRecommendationLifecycleSummaries"))
  {
    Aws::Utils::Array<JsonView> accountRecommendationLifecycleSummariesJsonList = jsonValue.GetArray("accountRecommendationLifecycleSummaries");
    for(unsigned accountRecommendationLifecycleSummariesIndex = 0; accountRecommendationLifecycleSummariesIndex < accountRecommendationLifecycleSummariesJsonList.GetLength(); ++accountRecommendationLifecycleSummariesIndex)
    {
      m_accountRecommendationLifecycleSummaries.push_back(accountRecommendationLifecycleSummariesJsonList[accountRecommendationLifecycleSummariesIndex].AsObject());
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
