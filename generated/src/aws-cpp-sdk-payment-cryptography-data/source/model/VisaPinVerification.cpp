/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VisaPinVerification.h>
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

VisaPinVerification::VisaPinVerification() : 
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false),
    m_verificationValueHasBeenSet(false)
{
}

VisaPinVerification::VisaPinVerification(JsonView jsonValue) : 
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false),
    m_verificationValueHasBeenSet(false)
{
  *this = jsonValue;
}

VisaPinVerification& VisaPinVerification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PinVerificationKeyIndex"))
  {
    m_pinVerificationKeyIndex = jsonValue.GetInteger("PinVerificationKeyIndex");

    m_pinVerificationKeyIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationValue"))
  {
    m_verificationValue = jsonValue.GetString("VerificationValue");

    m_verificationValueHasBeenSet = true;
  }

  return *this;
}

JsonValue VisaPinVerification::Jsonize() const
{
  JsonValue payload;

  if(m_pinVerificationKeyIndexHasBeenSet)
  {
   payload.WithInteger("PinVerificationKeyIndex", m_pinVerificationKeyIndex);

  }

  if(m_verificationValueHasBeenSet)
  {
   payload.WithString("VerificationValue", m_verificationValue);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
