/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/BatchResetDevicesForUserRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchResetDevicesForUserRequest::SerializePayload() const {
  JsonValue payload;

  if (m_appIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> appIdsJsonList(m_appIds.size());
    for (unsigned appIdsIndex = 0; appIdsIndex < appIdsJsonList.GetLength(); ++appIdsIndex) {
      appIdsJsonList[appIdsIndex].AsString(m_appIds[appIdsIndex]);
    }
    payload.WithArray("appIds", std::move(appIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchResetDevicesForUserRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
