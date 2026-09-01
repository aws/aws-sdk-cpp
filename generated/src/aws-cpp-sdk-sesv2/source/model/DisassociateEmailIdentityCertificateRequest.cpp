/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/DisassociateEmailIdentityCertificateRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateEmailIdentityCertificateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_emailIdentityHasBeenSet) {
    payload.WithString("EmailIdentity", m_emailIdentity);
  }

  if (m_fromAddressHasBeenSet) {
    payload.WithString("FromAddress", m_fromAddress);
  }

  return payload.View().WriteReadable();
}
