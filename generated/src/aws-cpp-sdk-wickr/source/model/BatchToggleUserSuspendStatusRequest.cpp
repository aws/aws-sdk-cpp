/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/BatchToggleUserSuspendStatusRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String BatchToggleUserSuspendStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
    for (unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex) {
      userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
    }
    payload.WithArray("userIds", std::move(userIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchToggleUserSuspendStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-client-token", ss.str());
    ss.str("");
  }

  return headers;
}

void BatchToggleUserSuspendStatusRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_suspendHasBeenSet) {
    ss << m_suspend;
    uri.AddQueryStringParameter("suspend", ss.str());
    ss.str("");
  }
}
