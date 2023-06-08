/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/Key.h>
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

Key::Key() : 
    m_createTimestampHasBeenSet(false),
    m_deletePendingTimestampHasBeenSet(false),
    m_deleteTimestampHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_exportable(false),
    m_exportableHasBeenSet(false),
    m_keyArnHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_keyCheckValueHasBeenSet(false),
    m_keyCheckValueAlgorithm(KeyCheckValueAlgorithm::NOT_SET),
    m_keyCheckValueAlgorithmHasBeenSet(false),
    m_keyOrigin(KeyOrigin::NOT_SET),
    m_keyOriginHasBeenSet(false),
    m_keyState(KeyState::NOT_SET),
    m_keyStateHasBeenSet(false),
    m_usageStartTimestampHasBeenSet(false),
    m_usageStopTimestampHasBeenSet(false)
{
}

Key::Key(JsonView jsonValue) : 
    m_createTimestampHasBeenSet(false),
    m_deletePendingTimestampHasBeenSet(false),
    m_deleteTimestampHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_exportable(false),
    m_exportableHasBeenSet(false),
    m_keyArnHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_keyCheckValueHasBeenSet(false),
    m_keyCheckValueAlgorithm(KeyCheckValueAlgorithm::NOT_SET),
    m_keyCheckValueAlgorithmHasBeenSet(false),
    m_keyOrigin(KeyOrigin::NOT_SET),
    m_keyOriginHasBeenSet(false),
    m_keyState(KeyState::NOT_SET),
    m_keyStateHasBeenSet(false),
    m_usageStartTimestampHasBeenSet(false),
    m_usageStopTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Key& Key::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletePendingTimestamp"))
  {
    m_deletePendingTimestamp = jsonValue.GetDouble("DeletePendingTimestamp");

    m_deletePendingTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteTimestamp"))
  {
    m_deleteTimestamp = jsonValue.GetDouble("DeleteTimestamp");

    m_deleteTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exportable"))
  {
    m_exportable = jsonValue.GetBool("Exportable");

    m_exportableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");

    m_keyArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("KeyCheckValueAlgorithm"))
  {
    m_keyCheckValueAlgorithm = KeyCheckValueAlgorithmMapper::GetKeyCheckValueAlgorithmForName(jsonValue.GetString("KeyCheckValueAlgorithm"));

    m_keyCheckValueAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyOrigin"))
  {
    m_keyOrigin = KeyOriginMapper::GetKeyOriginForName(jsonValue.GetString("KeyOrigin"));

    m_keyOriginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = KeyStateMapper::GetKeyStateForName(jsonValue.GetString("KeyState"));

    m_keyStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageStartTimestamp"))
  {
    m_usageStartTimestamp = jsonValue.GetDouble("UsageStartTimestamp");

    m_usageStartTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageStopTimestamp"))
  {
    m_usageStopTimestamp = jsonValue.GetDouble("UsageStopTimestamp");

    m_usageStopTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Key::Jsonize() const
{
  JsonValue payload;

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_deletePendingTimestampHasBeenSet)
  {
   payload.WithDouble("DeletePendingTimestamp", m_deletePendingTimestamp.SecondsWithMSPrecision());
  }

  if(m_deleteTimestampHasBeenSet)
  {
   payload.WithDouble("DeleteTimestamp", m_deleteTimestamp.SecondsWithMSPrecision());
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_exportableHasBeenSet)
  {
   payload.WithBool("Exportable", m_exportable);

  }

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  if(m_keyAttributesHasBeenSet)
  {
   payload.WithObject("KeyAttributes", m_keyAttributes.Jsonize());

  }

  if(m_keyCheckValueHasBeenSet)
  {
   payload.WithString("KeyCheckValue", m_keyCheckValue);

  }

  if(m_keyCheckValueAlgorithmHasBeenSet)
  {
   payload.WithString("KeyCheckValueAlgorithm", KeyCheckValueAlgorithmMapper::GetNameForKeyCheckValueAlgorithm(m_keyCheckValueAlgorithm));
  }

  if(m_keyOriginHasBeenSet)
  {
   payload.WithString("KeyOrigin", KeyOriginMapper::GetNameForKeyOrigin(m_keyOrigin));
  }

  if(m_keyStateHasBeenSet)
  {
   payload.WithString("KeyState", KeyStateMapper::GetNameForKeyState(m_keyState));
  }

  if(m_usageStartTimestampHasBeenSet)
  {
   payload.WithDouble("UsageStartTimestamp", m_usageStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_usageStopTimestampHasBeenSet)
  {
   payload.WithDouble("UsageStopTimestamp", m_usageStopTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
