/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListRecommendationTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRecommendationTemplatesRequest::ListRecommendationTemplatesRequest() : 
    m_assessmentArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_recommendationTemplateArnHasBeenSet(false),
    m_reverseOrder(false),
    m_reverseOrderHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

Aws::String ListRecommendationTemplatesRequest::SerializePayload() const
{
  return {};
}

void ListRecommendationTemplatesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assessmentArnHasBeenSet)
    {
      ss << m_assessmentArn;
      uri.AddQueryStringParameter("assessmentArn", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_recommendationTemplateArnHasBeenSet)
    {
      ss << m_recommendationTemplateArn;
      uri.AddQueryStringParameter("recommendationTemplateArn", ss.str());
      ss.str("");
    }

    if(m_reverseOrderHasBeenSet)
    {
      ss << m_reverseOrder;
      uri.AddQueryStringParameter("reverseOrder", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      for(const auto& item : m_status)
      {
        ss << RecommendationTemplateStatusMapper::GetNameForRecommendationTemplateStatus(item);
        uri.AddQueryStringParameter("status", ss.str());
        ss.str("");
      }
    }

}



