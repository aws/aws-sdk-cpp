/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GenerateMacEmvPinChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateMacEmvPinChangeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_newPinPekIdentifierHasBeenSet)
  {
   payload.WithString("NewPinPekIdentifier", m_newPinPekIdentifier);

  }

  if(m_newEncryptedPinBlockHasBeenSet)
  {
   payload.WithString("NewEncryptedPinBlock", m_newEncryptedPinBlock);

  }

  if(m_pinBlockFormatHasBeenSet)
  {
   payload.WithString("PinBlockFormat", PinBlockFormatForEmvPinChangeMapper::GetNameForPinBlockFormatForEmvPinChange(m_pinBlockFormat));
  }

  if(m_secureMessagingIntegrityKeyIdentifierHasBeenSet)
  {
   payload.WithString("SecureMessagingIntegrityKeyIdentifier", m_secureMessagingIntegrityKeyIdentifier);

  }

  if(m_secureMessagingConfidentialityKeyIdentifierHasBeenSet)
  {
   payload.WithString("SecureMessagingConfidentialityKeyIdentifier", m_secureMessagingConfidentialityKeyIdentifier);

  }

  if(m_messageDataHasBeenSet)
  {
   payload.WithString("MessageData", m_messageData);

  }

  if(m_derivationMethodAttributesHasBeenSet)
  {
   payload.WithObject("DerivationMethodAttributes", m_derivationMethodAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




