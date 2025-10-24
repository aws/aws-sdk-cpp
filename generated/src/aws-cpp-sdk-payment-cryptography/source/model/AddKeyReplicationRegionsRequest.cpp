﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/AddKeyReplicationRegionsRequest.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddKeyReplicationRegionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_keyIdentifierHasBeenSet) {
    payload.WithString("KeyIdentifier", m_keyIdentifier);
  }

  if (m_replicationRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> replicationRegionsJsonList(m_replicationRegions.size());
    for (unsigned replicationRegionsIndex = 0; replicationRegionsIndex < replicationRegionsJsonList.GetLength();
         ++replicationRegionsIndex) {
      replicationRegionsJsonList[replicationRegionsIndex].AsString(m_replicationRegions[replicationRegionsIndex]);
    }
    payload.WithArray("ReplicationRegions", std::move(replicationRegionsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddKeyReplicationRegionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.AddKeyReplicationRegions"));
  return headers;
}
