﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListRecommendationResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRecommendationResourcesRequest::SerializePayload() const
{
  return {};
}

void ListRecommendationResourcesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_exclusionStatusHasBeenSet)
    {
      ss << ExclusionStatusMapper::GetNameForExclusionStatus(m_exclusionStatus);
      uri.AddQueryStringParameter("exclusionStatus", ss.str());
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



