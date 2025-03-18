/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyAttributes.h>
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

KeyAttributes::KeyAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyAttributes& KeyAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = KeyUsageMapper::GetKeyUsageForName(jsonValue.GetString("KeyUsage"));
    m_keyUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyClass"))
  {
    m_keyClass = KeyClassMapper::GetKeyClassForName(jsonValue.GetString("KeyClass"));
    m_keyClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));
    m_keyAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyModesOfUse"))
  {
    m_keyModesOfUse = jsonValue.GetObject("KeyModesOfUse");
    m_keyModesOfUseHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_keyUsageHasBeenSet)
  {
   payload.WithString("KeyUsage", KeyUsageMapper::GetNameForKeyUsage(m_keyUsage));
  }

  if(m_keyClassHasBeenSet)
  {
   payload.WithString("KeyClass", KeyClassMapper::GetNameForKeyClass(m_keyClass));
  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if(m_keyModesOfUseHasBeenSet)
  {
   payload.WithObject("KeyModesOfUse", m_keyModesOfUse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
