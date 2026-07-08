/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearch/model/ListMigrationsRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListMigrationsRequest::SerializePayload() const { return {}; }

void ListMigrationsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_applicationIdHasBeenSet) {
    ss << m_applicationId;
    uri.AddQueryStringParameter("applicationId", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << m_status;
    uri.AddQueryStringParameter("status", ss.str());
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
