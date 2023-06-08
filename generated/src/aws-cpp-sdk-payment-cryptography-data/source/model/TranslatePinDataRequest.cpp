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

TranslatePinDataRequest::TranslatePinDataRequest() : 
    m_encryptedPinBlockHasBeenSet(false),
    m_incomingDukptAttributesHasBeenSet(false),
    m_incomingKeyIdentifierHasBeenSet(false),
    m_incomingTranslationAttributesHasBeenSet(false),
    m_outgoingDukptAttributesHasBeenSet(false),
    m_outgoingKeyIdentifierHasBeenSet(false),
    m_outgoingTranslationAttributesHasBeenSet(false)
{
}

Aws::String TranslatePinDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encryptedPinBlockHasBeenSet)
  {
   payload.WithString("EncryptedPinBlock", m_encryptedPinBlock);

  }

  if(m_incomingDukptAttributesHasBeenSet)
  {
   payload.WithObject("IncomingDukptAttributes", m_incomingDukptAttributes.Jsonize());

  }

  if(m_incomingKeyIdentifierHasBeenSet)
  {
   payload.WithString("IncomingKeyIdentifier", m_incomingKeyIdentifier);

  }

  if(m_incomingTranslationAttributesHasBeenSet)
  {
   payload.WithObject("IncomingTranslationAttributes", m_incomingTranslationAttributes.Jsonize());

  }

  if(m_outgoingDukptAttributesHasBeenSet)
  {
   payload.WithObject("OutgoingDukptAttributes", m_outgoingDukptAttributes.Jsonize());

  }

  if(m_outgoingKeyIdentifierHasBeenSet)
  {
   payload.WithString("OutgoingKeyIdentifier", m_outgoingKeyIdentifier);

  }

  if(m_outgoingTranslationAttributesHasBeenSet)
  {
   payload.WithObject("OutgoingTranslationAttributes", m_outgoingTranslationAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




