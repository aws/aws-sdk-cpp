/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/CrossAccountPrimaryType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {

CrossAccountPrimaryType::CrossAccountPrimaryType(JsonView jsonValue) { *this = jsonValue; }

CrossAccountPrimaryType& CrossAccountPrimaryType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimarySecretARN")) {
    m_primarySecretARN = jsonValue.GetString("PrimarySecretARN");
    m_primarySecretARNHasBeenSet = true;
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

JsonValue CrossAccountPrimaryType::Jsonize() const {
  JsonValue payload;

  if (m_primarySecretARNHasBeenSet) {
    payload.WithString("PrimarySecretARN", m_primarySecretARN);
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
