/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListOrganizationRecommendationsResult.h>
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

ListOrganizationRecommendationsResult::ListOrganizationRecommendationsResult()
{
}

ListOrganizationRecommendationsResult::ListOrganizationRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationRecommendationsResult& ListOrganizationRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("organizationRecommendationSummaries"))
  {
    Aws::Utils::Array<JsonView> organizationRecommendationSummariesJsonList = jsonValue.GetArray("organizationRecommendationSummaries");
    for(unsigned organizationRecommendationSummariesIndex = 0; organizationRecommendationSummariesIndex < organizationRecommendationSummariesJsonList.GetLength(); ++organizationRecommendationSummariesIndex)
    {
      m_organizationRecommendationSummaries.push_back(organizationRecommendationSummariesJsonList[organizationRecommendationSummariesIndex].AsObject());
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
