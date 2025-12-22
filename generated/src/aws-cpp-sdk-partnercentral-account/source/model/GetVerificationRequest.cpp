/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/GetVerificationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetVerificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_verificationTypeHasBeenSet) {
    payload.WithString("VerificationType", VerificationTypeMapper::GetNameForVerificationType(m_verificationType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetVerificationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralAccount.GetVerification"));
  return headers;
}
