/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/SendAgreementCancellationRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendAgreementCancellationRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("reasonCode",
                       AgreementCancellationRequestReasonCodeMapper::GetNameForAgreementCancellationRequestReasonCode(m_reasonCode));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendAgreementCancellationRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.SendAgreementCancellationRequest"));
  return headers;
}
