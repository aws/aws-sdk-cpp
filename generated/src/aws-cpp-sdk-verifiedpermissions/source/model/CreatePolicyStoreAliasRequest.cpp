/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/CreatePolicyStoreAliasRequest.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePolicyStoreAliasRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aliasNameHasBeenSet) {
    payload.WithString("aliasName", m_aliasName);
  }

  if (m_policyStoreIdHasBeenSet) {
    payload.WithString("policyStoreId", m_policyStoreId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePolicyStoreAliasRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.CreatePolicyStoreAlias"));
  return headers;
}
