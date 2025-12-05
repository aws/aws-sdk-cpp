/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/StartVerificationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartVerificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_verificationDetailsHasBeenSet) {
    payload.WithObject("VerificationDetails", m_verificationDetails.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartVerificationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralAccount.StartVerification"));
  return headers;
}
