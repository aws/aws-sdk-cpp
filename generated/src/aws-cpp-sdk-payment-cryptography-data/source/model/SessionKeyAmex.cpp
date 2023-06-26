/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SessionKeyAmex.h>
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

SessionKeyAmex::SessionKeyAmex() : 
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false)
{
}

SessionKeyAmex::SessionKeyAmex(JsonView jsonValue) : 
    m_panSequenceNumberHasBeenSet(false),
    m_primaryAccountNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SessionKeyAmex& SessionKeyAmex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PanSequenceNumber"))
  {
    m_panSequenceNumber = jsonValue.GetString("PanSequenceNumber");

    m_panSequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryAccountNumber"))
  {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");

    m_primaryAccountNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionKeyAmex::Jsonize() const
{
  JsonValue payload;

  if(m_panSequenceNumberHasBeenSet)
  {
   payload.WithString("PanSequenceNumber", m_panSequenceNumber);

  }

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
