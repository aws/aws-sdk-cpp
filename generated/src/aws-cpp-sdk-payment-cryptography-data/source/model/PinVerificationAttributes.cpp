/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinVerificationAttributes.h>
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

PinVerificationAttributes::PinVerificationAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

PinVerificationAttributes& PinVerificationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisaPin"))
  {
    m_visaPin = jsonValue.GetObject("VisaPin");
    m_visaPinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ibm3624Pin"))
  {
    m_ibm3624Pin = jsonValue.GetObject("Ibm3624Pin");
    m_ibm3624PinHasBeenSet = true;
  }
  return *this;
}

JsonValue PinVerificationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_visaPinHasBeenSet)
  {
   payload.WithObject("VisaPin", m_visaPin.Jsonize());

  }

  if(m_ibm3624PinHasBeenSet)
  {
   payload.WithObject("Ibm3624Pin", m_ibm3624Pin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
