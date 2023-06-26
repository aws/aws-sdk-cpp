/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/AsymmetricEncryptionAttributes.h>
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

AsymmetricEncryptionAttributes::AsymmetricEncryptionAttributes() : 
    m_paddingType(PaddingType::NOT_SET),
    m_paddingTypeHasBeenSet(false)
{
}

AsymmetricEncryptionAttributes::AsymmetricEncryptionAttributes(JsonView jsonValue) : 
    m_paddingType(PaddingType::NOT_SET),
    m_paddingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AsymmetricEncryptionAttributes& AsymmetricEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PaddingType"))
  {
    m_paddingType = PaddingTypeMapper::GetPaddingTypeForName(jsonValue.GetString("PaddingType"));

    m_paddingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AsymmetricEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_paddingTypeHasBeenSet)
  {
   payload.WithString("PaddingType", PaddingTypeMapper::GetNameForPaddingType(m_paddingType));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
