/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeySummary.h>
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

KeySummary::KeySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

KeySummary& KeySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");
    m_keyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = KeyStateMapper::GetKeyStateForName(jsonValue.GetString("KeyState"));
    m_keyStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyAttributes"))
  {
    m_keyAttributes = jsonValue.GetObject("KeyAttributes");
    m_keyAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyCheckValue"))
  {
    m_keyCheckValue = jsonValue.GetString("KeyCheckValue");
    m_keyCheckValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Exportable"))
  {
    m_exportable = jsonValue.GetBool("Exportable");
    m_exportableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiRegionKeyType"))
  {
    m_multiRegionKeyType = MultiRegionKeyTypeMapper::GetMultiRegionKeyTypeForName(jsonValue.GetString("MultiRegionKeyType"));
    m_multiRegionKeyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryRegion"))
  {
    m_primaryRegion = jsonValue.GetString("PrimaryRegion");
    m_primaryRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue KeySummary::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  if(m_keyStateHasBeenSet)
  {
   payload.WithString("KeyState", KeyStateMapper::GetNameForKeyState(m_keyState));
  }

  if(m_keyAttributesHasBeenSet)
  {
   payload.WithObject("KeyAttributes", m_keyAttributes.Jsonize());

  }

  if(m_keyCheckValueHasBeenSet)
  {
   payload.WithString("KeyCheckValue", m_keyCheckValue);

  }

  if(m_exportableHasBeenSet)
  {
   payload.WithBool("Exportable", m_exportable);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_multiRegionKeyTypeHasBeenSet)
  {
   payload.WithString("MultiRegionKeyType", MultiRegionKeyTypeMapper::GetNameForMultiRegionKeyType(m_multiRegionKeyType));
  }

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("PrimaryRegion", m_primaryRegion);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
