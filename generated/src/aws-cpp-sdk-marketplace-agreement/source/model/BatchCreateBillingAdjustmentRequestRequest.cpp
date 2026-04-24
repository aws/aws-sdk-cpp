/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateBillingAdjustmentRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_billingAdjustmentRequestEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> billingAdjustmentRequestEntriesJsonList(m_billingAdjustmentRequestEntries.size());
    for (unsigned billingAdjustmentRequestEntriesIndex = 0;
         billingAdjustmentRequestEntriesIndex < billingAdjustmentRequestEntriesJsonList.GetLength();
         ++billingAdjustmentRequestEntriesIndex) {
      billingAdjustmentRequestEntriesJsonList[billingAdjustmentRequestEntriesIndex].AsObject(
          m_billingAdjustmentRequestEntries[billingAdjustmentRequestEntriesIndex].Jsonize());
    }
    payload.WithArray("billingAdjustmentRequestEntries", std::move(billingAdjustmentRequestEntriesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateBillingAdjustmentRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.BatchCreateBillingAdjustmentRequest"));
  return headers;
}
