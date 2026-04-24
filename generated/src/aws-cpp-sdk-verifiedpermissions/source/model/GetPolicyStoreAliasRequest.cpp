/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreAliasRequest.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPolicyStoreAliasRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aliasNameHasBeenSet) {
    payload.WithString("aliasName", m_aliasName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPolicyStoreAliasRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.GetPolicyStoreAlias"));
  return headers;
}
