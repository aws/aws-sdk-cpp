/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesResult.h>
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

ListOrganizationRecommendationResourcesResult::ListOrganizationRecommendationResourcesResult()
{
}

ListOrganizationRecommendationResourcesResult::ListOrganizationRecommendationResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationRecommendationResourcesResult& ListOrganizationRecommendationResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("organizationRecommendationResourceSummaries"))
  {
    Aws::Utils::Array<JsonView> organizationRecommendationResourceSummariesJsonList = jsonValue.GetArray("organizationRecommendationResourceSummaries");
    for(unsigned organizationRecommendationResourceSummariesIndex = 0; organizationRecommendationResourceSummariesIndex < organizationRecommendationResourceSummariesJsonList.GetLength(); ++organizationRecommendationResourceSummariesIndex)
    {
      m_organizationRecommendationResourceSummaries.push_back(organizationRecommendationResourceSummariesJsonList[organizationRecommendationResourceSummariesIndex].AsObject());
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
