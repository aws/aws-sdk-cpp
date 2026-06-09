/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/RestoreAutonomousDatabaseRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RestoreAutonomousDatabaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreAutonomousDatabaseRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.RestoreAutonomousDatabase"));
  return headers;
}
