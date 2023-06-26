/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DiscoverDynamicCardVerificationCode.h>
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

DiscoverDynamicCardVerificationCode::DiscoverDynamicCardVerificationCode() : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_cardExpiryDateHasBeenSet(false),
    m_unpredictableNumberHasBeenSet(false)
{
}

DiscoverDynamicCardVerificationCode::DiscoverDynamicCardVerificationCode(JsonView jsonValue) : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_cardExpiryDateHasBeenSet(false),
    m_unpredictableNumberHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoverDynamicCardVerificationCode& DiscoverDynamicCardVerificationCode::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("UnpredictableNumber"))
  {
    m_unpredictableNumber = jsonValue.GetString("UnpredictableNumber");

    m_unpredictableNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoverDynamicCardVerificationCode::Jsonize() const
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

  if(m_unpredictableNumberHasBeenSet)
  {
   payload.WithString("UnpredictableNumber", m_unpredictableNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
