/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateExascaleDbStorageVaultRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExascaleDbStorageVaultRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exascaleDbStorageVaultIdHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultId", m_exascaleDbStorageVaultId);
  }

  if (m_additionalFlashCacheInPercentHasBeenSet) {
    payload.WithInteger("additionalFlashCacheInPercent", m_additionalFlashCacheInPercent);
  }

  if (m_autoscaleLimitInGBsHasBeenSet) {
    payload.WithInteger("autoscaleLimitInGBs", m_autoscaleLimitInGBs);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_highCapacityDatabaseStorageTotalSizeInGBsHasBeenSet) {
    payload.WithInteger("highCapacityDatabaseStorageTotalSizeInGBs", m_highCapacityDatabaseStorageTotalSizeInGBs);
  }

  if (m_isAutoscaleEnabledHasBeenSet) {
    payload.WithBool("isAutoscaleEnabled", m_isAutoscaleEnabled);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateExascaleDbStorageVaultRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateExascaleDbStorageVault"));
  return headers;
}
