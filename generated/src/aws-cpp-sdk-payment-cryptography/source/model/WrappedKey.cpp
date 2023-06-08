/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/WrappedKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

WrappedKey::WrappedKey() : 
    m_keyMaterialHasBeenSet(false),
    m_wrappedKeyMaterialFormat(WrappedKeyMaterialFormat::NOT_SET),
    m_wrappedKeyMaterialFormatHasBeenSet(false),
    m_wrappingKeyArnHasBeenSet(false)
{
}

WrappedKey::WrappedKey(JsonView jsonValue) : 
    m_keyMaterialHasBeenSet(false),
    m_wrappedKeyMaterialFormat(WrappedKeyMaterialFormat::NOT_SET),
    m_wrappedKeyMaterialFormatHasBeenSet(false),
    m_wrappingKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

WrappedKey& WrappedKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyMaterial"))
  {
    m_keyMaterial = jsonValue.GetString("KeyMaterial");

    m_keyMaterialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappedKeyMaterialFormat"))
  {
    m_wrappedKeyMaterialFormat = WrappedKeyMaterialFormatMapper::GetWrappedKeyMaterialFormatForName(jsonValue.GetString("WrappedKeyMaterialFormat"));

    m_wrappedKeyMaterialFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappingKeyArn"))
  {
    m_wrappingKeyArn = jsonValue.GetString("WrappingKeyArn");

    m_wrappingKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WrappedKey::Jsonize() const
{
  JsonValue payload;

  if(m_keyMaterialHasBeenSet)
  {
   payload.WithString("KeyMaterial", m_keyMaterial);

  }

  if(m_wrappedKeyMaterialFormatHasBeenSet)
  {
   payload.WithString("WrappedKeyMaterialFormat", WrappedKeyMaterialFormatMapper::GetNameForWrappedKeyMaterialFormat(m_wrappedKeyMaterialFormat));
  }

  if(m_wrappingKeyArnHasBeenSet)
  {
   payload.WithString("WrappingKeyArn", m_wrappingKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
