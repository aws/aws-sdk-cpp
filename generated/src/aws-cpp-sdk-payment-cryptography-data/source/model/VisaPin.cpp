/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VisaPin.h>
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

VisaPin::VisaPin() : 
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false)
{
}

VisaPin::VisaPin(JsonView jsonValue) : 
    m_pinVerificationKeyIndex(0),
    m_pinVerificationKeyIndexHasBeenSet(false)
{
  *this = jsonValue;
}

VisaPin& VisaPin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PinVerificationKeyIndex"))
  {
    m_pinVerificationKeyIndex = jsonValue.GetInteger("PinVerificationKeyIndex");

    m_pinVerificationKeyIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue VisaPin::Jsonize() const
{
  JsonValue payload;

  if(m_pinVerificationKeyIndexHasBeenSet)
  {
   payload.WithInteger("PinVerificationKeyIndex", m_pinVerificationKeyIndex);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
