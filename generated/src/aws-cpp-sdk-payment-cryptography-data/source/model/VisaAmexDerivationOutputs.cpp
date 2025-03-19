/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VisaAmexDerivationOutputs.h>
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

VisaAmexDerivationOutputs::VisaAmexDerivationOutputs(JsonView jsonValue)
{
  *this = jsonValue;
}

VisaAmexDerivationOutputs& VisaAmexDerivationOutputs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationRequestKeyArn"))
  {
    m_authorizationRequestKeyArn = jsonValue.GetString("AuthorizationRequestKeyArn");
    m_authorizationRequestKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationRequestKeyCheckValue"))
  {
    m_authorizationRequestKeyCheckValue = jsonValue.GetString("AuthorizationRequestKeyCheckValue");
    m_authorizationRequestKeyCheckValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentPinPekArn"))
  {
    m_currentPinPekArn = jsonValue.GetString("CurrentPinPekArn");
    m_currentPinPekArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentPinPekKeyCheckValue"))
  {
    m_currentPinPekKeyCheckValue = jsonValue.GetString("CurrentPinPekKeyCheckValue");
    m_currentPinPekKeyCheckValueHasBeenSet = true;
  }
  return *this;
}

JsonValue VisaAmexDerivationOutputs::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationRequestKeyArnHasBeenSet)
  {
   payload.WithString("AuthorizationRequestKeyArn", m_authorizationRequestKeyArn);

  }

  if(m_authorizationRequestKeyCheckValueHasBeenSet)
  {
   payload.WithString("AuthorizationRequestKeyCheckValue", m_authorizationRequestKeyCheckValue);

  }

  if(m_currentPinPekArnHasBeenSet)
  {
   payload.WithString("CurrentPinPekArn", m_currentPinPekArn);

  }

  if(m_currentPinPekKeyCheckValueHasBeenSet)
  {
   payload.WithString("CurrentPinPekKeyCheckValue", m_currentPinPekKeyCheckValue);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
