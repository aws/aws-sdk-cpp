/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/trustedadvisor/model/ListRecommendationsForResourceRequest.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRecommendationsForResourceRequest::SerializePayload() const { return {}; }

void ListRecommendationsForResourceRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_pillarHasBeenSet) {
    ss << RecommendationPillarMapper::GetNameForRecommendationPillar(m_pillar);
    uri.AddQueryStringParameter("pillar", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << ResourceStatusMapper::GetNameForResourceStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_checkArnHasBeenSet) {
    ss << m_checkArn;
    uri.AddQueryStringParameter("checkArn", ss.str());
    ss.str("");
  }

  if (m_languageHasBeenSet) {
    ss << RecommendationLanguageMapper::GetNameForRecommendationLanguage(m_language);
    uri.AddQueryStringParameter("language", ss.str());
    ss.str("");
  }
}
