/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyCardValidationDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyCardValidationDataRequest::VerifyCardValidationDataRequest() : 
    m_keyIdentifierHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false),
    m_validationDataHasBeenSet(false),
    m_verificationAttributesHasBeenSet(false)
{
}

Aws::String VerifyCardValidationDataRequest::SerializePayload() const
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

  if(m_validationDataHasBeenSet)
  {
   payload.WithString("ValidationData", m_validationData);

  }

  if(m_verificationAttributesHasBeenSet)
  {
   payload.WithObject("VerificationAttributes", m_verificationAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




