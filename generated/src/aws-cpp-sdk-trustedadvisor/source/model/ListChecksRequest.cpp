/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListChecksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChecksRequest::ListChecksRequest() : 
    m_awsServiceHasBeenSet(false),
    m_language(RecommendationLanguage::NOT_SET),
    m_languageHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pillar(RecommendationPillar::NOT_SET),
    m_pillarHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

Aws::String ListChecksRequest::SerializePayload() const
{
  return {};
}

void ListChecksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_awsServiceHasBeenSet)
    {
      ss << m_awsService;
      uri.AddQueryStringParameter("awsService", ss.str());
      ss.str("");
    }

    if(m_languageHasBeenSet)
    {
      ss << RecommendationLanguageMapper::GetNameForRecommendationLanguage(m_language);
      uri.AddQueryStringParameter("language", ss.str());
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

    if(m_pillarHasBeenSet)
    {
      ss << RecommendationPillarMapper::GetNameForRecommendationPillar(m_pillar);
      uri.AddQueryStringParameter("pillar", ss.str());
      ss.str("");
    }

    if(m_sourceHasBeenSet)
    {
      ss << RecommendationSourceMapper::GetNameForRecommendationSource(m_source);
      uri.AddQueryStringParameter("source", ss.str());
      ss.str("");
    }

}



