/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion2.h>
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

AmexCardSecurityCodeVersion2::AmexCardSecurityCodeVersion2() : 
    m_cardExpiryDateHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
}

AmexCardSecurityCodeVersion2::AmexCardSecurityCodeVersion2(JsonView jsonValue) : 
    m_cardExpiryDateHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

AmexCardSecurityCodeVersion2& AmexCardSecurityCodeVersion2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CardExpiryDate"))
  {
    m_cardExpiryDate = jsonValue.GetString("CardExpiryDate");

    m_cardExpiryDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue AmexCardSecurityCodeVersion2::Jsonize() const
{
  JsonValue payload;

  if(m_cardExpiryDateHasBeenSet)
  {
   payload.WithString("CardExpiryDate", m_cardExpiryDate);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
