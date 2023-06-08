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

DukptAttributes::DukptAttributes() : 
    m_dukptDerivationType(DukptDerivationType::NOT_SET),
    m_dukptDerivationTypeHasBeenSet(false),
    m_keySerialNumberHasBeenSet(false)
{
}

DukptAttributes::DukptAttributes(JsonView jsonValue) : 
    m_dukptDerivationType(DukptDerivationType::NOT_SET),
    m_dukptDerivationTypeHasBeenSet(false),
    m_keySerialNumberHasBeenSet(false)
{
  *this = jsonValue;
}

DukptAttributes& DukptAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DukptDerivationType"))
  {
    m_dukptDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptDerivationType"));

    m_dukptDerivationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");

    m_keySerialNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue DukptAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_dukptDerivationTypeHasBeenSet)
  {
   payload.WithString("DukptDerivationType", DukptDerivationTypeMapper::GetNameForDukptDerivationType(m_dukptDerivationType));
  }

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
