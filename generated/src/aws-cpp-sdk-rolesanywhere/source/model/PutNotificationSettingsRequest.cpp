/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/PutNotificationSettingsRequest.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutNotificationSettingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trustAnchorIdHasBeenSet) {
    payload.WithString("trustAnchorId", m_trustAnchorId);
  }

  if (m_notificationSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> notificationSettingsJsonList(m_notificationSettings.size());
    for (unsigned notificationSettingsIndex = 0; notificationSettingsIndex < notificationSettingsJsonList.GetLength();
         ++notificationSettingsIndex) {
      notificationSettingsJsonList[notificationSettingsIndex].AsObject(m_notificationSettings[notificationSettingsIndex].Jsonize());
    }
    payload.WithArray("notificationSettings", std::move(notificationSettingsJsonList));
  }

  return payload.View().WriteReadable();
}
