/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/CrossAccountReplicaEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {

CrossAccountReplicaEntry::CrossAccountReplicaEntry(JsonView jsonValue) { *this = jsonValue; }

CrossAccountReplicaEntry& CrossAccountReplicaEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReplicaSecretARN")) {
    m_replicaSecretARN = jsonValue.GetString("ReplicaSecretARN");
    m_replicaSecretARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplicationRoleARN")) {
    m_replicationRoleARN = jsonValue.GetString("ReplicationRoleARN");
    m_replicationRoleARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplicationStatus")) {
    m_replicationStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("ReplicationStatus"));
    m_replicationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossAccountReplicaEntry::Jsonize() const {
  JsonValue payload;

  if (m_replicaSecretARNHasBeenSet) {
    payload.WithString("ReplicaSecretARN", m_replicaSecretARN);
  }

  if (m_replicationRoleARNHasBeenSet) {
    payload.WithString("ReplicationRoleARN", m_replicationRoleARN);
  }

  if (m_replicationStatusHasBeenSet) {
    payload.WithString("ReplicationStatus", StatusTypeMapper::GetNameForStatusType(m_replicationStatus));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
