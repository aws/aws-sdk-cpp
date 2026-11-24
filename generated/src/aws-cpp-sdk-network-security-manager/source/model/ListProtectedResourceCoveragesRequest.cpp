/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/ListProtectedResourceCoveragesRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListProtectedResourceCoveragesRequest::SerializePayload() const { return {}; }

void ListProtectedResourceCoveragesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_resourceArnHasBeenSet) {
    ss << m_resourceArn;
    uri.AddQueryStringParameter("resourceArn", ss.str());
    ss.str("");
  }

  if (m_entityTypeHasBeenSet) {
    ss << ServiceResourceTypeMapper::GetNameForServiceResourceType(m_entityType);
    uri.AddQueryStringParameter("entityType", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
