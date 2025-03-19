/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/MacAlgorithmDukpt.h>
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

MacAlgorithmDukpt::MacAlgorithmDukpt(JsonView jsonValue)
{
  *this = jsonValue;
}

MacAlgorithmDukpt& MacAlgorithmDukpt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");
    m_keySerialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptKeyVariant"))
  {
    m_dukptKeyVariant = DukptKeyVariantMapper::GetDukptKeyVariantForName(jsonValue.GetString("DukptKeyVariant"));
    m_dukptKeyVariantHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DukptDerivationType"))
  {
    m_dukptDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptDerivationType"));
    m_dukptDerivationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue MacAlgorithmDukpt::Jsonize() const
{
  JsonValue payload;

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  if(m_dukptKeyVariantHasBeenSet)
  {
   payload.WithString("DukptKeyVariant", DukptKeyVariantMapper::GetNameForDukptKeyVariant(m_dukptKeyVariant));
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
