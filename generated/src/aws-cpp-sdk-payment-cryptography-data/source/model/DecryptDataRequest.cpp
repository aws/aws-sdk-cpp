/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DecryptDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DecryptDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cipherTextHasBeenSet)
  {
   payload.WithString("CipherText", m_cipherText);

  }

  if(m_decryptionAttributesHasBeenSet)
  {
   payload.WithObject("DecryptionAttributes", m_decryptionAttributes.Jsonize());

  }

  if(m_wrappedKeyHasBeenSet)
  {
   payload.WithObject("WrappedKey", m_wrappedKey.Jsonize());

  }

  return payload.View().WriteReadable();
}




