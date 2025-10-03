/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/WrappedWorkingKey.h>
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

WrappedWorkingKey::WrappedWorkingKey(JsonView jsonValue)
{
  *this = jsonValue;
}

WrappedWorkingKey& WrappedWorkingKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WrappedKeyMaterial"))
  {
    m_wrappedKeyMaterial = jsonValue.GetString("WrappedKeyMaterial");
    m_wrappedKeyMaterialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCheckValue"))
  {
    m_keyCheckValue = jsonValue.GetString("KeyCheckValue");
    m_keyCheckValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WrappedKeyMaterialFormat"))
  {
    m_wrappedKeyMaterialFormat = WrappedKeyMaterialFormatMapper::GetWrappedKeyMaterialFormatForName(jsonValue.GetString("WrappedKeyMaterialFormat"));
    m_wrappedKeyMaterialFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue WrappedWorkingKey::Jsonize() const
{
  JsonValue payload;

  if(m_wrappedKeyMaterialHasBeenSet)
  {
   payload.WithString("WrappedKeyMaterial", m_wrappedKeyMaterial);

  }

  if(m_keyCheckValueHasBeenSet)
  {
   payload.WithString("KeyCheckValue", m_keyCheckValue);

  }

  if(m_wrappedKeyMaterialFormatHasBeenSet)
  {
   payload.WithString("WrappedKeyMaterialFormat", WrappedKeyMaterialFormatMapper::GetNameForWrappedKeyMaterialFormat(m_wrappedKeyMaterialFormat));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
