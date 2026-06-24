/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ListAutonomousDatabaseBackupsRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAutonomousDatabaseBackupsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutonomousDatabaseBackupStatusMapper::GetNameForAutonomousDatabaseBackupStatus(m_status));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", AutonomousDatabaseBackupTypeMapper::GetNameForAutonomousDatabaseBackupType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutonomousDatabaseBackupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.ListAutonomousDatabaseBackups"));
  return headers;
}
