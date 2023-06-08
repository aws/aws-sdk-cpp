/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CardHolderVerificationValue.h>
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

CardHolderVerificationValue::CardHolderVerificationValue() : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_unpredictableNumberHasBeenSet(false)
{
}

CardHolderVerificationValue::CardHolderVerificationValue(JsonView jsonValue) : 
    m_applicationTransactionCounterHasBeenSet(false),
    m_panSequenceNumberHasBeenSet(false),
    m_unpredictableNumberHasBeenSet(false)
{
  *this = jsonValue;
}

CardHolderVerificationValue& CardHolderVerificationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationTransactionCounter"))
  {
    m_applicationTransactionCounter = jsonValue.GetString("ApplicationTransactionCounter");

    m_applicationTransactionCounterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");

    m_panSequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnpredictableNumber"))
  {
    m_unpredictableNumber = jsonValue.GetString("UnpredictableNumber");

    m_unpredictableNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue CardHolderVerificationValue::Jsonize() const
{
  JsonValue payload;

  if(m_applicationTransactionCounterHasBeenSet)
  {
   payload.WithString("ApplicationTransactionCounter", m_applicationTransactionCounter);

  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

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
