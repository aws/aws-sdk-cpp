/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAggregateResourceSynchronizationStatusesRequest::SerializePayload() const { return {}; }

void ListAggregateResourceSynchronizationStatusesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_synchronizationStatusHasBeenSet) {
    ss << SynchronizationStatusMapper::GetNameForSynchronizationStatus(m_synchronizationStatus);
    uri.AddQueryStringParameter("synchronizationStatus", ss.str());
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
