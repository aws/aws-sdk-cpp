/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VisaPinVerificationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

VisaPinVerificationValue::VisaPinVerificationValue() : 
    m_encryptedPinBlockHasBeenSet(false),
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false)
{
}

VisaPinVerificationValue::VisaPinVerificationValue(JsonView jsonValue) : 
    m_encryptedPinBlockHasBeenSet(false),
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false)
{
  *this = jsonValue;
}

VisaPinVerificationValue& VisaPinVerificationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptedPinBlock"))
  {
    m_encryptedPinBlock = jsonValue.GetString("EncryptedPinBlock");

    m_encryptedPinBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PinVerificationKeyIndex"))
  {
    m_pinVerificationKeyIndex = jsonValue.GetInteger("PinVerificationKeyIndex");

    m_pinVerificationKeyIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue VisaPinVerificationValue::Jsonize() const
{
  JsonValue payload;

  if(m_encryptedPinBlockHasBeenSet)
  {
   payload.WithString("EncryptedPinBlock", m_encryptedPinBlock);

  }

  if(m_pinVerificationKeyIndexHasBeenSet)
  {
   payload.WithInteger("PinVerificationKeyIndex", m_pinVerificationKeyIndex);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
