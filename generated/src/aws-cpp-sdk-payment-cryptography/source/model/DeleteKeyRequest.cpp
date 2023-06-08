/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/DeleteKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKeyRequest::DeleteKeyRequest() : 
    m_deleteKeyInDays(0),
    m_deleteKeyInDaysHasBeenSet(false),
    m_keyIdentifierHasBeenSet(false)
{
}

Aws::String DeleteKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deleteKeyInDaysHasBeenSet)
  {
   payload.WithInteger("DeleteKeyInDays", m_deleteKeyInDays);

  }

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.DeleteKey"));
  return headers;

}




