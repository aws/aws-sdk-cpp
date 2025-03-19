/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptAttributes.h>
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

DukptAttributes::DukptAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DukptAttributes& DukptAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");
    m_keySerialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptDerivationType"))
  {
    m_dukptDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptDerivationType"));
    m_dukptDerivationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DukptAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  if(m_dukptDerivationTypeHasBeenSet)
  {
   payload.WithString("DukptDerivationType", DukptDerivationTypeMapper::GetNameForDukptDerivationType(m_dukptDerivationType));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
