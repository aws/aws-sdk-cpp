/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/AssociateCrossAccountReplicaRequest.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateCrossAccountReplicaRequest::SerializePayload() const {
  JsonValue payload;

  if (m_secretIdHasBeenSet) {
    payload.WithString("SecretId", m_secretId);
  }

  if (m_crossAccountReplicaARNHasBeenSet) {
    payload.WithString("CrossAccountReplicaARN", m_crossAccountReplicaARN);
  }

  if (m_replicaRestrictionHasBeenSet) {
    payload.WithString("ReplicaRestriction", ReplicaRestrictionTypeMapper::GetNameForReplicaRestrictionType(m_replicaRestriction));
  }

  if (m_replicationRoleARNHasBeenSet) {
    payload.WithString("ReplicationRoleARN", m_replicationRoleARN);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateCrossAccountReplicaRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.AssociateCrossAccountReplica"));
  return headers;
}
