/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DeleteAutonomousDatabaseBackupRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAutonomousDatabaseBackupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseBackupIdHasBeenSet) {
    payload.WithString("autonomousDatabaseBackupId", m_autonomousDatabaseBackupId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAutonomousDatabaseBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteAutonomousDatabaseBackup"));
  return headers;
}
