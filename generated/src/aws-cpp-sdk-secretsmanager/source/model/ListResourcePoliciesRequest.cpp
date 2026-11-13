/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/model/ListResourcePoliciesRequest.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListResourcePoliciesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_secretIdHasBeenSet) {
    payload.WithString("SecretId", m_secretId);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListResourcePoliciesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.ListResourcePolicies"));
  return headers;
}
