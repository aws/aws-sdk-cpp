/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DynamicCardVerificationValue.h>
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

DynamicCardVerificationValue::DynamicCardVerificationValue() : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_cardExpiryDateHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
}

DynamicCardVerificationValue::DynamicCardVerificationValue(JsonView jsonValue) : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_cardExpiryDateHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicCardVerificationValue& DynamicCardVerificationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationTransactionCounter"))
  {
    m_applicationTransactionCounter = jsonValue.GetString("ApplicationTransactionCounter");

    m_applicationTransactionCounterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CardExpiryDate"))
  {
    m_cardExpiryDate = jsonValue.GetString("CardExpiryDate");

    m_cardExpiryDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");

    m_panSequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicCardVerificationValue::Jsonize() const
{
  JsonValue payload;

  if(m_applicationTransactionCounterHasBeenSet)
  {
   payload.WithString("ApplicationTransactionCounter", m_applicationTransactionCounter);

  }

  if(m_cardExpiryDateHasBeenSet)
  {
   payload.WithString("CardExpiryDate", m_cardExpiryDate);

  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

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
