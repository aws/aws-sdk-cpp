/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/RestoreKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreKeyRequest::RestoreKeyRequest() : 
    m_keyIdentifierHasBeenSet(false)
{
}

Aws::String RestoreKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.RestoreKey"));
  return headers;

}




