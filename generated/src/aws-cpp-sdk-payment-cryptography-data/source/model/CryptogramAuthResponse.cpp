/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CryptogramAuthResponse.h>
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

CryptogramAuthResponse::CryptogramAuthResponse() : 
    m_arpcMethod1HasBeenSet(false),
    m_arpcMethod2HasBeenSet(false)
{
}

CryptogramAuthResponse::CryptogramAuthResponse(JsonView jsonValue) : 
    m_arpcMethod1HasBeenSet(false),
    m_arpcMethod2HasBeenSet(false)
{
  *this = jsonValue;
}

CryptogramAuthResponse& CryptogramAuthResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArpcMethod1"))
  {
    m_arpcMethod1 = jsonValue.GetObject("ArpcMethod1");

    m_arpcMethod1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArpcMethod2"))
  {
    m_arpcMethod2 = jsonValue.GetObject("ArpcMethod2");

    m_arpcMethod2HasBeenSet = true;
  }

  return *this;
}

JsonValue CryptogramAuthResponse::Jsonize() const
{
  JsonValue payload;

  if(m_arpcMethod1HasBeenSet)
  {
   payload.WithObject("ArpcMethod1", m_arpcMethod1.Jsonize());

  }

  if(m_arpcMethod2HasBeenSet)
  {
   payload.WithObject("ArpcMethod2", m_arpcMethod2.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
