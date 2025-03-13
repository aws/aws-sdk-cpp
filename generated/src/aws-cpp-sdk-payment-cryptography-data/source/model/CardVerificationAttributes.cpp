/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CardVerificationAttributes.h>
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

CardVerificationAttributes::CardVerificationAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

CardVerificationAttributes& CardVerificationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmexCardSecurityCodeVersion1"))
  {
    m_amexCardSecurityCodeVersion1 = jsonValue.GetObject("AmexCardSecurityCodeVersion1");
    m_amexCardSecurityCodeVersion1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmexCardSecurityCodeVersion2"))
  {
    m_amexCardSecurityCodeVersion2 = jsonValue.GetObject("AmexCardSecurityCodeVersion2");
    m_amexCardSecurityCodeVersion2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("CardVerificationValue1"))
  {
    m_cardVerificationValue1 = jsonValue.GetObject("CardVerificationValue1");
    m_cardVerificationValue1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("CardVerificationValue2"))
  {
    m_cardVerificationValue2 = jsonValue.GetObject("CardVerificationValue2");
    m_cardVerificationValue2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("CardHolderVerificationValue"))
  {
    m_cardHolderVerificationValue = jsonValue.GetObject("CardHolderVerificationValue");
    m_cardHolderVerificationValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicCardVerificationCode"))
  {
    m_dynamicCardVerificationCode = jsonValue.GetObject("DynamicCardVerificationCode");
    m_dynamicCardVerificationCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicCardVerificationValue"))
  {
    m_dynamicCardVerificationValue = jsonValue.GetObject("DynamicCardVerificationValue");
    m_dynamicCardVerificationValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoverDynamicCardVerificationCode"))
  {
    m_discoverDynamicCardVerificationCode = jsonValue.GetObject("DiscoverDynamicCardVerificationCode");
    m_discoverDynamicCardVerificationCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue CardVerificationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_amexCardSecurityCodeVersion1HasBeenSet)
  {
   payload.WithObject("AmexCardSecurityCodeVersion1", m_amexCardSecurityCodeVersion1.Jsonize());

  }

  if(m_amexCardSecurityCodeVersion2HasBeenSet)
  {
   payload.WithObject("AmexCardSecurityCodeVersion2", m_amexCardSecurityCodeVersion2.Jsonize());

  }

  if(m_cardVerificationValue1HasBeenSet)
  {
   payload.WithObject("CardVerificationValue1", m_cardVerificationValue1.Jsonize());

  }

  if(m_cardVerificationValue2HasBeenSet)
  {
   payload.WithObject("CardVerificationValue2", m_cardVerificationValue2.Jsonize());

  }

  if(m_cardHolderVerificationValueHasBeenSet)
  {
   payload.WithObject("CardHolderVerificationValue", m_cardHolderVerificationValue.Jsonize());

  }

  if(m_dynamicCardVerificationCodeHasBeenSet)
  {
   payload.WithObject("DynamicCardVerificationCode", m_dynamicCardVerificationCode.Jsonize());

  }

  if(m_dynamicCardVerificationValueHasBeenSet)
  {
   payload.WithObject("DynamicCardVerificationValue", m_dynamicCardVerificationValue.Jsonize());

  }

  if(m_discoverDynamicCardVerificationCodeHasBeenSet)
  {
   payload.WithObject("DiscoverDynamicCardVerificationCode", m_discoverDynamicCardVerificationCode.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
