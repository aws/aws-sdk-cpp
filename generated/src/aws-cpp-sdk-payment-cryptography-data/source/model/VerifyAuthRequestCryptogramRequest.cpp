/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyAuthRequestCryptogramRequest::VerifyAuthRequestCryptogramRequest() : 
    m_authRequestCryptogramHasBeenSet(false),
    m_authResponseAttributesHasBeenSet(false),
    m_keyIdentifierHasBeenSet(false),
    m_majorKeyDerivationMode(MajorKeyDerivationMode::NOT_SET),
    m_majorKeyDerivationModeHasBeenSet(false),
    m_sessionKeyDerivationAttributesHasBeenSet(false),
    m_transactionDataHasBeenSet(false)
{
}

Aws::String VerifyAuthRequestCryptogramRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authRequestCryptogramHasBeenSet)
  {
   payload.WithString("AuthRequestCryptogram", m_authRequestCryptogram);

  }

  if(m_authResponseAttributesHasBeenSet)
  {
   payload.WithObject("AuthResponseAttributes", m_authResponseAttributes.Jsonize());

  }

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  if(m_majorKeyDerivationModeHasBeenSet)
  {
   payload.WithString("MajorKeyDerivationMode", MajorKeyDerivationModeMapper::GetNameForMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if(m_sessionKeyDerivationAttributesHasBeenSet)
  {
   payload.WithObject("SessionKeyDerivationAttributes", m_sessionKeyDerivationAttributes.Jsonize());

  }

  if(m_transactionDataHasBeenSet)
  {
   payload.WithString("TransactionData", m_transactionData);

  }

  return payload.View().WriteReadable();
}




