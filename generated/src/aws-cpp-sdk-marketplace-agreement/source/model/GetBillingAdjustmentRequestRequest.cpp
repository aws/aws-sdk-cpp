/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/GetBillingAdjustmentRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBillingAdjustmentRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_billingAdjustmentRequestIdHasBeenSet) {
    payload.WithString("billingAdjustmentRequestId", m_billingAdjustmentRequestId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBillingAdjustmentRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.GetBillingAdjustmentRequest"));
  return headers;
}
