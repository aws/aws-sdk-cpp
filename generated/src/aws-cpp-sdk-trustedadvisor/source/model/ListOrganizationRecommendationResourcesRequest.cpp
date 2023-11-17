/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListOrganizationRecommendationResourcesRequest::ListOrganizationRecommendationResourcesRequest() : 
    m_affectedAccountIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_organizationRecommendationIdentifierHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListOrganizationRecommendationResourcesRequest::SerializePayload() const
{
  return {};
}

void ListOrganizationRecommendationResourcesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_affectedAccountIdHasBeenSet)
    {
      ss << m_affectedAccountId;
      uri.AddQueryStringParameter("affectedAccountId", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_regionCodeHasBeenSet)
    {
      ss << m_regionCode;
      uri.AddQueryStringParameter("regionCode", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << ResourceStatusMapper::GetNameForResourceStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

}



