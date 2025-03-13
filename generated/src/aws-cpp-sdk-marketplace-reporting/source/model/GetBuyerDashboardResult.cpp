/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-reporting/model/GetBuyerDashboardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceReporting::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBuyerDashboardResult::GetBuyerDashboardResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBuyerDashboardResult& GetBuyerDashboardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("embedUrl"))
  {
    m_embedUrl = jsonValue.GetString("embedUrl");
    m_embedUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardIdentifier"))
  {
    m_dashboardIdentifier = jsonValue.GetString("dashboardIdentifier");
    m_dashboardIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("embeddingDomains"))
  {
    Aws::Utils::Array<JsonView> embeddingDomainsJsonList = jsonValue.GetArray("embeddingDomains");
    for(unsigned embeddingDomainsIndex = 0; embeddingDomainsIndex < embeddingDomainsJsonList.GetLength(); ++embeddingDomainsIndex)
    {
      m_embeddingDomains.push_back(embeddingDomainsJsonList[embeddingDomainsIndex].AsString());
    }
    m_embeddingDomainsHasBeenSet = true;
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
