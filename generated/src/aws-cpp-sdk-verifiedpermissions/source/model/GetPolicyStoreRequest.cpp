﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreRequest.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPolicyStoreRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyStoreIdHasBeenSet) {
    payload.WithString("policyStoreId", m_policyStoreId);
  }

  if (m_tagsHasBeenSet) {
    payload.WithBool("tags", m_tags);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPolicyStoreRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.GetPolicyStore"));
  return headers;
}
