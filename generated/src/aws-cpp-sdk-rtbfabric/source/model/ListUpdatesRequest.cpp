/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/ListUpdatesRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListUpdatesRequest::SerializePayload() const { return {}; }

void ListUpdatesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_linkIdHasBeenSet) {
    ss << m_linkId;
    uri.AddQueryStringParameter("linkId", ss.str());
    ss.str("");
  }

  if (m_ruleIdHasBeenSet) {
    ss << m_ruleId;
    uri.AddQueryStringParameter("ruleId", ss.str());
    ss.str("");
  }

  if (m_typeHasBeenSet) {
    ss << UpdateTypeMapper::GetNameForUpdateType(m_type);
    uri.AddQueryStringParameter("type", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << UpdateStatusMapper::GetNameForUpdateStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

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
}
