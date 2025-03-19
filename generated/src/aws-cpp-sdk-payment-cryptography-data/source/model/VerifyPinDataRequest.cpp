/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyPinDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String VerifyPinDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verificationKeyIdentifierHasBeenSet)
  {
   payload.WithString("VerificationKeyIdentifier", m_verificationKeyIdentifier);

  }

  if(m_encryptionKeyIdentifierHasBeenSet)
  {
   payload.WithString("EncryptionKeyIdentifier", m_encryptionKeyIdentifier);

  }

  if(m_verificationAttributesHasBeenSet)
  {
   payload.WithObject("VerificationAttributes", m_verificationAttributes.Jsonize());

  }

  if(m_encryptedPinBlockHasBeenSet)
  {
   payload.WithString("EncryptedPinBlock", m_encryptedPinBlock);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_pinBlockFormatHasBeenSet)
  {
   payload.WithString("PinBlockFormat", PinBlockFormatForPinDataMapper::GetNameForPinBlockFormatForPinData(m_pinBlockFormat));
  }

  if(m_pinDataLengthHasBeenSet)
  {
   payload.WithInteger("PinDataLength", m_pinDataLength);

  }

  if(m_dukptAttributesHasBeenSet)
  {
   payload.WithObject("DukptAttributes", m_dukptAttributes.Jsonize());

  }

  if(m_encryptionWrappedKeyHasBeenSet)
  {
   payload.WithObject("EncryptionWrappedKey", m_encryptionWrappedKey.Jsonize());

  }

  return payload.View().WriteReadable();
}




