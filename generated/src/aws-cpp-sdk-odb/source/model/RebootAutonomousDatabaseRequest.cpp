/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/RebootAutonomousDatabaseRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RebootAutonomousDatabaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_isOnlineRebootHasBeenSet) {
    payload.WithBool("isOnlineReboot", m_isOnlineReboot);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebootAutonomousDatabaseRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.RebootAutonomousDatabase"));
  return headers;
}
