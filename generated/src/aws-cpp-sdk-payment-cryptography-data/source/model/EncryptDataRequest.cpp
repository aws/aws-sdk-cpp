/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EncryptDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EncryptDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_plainTextHasBeenSet)
  {
   payload.WithString("PlainText", m_plainText);

  }

  if(m_encryptionAttributesHasBeenSet)
  {
   payload.WithObject("EncryptionAttributes", m_encryptionAttributes.Jsonize());

  }

  if(m_wrappedKeyHasBeenSet)
  {
   payload.WithObject("WrappedKey", m_wrappedKey.Jsonize());

  }

  return payload.View().WriteReadable();
}




