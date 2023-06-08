/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod2.h>
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

CryptogramVerificationArpcMethod2::CryptogramVerificationArpcMethod2() : 
    m_cardStatusUpdateHasBeenSet(false),
    m_proprietaryAuthenticationDataHasBeenSet(false)
{
}

CryptogramVerificationArpcMethod2::CryptogramVerificationArpcMethod2(JsonView jsonValue) : 
    m_cardStatusUpdateHasBeenSet(false),
    m_proprietaryAuthenticationDataHasBeenSet(false)
{
  *this = jsonValue;
}

CryptogramVerificationArpcMethod2& CryptogramVerificationArpcMethod2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CardStatusUpdate"))
  {
    m_cardStatusUpdate = jsonValue.GetString("CardStatusUpdate");

    m_cardStatusUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProprietaryAuthenticationData"))
  {
    m_proprietaryAuthenticationData = jsonValue.GetString("ProprietaryAuthenticationData");

    m_proprietaryAuthenticationDataHasBeenSet = true;
  }

  return *this;
}

JsonValue CryptogramVerificationArpcMethod2::Jsonize() const
{
  JsonValue payload;

  if(m_cardStatusUpdateHasBeenSet)
  {
   payload.WithString("CardStatusUpdate", m_cardStatusUpdate);

  }

  if(m_proprietaryAuthenticationDataHasBeenSet)
  {
   payload.WithString("ProprietaryAuthenticationData", m_proprietaryAuthenticationData);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
