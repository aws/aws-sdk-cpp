/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateAutonomousDatabaseBackupRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutonomousDatabaseBackupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseBackupIdHasBeenSet) {
    payload.WithString("autonomousDatabaseBackupId", m_autonomousDatabaseBackupId);
  }

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("retentionPeriodInDays", m_retentionPeriodInDays);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAutonomousDatabaseBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateAutonomousDatabaseBackup"));
  return headers;
}
