/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/model/ListSessionsRequest.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSessionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("SessionId", m_sessionId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SessionStatusStringMapper::GetNameForSessionStatusString(m_status));
  }

  if (m_roleLevelHasBeenSet) {
    payload.WithBool("RoleLevel", m_roleLevel);
  }

  if (m_clusterIdentifierHasBeenSet) {
    payload.WithString("ClusterIdentifier", m_clusterIdentifier);
  }

  if (m_workgroupNameHasBeenSet) {
    payload.WithString("WorkgroupName", m_workgroupName);
  }

  if (m_databaseHasBeenSet) {
    payload.WithString("Database", m_database);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSessionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftData.ListSessions"));
  return headers;
}
