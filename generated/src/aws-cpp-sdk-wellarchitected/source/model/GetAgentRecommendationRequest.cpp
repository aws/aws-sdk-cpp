/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentRecommendationRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetAgentRecommendationRequest::SerializePayload() const { return {}; }

void GetAgentRecommendationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_remediationTypeHasBeenSet) {
    ss << RemediationTypeMapper::GetNameForRemediationType(m_remediationType);
    uri.AddQueryStringParameter("remediationType", ss.str());
    ss.str("");
  }
}
