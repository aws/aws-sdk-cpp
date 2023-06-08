/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CardVerificationValue2.h>
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

CardVerificationValue2::CardVerificationValue2() : 
    m_cardExpiryDateHasBeenSet(false)
{
}

CardVerificationValue2::CardVerificationValue2(JsonView jsonValue) : 
    m_cardExpiryDateHasBeenSet(false)
{
  *this = jsonValue;
}

CardVerificationValue2& CardVerificationValue2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CardExpiryDate"))
  {
    m_cardExpiryDate = jsonValue.GetString("CardExpiryDate");

    m_cardExpiryDateHasBeenSet = true;
  }

  return *this;
}

JsonValue CardVerificationValue2::Jsonize() const
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
