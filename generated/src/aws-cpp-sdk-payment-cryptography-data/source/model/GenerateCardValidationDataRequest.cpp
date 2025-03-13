/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GenerateCardValidationDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateCardValidationDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_generationAttributesHasBeenSet)
  {
   payload.WithObject("GenerationAttributes", m_generationAttributes.Jsonize());

  }

  if(m_validationDataLengthHasBeenSet)
  {
   payload.WithInteger("ValidationDataLength", m_validationDataLength);

  }

  return payload.View().WriteReadable();
}




