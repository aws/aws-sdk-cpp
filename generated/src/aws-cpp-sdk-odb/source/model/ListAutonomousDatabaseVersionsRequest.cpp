/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ListAutonomousDatabaseVersionsRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAutonomousDatabaseVersionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_dbWorkloadHasBeenSet) {
    payload.WithString("dbWorkload", DbWorkloadMapper::GetNameForDbWorkload(m_dbWorkload));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutonomousDatabaseVersionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.ListAutonomousDatabaseVersions"));
  return headers;
}
