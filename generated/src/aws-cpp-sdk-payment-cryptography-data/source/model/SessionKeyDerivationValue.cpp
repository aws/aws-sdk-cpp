/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SessionKeyDerivationValue.h>
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

SessionKeyDerivationValue::SessionKeyDerivationValue() : 
    m_applicationCryptogramHasBeenSet(false),
    m_applicationTransactionCounterHasBeenSet(false)
{
}

SessionKeyDerivationValue::SessionKeyDerivationValue(JsonView jsonValue) : 
    m_applicationCryptogramHasBeenSet(false),
    m_applicationTransactionCounterHasBeenSet(false)
{
  *this = jsonValue;
}

SessionKeyDerivationValue& SessionKeyDerivationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationCryptogram"))
  {
    m_applicationCryptogram = jsonValue.GetString("ApplicationCryptogram");

    m_applicationCryptogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationTransactionCounter"))
  {
    m_applicationTransactionCounter = jsonValue.GetString("ApplicationTransactionCounter");

    m_applicationTransactionCounterHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionKeyDerivationValue::Jsonize() const
{
  JsonValue payload;

  if(m_applicationCryptogramHasBeenSet)
  {
   payload.WithString("ApplicationCryptogram", m_applicationCryptogram);

  }

  if(m_applicationTransactionCounterHasBeenSet)
  {
   payload.WithString("ApplicationTransactionCounter", m_applicationTransactionCounter);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
