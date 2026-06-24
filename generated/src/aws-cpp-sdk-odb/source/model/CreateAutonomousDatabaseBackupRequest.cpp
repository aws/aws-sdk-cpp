/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CreateAutonomousDatabaseBackupRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAutonomousDatabaseBackupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutonomousDatabaseBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateAutonomousDatabaseBackup"));
  return headers;
}
