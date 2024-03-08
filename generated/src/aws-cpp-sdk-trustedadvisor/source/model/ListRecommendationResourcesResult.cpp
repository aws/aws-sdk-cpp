/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListRecommendationResourcesResult.h>
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

ListRecommendationResourcesResult::ListRecommendationResourcesResult()
{
}

ListRecommendationResourcesResult::ListRecommendationResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecommendationResourcesResult& ListRecommendationResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recommendationResourceSummaries"))
  {
    Aws::Utils::Array<JsonView> recommendationResourceSummariesJsonList = jsonValue.GetArray("recommendationResourceSummaries");
    for(unsigned recommendationResourceSummariesIndex = 0; recommendationResourceSummariesIndex < recommendationResourceSummariesJsonList.GetLength(); ++recommendationResourceSummariesIndex)
    {
      m_recommendationResourceSummaries.push_back(recommendationResourceSummariesJsonList[recommendationResourceSummariesIndex].AsObject());
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
