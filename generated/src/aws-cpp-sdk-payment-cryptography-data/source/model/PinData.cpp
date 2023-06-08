/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PinData.h>
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

PinData::PinData() : 
    m_pinOffsetHasBeenSet(false),
    m_verificationValueHasBeenSet(false)
{
}

PinData::PinData(JsonView jsonValue) : 
    m_pinOffsetHasBeenSet(false),
    m_verificationValueHasBeenSet(false)
{
  *this = jsonValue;
}

PinData& PinData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PinOffset"))
  {
    m_pinOffset = jsonValue.GetString("PinOffset");

    m_pinOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerificationValue"))
  {
    m_verificationValue = jsonValue.GetString("VerificationValue");

    m_verificationValueHasBeenSet = true;
  }

  return *this;
}

JsonValue PinData::Jsonize() const
{
  JsonValue payload;

  if(m_pinOffsetHasBeenSet)
  {
   payload.WithString("PinOffset", m_pinOffset);

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
