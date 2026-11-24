/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/ListInboundConnectorsRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListInboundConnectorsRequest::SerializePayload() const { return {}; }

void ListInboundConnectorsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("max-results", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("next-token", ss.str());
    ss.str("");
  }

  if (m_typeHasBeenSet) {
    for (const auto& item : m_type) {
      ss << InboundConnectorTypeMapper::GetNameForInboundConnectorType(item);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }
  }
}
