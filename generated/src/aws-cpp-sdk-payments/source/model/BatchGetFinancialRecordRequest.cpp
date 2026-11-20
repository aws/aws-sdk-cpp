/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/BatchGetFinancialRecordRequest.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetFinancialRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_keysHasBeenSet) {
    Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
    for (unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex) {
      keysJsonList[keysIndex].AsObject(m_keys[keysIndex].Jsonize());
    }
    payload.WithArray("keys", std::move(keysJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetFinancialRecordRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPayments.BatchGetFinancialRecord"));
  return headers;
}
