/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/DisassociateCrossAccountReplicaRequest.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateCrossAccountReplicaRequest::SerializePayload() const {
  JsonValue payload;

  if (m_secretIdHasBeenSet) {
    payload.WithString("SecretId", m_secretId);
  }

  if (m_crossAccountReplicaARNHasBeenSet) {
    payload.WithString("CrossAccountReplicaARN", m_crossAccountReplicaARN);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateCrossAccountReplicaRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.DisassociateCrossAccountReplica"));
  return headers;
}
