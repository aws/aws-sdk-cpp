/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/ReEncryptDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReEncryptDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outgoingKeyIdentifierHasBeenSet)
  {
   payload.WithString("OutgoingKeyIdentifier", m_outgoingKeyIdentifier);

  }

  if(m_cipherTextHasBeenSet)
  {
   payload.WithString("CipherText", m_cipherText);

  }

  if(m_incomingEncryptionAttributesHasBeenSet)
  {
   payload.WithObject("IncomingEncryptionAttributes", m_incomingEncryptionAttributes.Jsonize());

  }

  if(m_outgoingEncryptionAttributesHasBeenSet)
  {
   payload.WithObject("OutgoingEncryptionAttributes", m_outgoingEncryptionAttributes.Jsonize());

  }

  if(m_incomingWrappedKeyHasBeenSet)
  {
   payload.WithObject("IncomingWrappedKey", m_incomingWrappedKey.Jsonize());

  }

  if(m_outgoingWrappedKeyHasBeenSet)
  {
   payload.WithObject("OutgoingWrappedKey", m_outgoingWrappedKey.Jsonize());

  }

  return payload.View().WriteReadable();
}




