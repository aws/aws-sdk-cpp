/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/trustedadvisor/model/GetRecommendationRequest.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetRecommendationRequest::SerializePayload() const { return {}; }

void GetRecommendationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_languageHasBeenSet) {
    ss << RecommendationLanguageMapper::GetNameForRecommendationLanguage(m_language);
    uri.AddQueryStringParameter("language", ss.str());
    ss.str("");
  }
}
