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

VerifyPinDataRequest::VerifyPinDataRequest() : 
    m_dukptAttributesHasBeenSet(false),
    m_encryptedPinBlockHasBeenSet(false),
    m_encryptionKeyIdentifierHasBeenSet(false),
    m_pinBlockFormat(PinBlockFormatForPinData::NOT_SET),
    m_pinBlockFormatHasBeenSet(false),
    m_pinDataLength(0),
    m_pinDataLengthHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_verificationAttributesHasBeenSet(false),
    m_verificationKeyIdentifierHasBeenSet(false)
{
}

Aws::String VerifyPinDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dukptAttributesHasBeenSet)
  {
   payload.WithObject("DukptAttributes", m_dukptAttributes.Jsonize());

  }

  if(m_encryptedPinBlockHasBeenSet)
  {
   payload.WithString("EncryptedPinBlock", m_encryptedPinBlock);

  }

  if(m_encryptionKeyIdentifierHasBeenSet)
  {
   payload.WithString("EncryptionKeyIdentifier", m_encryptionKeyIdentifier);

  }

  if(m_pinBlockFormatHasBeenSet)
  {
   payload.WithString("PinBlockFormat", PinBlockFormatForPinDataMapper::GetNameForPinBlockFormatForPinData(m_pinBlockFormat));
  }

  if(m_pinDataLengthHasBeenSet)
  {
   payload.WithInteger("PinDataLength", m_pinDataLength);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_verificationAttributesHasBeenSet)
  {
   payload.WithObject("VerificationAttributes", m_verificationAttributes.Jsonize());

  }

  if(m_verificationKeyIdentifierHasBeenSet)
  {
   payload.WithString("VerificationKeyIdentifier", m_verificationKeyIdentifier);

  }

  return payload.View().WriteReadable();
}




