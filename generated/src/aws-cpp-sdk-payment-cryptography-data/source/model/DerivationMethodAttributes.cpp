/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DerivationMethodAttributes.h>
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

DerivationMethodAttributes::DerivationMethodAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DerivationMethodAttributes& DerivationMethodAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmvCommon"))
  {
    m_emvCommon = jsonValue.GetObject("EmvCommon");
    m_emvCommonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Amex"))
  {
    m_amex = jsonValue.GetObject("Amex");
    m_amexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visa"))
  {
    m_visa = jsonValue.GetObject("Visa");
    m_visaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Emv2000"))
  {
    m_emv2000 = jsonValue.GetObject("Emv2000");
    m_emv2000HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mastercard"))
  {
    m_mastercard = jsonValue.GetObject("Mastercard");
    m_mastercardHasBeenSet = true;
  }
  return *this;
}

JsonValue DerivationMethodAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_emvCommonHasBeenSet)
  {
   payload.WithObject("EmvCommon", m_emvCommon.Jsonize());

  }

  if(m_amexHasBeenSet)
  {
   payload.WithObject("Amex", m_amex.Jsonize());

  }

  if(m_visaHasBeenSet)
  {
   payload.WithObject("Visa", m_visa.Jsonize());

  }

  if(m_emv2000HasBeenSet)
  {
   payload.WithObject("Emv2000", m_emv2000.Jsonize());

  }

  if(m_mastercardHasBeenSet)
  {
   payload.WithObject("Mastercard", m_mastercard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
