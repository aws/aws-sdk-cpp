/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DeleteExascaleDbStorageVaultRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteExascaleDbStorageVaultRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exascaleDbStorageVaultIdHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultId", m_exascaleDbStorageVaultId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteExascaleDbStorageVaultRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteExascaleDbStorageVault"));
  return headers;
}
