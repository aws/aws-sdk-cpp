/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GeneratePinDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GeneratePinDataRequest::GeneratePinDataRequest() : 
    m_generationKeyIdentifierHasBeenSet(false),
    m_encryptionKeyIdentifierHasBeenSet(false),
    m_generationAttributesHasBeenSet(false),
    m_pinDataLength(0),
    m_pinDataLengthHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_pinBlockFormat(PinBlockFormatForPinData::NOT_SET),
    m_pinBlockFormatHasBeenSet(false),
    m_encryptionWrappedKeyHasBeenSet(false)
{
}

Aws::String GeneratePinDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_generationKeyIdentifierHasBeenSet)
  {
   payload.WithString("GenerationKeyIdentifier", m_generationKeyIdentifier);

  }

  if(m_encryptionKeyIdentifierHasBeenSet)
  {
   payload.WithString("EncryptionKeyIdentifier", m_encryptionKeyIdentifier);

  }

  if(m_generationAttributesHasBeenSet)
  {
   payload.WithObject("GenerationAttributes", m_generationAttributes.Jsonize());

  }

  if(m_pinDataLengthHasBeenSet)
  {
   payload.WithInteger("PinDataLength", m_pinDataLength);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_pinBlockFormatHasBeenSet)
  {
   payload.WithString("PinBlockFormat", PinBlockFormatForPinDataMapper::GetNameForPinBlockFormatForPinData(m_pinBlockFormat));
  }

  if(m_encryptionWrappedKeyHasBeenSet)
  {
   payload.WithObject("EncryptionWrappedKey", m_encryptionWrappedKey.Jsonize());

  }

  return payload.View().WriteReadable();
}




