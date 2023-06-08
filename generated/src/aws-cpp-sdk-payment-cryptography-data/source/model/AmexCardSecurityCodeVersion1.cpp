/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion1.h>
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

AmexCardSecurityCodeVersion1::AmexCardSecurityCodeVersion1() : 
    m_cardExpiryDateHasBeenSet(false)
{
}

AmexCardSecurityCodeVersion1::AmexCardSecurityCodeVersion1(JsonView jsonValue) : 
    m_cardExpiryDateHasBeenSet(false)
{
  *this = jsonValue;
}

AmexCardSecurityCodeVersion1& AmexCardSecurityCodeVersion1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CardExpiryDate"))
  {
    m_cardExpiryDate = jsonValue.GetString("CardExpiryDate");

    m_cardExpiryDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AmexCardSecurityCodeVersion1::Jsonize() const
{
  JsonValue payload;

  if(m_cardExpiryDateHasBeenSet)
  {
   payload.WithString("CardExpiryDate", m_cardExpiryDate);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
