/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod1.h>
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

CryptogramVerificationArpcMethod1::CryptogramVerificationArpcMethod1() : 
    m_authResponseCodeHasBeenSet(false)
{
}

CryptogramVerificationArpcMethod1::CryptogramVerificationArpcMethod1(JsonView jsonValue) : 
    m_authResponseCodeHasBeenSet(false)
{
  *this = jsonValue;
}

CryptogramVerificationArpcMethod1& CryptogramVerificationArpcMethod1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthResponseCode"))
  {
    m_authResponseCode = jsonValue.GetString("AuthResponseCode");

    m_authResponseCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue CryptogramVerificationArpcMethod1::Jsonize() const
{
  JsonValue payload;

  if(m_authResponseCodeHasBeenSet)
  {
   payload.WithString("AuthResponseCode", m_authResponseCode);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
