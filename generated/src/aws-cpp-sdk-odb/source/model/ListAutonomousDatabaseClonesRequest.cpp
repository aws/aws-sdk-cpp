/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ListAutonomousDatabaseClonesRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAutonomousDatabaseClonesRequest::SerializePayload() const {
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutonomousDatabaseClonesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.ListAutonomousDatabaseClones"));
  return headers;
}
