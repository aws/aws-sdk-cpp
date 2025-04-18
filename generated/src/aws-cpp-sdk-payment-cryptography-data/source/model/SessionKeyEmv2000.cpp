﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SessionKeyEmv2000.h>
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

SessionKeyEmv2000::SessionKeyEmv2000(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionKeyEmv2000& SessionKeyEmv2000::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryAccountNumber"))
  {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");
    m_primaryAccountNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");
    m_panSequenceNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationTransactionCounter"))
  {
    m_applicationTransactionCounter = jsonValue.GetString("ApplicationTransactionCounter");
    m_applicationTransactionCounterHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionKeyEmv2000::Jsonize() const
{
  JsonValue payload;

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

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
