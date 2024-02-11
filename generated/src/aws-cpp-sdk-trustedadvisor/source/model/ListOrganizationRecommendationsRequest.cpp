/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ListOrganizationRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListOrganizationRecommendationsRequest::ListOrganizationRecommendationsRequest() : 
    m_afterLastUpdatedAtHasBeenSet(false),
    m_awsServiceHasBeenSet(false),
    m_beforeLastUpdatedAtHasBeenSet(false),
    m_checkIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_pillar(RecommendationPillar::NOT_SET),
    m_pillarHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_status(RecommendationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListOrganizationRecommendationsRequest::SerializePayload() const
{
  return {};
}

void ListOrganizationRecommendationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_afterLastUpdatedAtHasBeenSet)
    {
      ss << m_afterLastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("afterLastUpdatedAt", ss.str());
      ss.str("");
    }

    if(m_awsServiceHasBeenSet)
    {
      ss << m_awsService;
      uri.AddQueryStringParameter("awsService", ss.str());
      ss.str("");
    }

    if(m_beforeLastUpdatedAtHasBeenSet)
    {
      ss << m_beforeLastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("beforeLastUpdatedAt", ss.str());
      ss.str("");
    }

    if(m_checkIdentifierHasBeenSet)
    {
      ss << m_checkIdentifier;
      uri.AddQueryStringParameter("checkIdentifier", ss.str());
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

    if(m_statusHasBeenSet)
    {
      ss << RecommendationStatusMapper::GetNameForRecommendationStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << RecommendationTypeMapper::GetNameForRecommendationType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



