/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/omics/model/ListBatchRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListBatchRequest::SerializePayload() const { return {}; }

void ListBatchRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxItemsHasBeenSet) {
    ss << m_maxItems;
    uri.AddQueryStringParameter("maxItems", ss.str());
    ss.str("");
  }

  if (m_startingTokenHasBeenSet) {
    ss << m_startingToken;
    uri.AddQueryStringParameter("startingToken", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << BatchStatusMapper::GetNameForBatchStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_nameHasBeenSet) {
    ss << m_name;
    uri.AddQueryStringParameter("name", ss.str());
    ss.str("");
  }

  if (m_runGroupIdHasBeenSet) {
    ss << m_runGroupId;
    uri.AddQueryStringParameter("runGroupId", ss.str());
    ss.str("");
  }
}
