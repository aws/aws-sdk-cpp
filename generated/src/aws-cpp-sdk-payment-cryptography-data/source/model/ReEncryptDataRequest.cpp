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

ReEncryptDataRequest::ReEncryptDataRequest() : 
    m_cipherTextHasBeenSet(false),
    m_incomingEncryptionAttributesHasBeenSet(false),
    m_incomingKeyIdentifierHasBeenSet(false),
    m_outgoingEncryptionAttributesHasBeenSet(false),
    m_outgoingKeyIdentifierHasBeenSet(false)
{
}

Aws::String ReEncryptDataRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_outgoingKeyIdentifierHasBeenSet)
  {
   payload.WithString("OutgoingKeyIdentifier", m_outgoingKeyIdentifier);

  }

  return payload.View().WriteReadable();
}




