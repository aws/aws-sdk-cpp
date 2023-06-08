/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinGenerationAttributes.h>
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

PinGenerationAttributes::PinGenerationAttributes() : 
    m_ibm3624NaturalPinHasBeenSet(false),
    m_ibm3624PinFromOffsetHasBeenSet(false),
    m_ibm3624PinOffsetHasBeenSet(false),
    m_ibm3624RandomPinHasBeenSet(false),
    m_visaPinHasBeenSet(false),
    m_visaPinVerificationValueHasBeenSet(false)
{
}

PinGenerationAttributes::PinGenerationAttributes(JsonView jsonValue) : 
    m_ibm3624NaturalPinHasBeenSet(false),
    m_ibm3624PinFromOffsetHasBeenSet(false),
    m_ibm3624PinOffsetHasBeenSet(false),
    m_ibm3624RandomPinHasBeenSet(false),
    m_visaPinHasBeenSet(false),
    m_visaPinVerificationValueHasBeenSet(false)
{
  *this = jsonValue;
}

PinGenerationAttributes& PinGenerationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ibm3624NaturalPin"))
  {
    m_ibm3624NaturalPin = jsonValue.GetObject("Ibm3624NaturalPin");

    m_ibm3624NaturalPinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ibm3624PinFromOffset"))
  {
    m_ibm3624PinFromOffset = jsonValue.GetObject("Ibm3624PinFromOffset");

    m_ibm3624PinFromOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ibm3624PinOffset"))
  {
    m_ibm3624PinOffset = jsonValue.GetObject("Ibm3624PinOffset");

    m_ibm3624PinOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ibm3624RandomPin"))
  {
    m_ibm3624RandomPin = jsonValue.GetObject("Ibm3624RandomPin");

    m_ibm3624RandomPinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisaPin"))
  {
    m_visaPin = jsonValue.GetObject("VisaPin");

    m_visaPinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisaPinVerificationValue"))
  {
    m_visaPinVerificationValue = jsonValue.GetObject("VisaPinVerificationValue");

    m_visaPinVerificationValueHasBeenSet = true;
  }

  return *this;
}

JsonValue PinGenerationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_ibm3624NaturalPinHasBeenSet)
  {
   payload.WithObject("Ibm3624NaturalPin", m_ibm3624NaturalPin.Jsonize());

  }

  if(m_ibm3624PinFromOffsetHasBeenSet)
  {
   payload.WithObject("Ibm3624PinFromOffset", m_ibm3624PinFromOffset.Jsonize());

  }

  if(m_ibm3624PinOffsetHasBeenSet)
  {
   payload.WithObject("Ibm3624PinOffset", m_ibm3624PinOffset.Jsonize());

  }

  if(m_ibm3624RandomPinHasBeenSet)
  {
   payload.WithObject("Ibm3624RandomPin", m_ibm3624RandomPin.Jsonize());

  }

  if(m_visaPinHasBeenSet)
  {
   payload.WithObject("VisaPin", m_visaPin.Jsonize());

  }

  if(m_visaPinVerificationValueHasBeenSet)
  {
   payload.WithObject("VisaPinVerificationValue", m_visaPinVerificationValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
