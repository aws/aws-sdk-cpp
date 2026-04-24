/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/CancelAgreementCancellationRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelAgreementCancellationRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_agreementCancellationRequestIdHasBeenSet) {
    payload.WithString("agreementCancellationRequestId", m_agreementCancellationRequestId);
  }

  if (m_cancellationReasonHasBeenSet) {
    payload.WithString("cancellationReason", m_cancellationReason);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelAgreementCancellationRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.CancelAgreementCancellationRequest"));
  return headers;
}
