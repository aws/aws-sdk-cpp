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

MacAlgorithmDukpt::MacAlgorithmDukpt() : 
    m_dukptDerivationType(DukptDerivationType::NOT_SET),
    m_dukptDerivationTypeHasBeenSet(false),
    m_dukptKeyVariant(DukptKeyVariant::NOT_SET),
    m_dukptKeyVariantHasBeenSet(false),
    m_keySerialNumberHasBeenSet(false)
{
}

MacAlgorithmDukpt::MacAlgorithmDukpt(JsonView jsonValue) : 
    m_dukptDerivationType(DukptDerivationType::NOT_SET),
    m_dukptDerivationTypeHasBeenSet(false),
    m_dukptKeyVariant(DukptKeyVariant::NOT_SET),
    m_dukptKeyVariantHasBeenSet(false),
    m_keySerialNumberHasBeenSet(false)
{
  *this = jsonValue;
}

MacAlgorithmDukpt& MacAlgorithmDukpt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DukptDerivationType"))
  {
    m_dukptDerivationType = DukptDerivationTypeMapper::GetDukptDerivationTypeForName(jsonValue.GetString("DukptDerivationType"));

    m_dukptDerivationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DukptKeyVariant"))
  {
    m_dukptKeyVariant = DukptKeyVariantMapper::GetDukptKeyVariantForName(jsonValue.GetString("DukptKeyVariant"));

    m_dukptKeyVariantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");

    m_keySerialNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue MacAlgorithmDukpt::Jsonize() const
{
  JsonValue payload;

  if(m_dukptDerivationTypeHasBeenSet)
  {
   payload.WithString("DukptDerivationType", DukptDerivationTypeMapper::GetNameForDukptDerivationType(m_dukptDerivationType));
  }

  if(m_dukptKeyVariantHasBeenSet)
  {
   payload.WithString("DukptKeyVariant", DukptKeyVariantMapper::GetNameForDukptKeyVariant(m_dukptKeyVariant));
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
