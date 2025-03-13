/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptDerivationAttributes.h>
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

DukptDerivationAttributes::DukptDerivationAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DukptDerivationAttributes& DukptDerivationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");
    m_keySerialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptKeyDerivationType"))
  {
    m_dukptKeyDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptKeyDerivationType"));
    m_dukptKeyDerivationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptKeyVariant"))
  {
    m_dukptKeyVariant = DukptKeyVariantMapper::GetDukptKeyVariantForName(jsonValue.GetString("DukptKeyVariant"));
    m_dukptKeyVariantHasBeenSet = true;
  }
  return *this;
}

JsonValue DukptDerivationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  if(m_dukptKeyDerivationTypeHasBeenSet)
  {
   payload.WithString("DukptKeyDerivationType", DukptDerivationTypeMapper::GetNameForDukptDerivationType(m_dukptKeyDerivationType));
  }

  if(m_dukptKeyVariantHasBeenSet)
  {
   payload.WithString("DukptKeyVariant", DukptKeyVariantMapper::GetNameForDukptKeyVariant(m_dukptKeyVariant));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
