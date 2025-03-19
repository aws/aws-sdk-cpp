/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/TranslatePinDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TranslatePinDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_incomingKeyIdentifierHasBeenSet)
  {
   payload.WithString("IncomingKeyIdentifier", m_incomingKeyIdentifier);

  }

  if(m_outgoingKeyIdentifierHasBeenSet)
  {
   payload.WithString("OutgoingKeyIdentifier", m_outgoingKeyIdentifier);

  }

  if(m_incomingTranslationAttributesHasBeenSet)
  {
   payload.WithObject("IncomingTranslationAttributes", m_incomingTranslationAttributes.Jsonize());

  }

  if(m_outgoingTranslationAttributesHasBeenSet)
  {
   payload.WithObject("OutgoingTranslationAttributes", m_outgoingTranslationAttributes.Jsonize());

  }

  if(m_encryptedPinBlockHasBeenSet)
  {
   payload.WithString("EncryptedPinBlock", m_encryptedPinBlock);

  }

  if(m_incomingDukptAttributesHasBeenSet)
  {
   payload.WithObject("IncomingDukptAttributes", m_incomingDukptAttributes.Jsonize());

  }

  if(m_outgoingDukptAttributesHasBeenSet)
  {
   payload.WithObject("OutgoingDukptAttributes", m_outgoingDukptAttributes.Jsonize());

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




