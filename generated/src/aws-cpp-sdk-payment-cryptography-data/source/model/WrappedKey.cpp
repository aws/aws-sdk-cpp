/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/WrappedKey.h>
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

WrappedKey::WrappedKey(JsonView jsonValue)
{
  *this = jsonValue;
}

WrappedKey& WrappedKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WrappedKeyMaterial"))
  {
    m_wrappedKeyMaterial = jsonValue.GetObject("WrappedKeyMaterial");
    m_wrappedKeyMaterialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCheckValueAlgorithm"))
  {
    m_keyCheckValueAlgorithm = KeyCheckValueAlgorithmMapper::GetKeyCheckValueAlgorithmForName(jsonValue.GetString("KeyCheckValueAlgorithm"));
    m_keyCheckValueAlgorithmHasBeenSet = true;
  }
  return *this;
}

JsonValue WrappedKey::Jsonize() const
{
  JsonValue payload;

  if(m_wrappedKeyMaterialHasBeenSet)
  {
   payload.WithObject("WrappedKeyMaterial", m_wrappedKeyMaterial.Jsonize());

  }

  if(m_keyCheckValueAlgorithmHasBeenSet)
  {
   payload.WithString("KeyCheckValueAlgorithm", KeyCheckValueAlgorithmMapper::GetNameForKeyCheckValueAlgorithm(m_keyCheckValueAlgorithm));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
