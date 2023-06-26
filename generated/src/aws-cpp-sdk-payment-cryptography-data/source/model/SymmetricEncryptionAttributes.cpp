/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SymmetricEncryptionAttributes.h>
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

SymmetricEncryptionAttributes::SymmetricEncryptionAttributes() : 
    m_initializationVectorHasBeenSet(false),
    m_mode(EncryptionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_paddingType(PaddingType::NOT_SET),
    m_paddingTypeHasBeenSet(false)
{
}

SymmetricEncryptionAttributes::SymmetricEncryptionAttributes(JsonView jsonValue) : 
    m_initializationVectorHasBeenSet(false),
    m_mode(EncryptionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_paddingType(PaddingType::NOT_SET),
    m_paddingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SymmetricEncryptionAttributes& SymmetricEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");

    m_initializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EncryptionModeMapper::GetEncryptionModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PaddingType"))
  {
    m_paddingType = PaddingTypeMapper::GetPaddingTypeForName(jsonValue.GetString("PaddingType"));

    m_paddingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SymmetricEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EncryptionModeMapper::GetNameForEncryptionMode(m_mode));
  }

  if(m_paddingTypeHasBeenSet)
  {
   payload.WithString("PaddingType", PaddingTypeMapper::GetNameForPaddingType(m_paddingType));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
