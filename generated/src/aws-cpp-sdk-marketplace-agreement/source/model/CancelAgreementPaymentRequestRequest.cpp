/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/CancelAgreementPaymentRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelAgreementPaymentRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_paymentRequestIdHasBeenSet) {
    payload.WithString("paymentRequestId", m_paymentRequestId);
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelAgreementPaymentRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.CancelAgreementPaymentRequest"));
  return headers;
}
