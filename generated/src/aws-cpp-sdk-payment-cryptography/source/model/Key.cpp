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

Key::Key(JsonView jsonValue)
{
  *this = jsonValue;
}

Key& Key::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = KeyStateMapper::GetKeyStateForName(jsonValue.GetString("KeyState"));
    m_keyStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyOrigin"))
  {
    m_keyOrigin = KeyOriginMapper::GetKeyOriginForName(jsonValue.GetString("KeyOrigin"));
    m_keyOriginHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");
    m_createTimestampHasBeenSet = true;
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
  if(jsonValue.ValueExists("DeriveKeyUsage"))
  {
    m_deriveKeyUsage = DeriveKeyUsageMapper::GetDeriveKeyUsageForName(jsonValue.GetString("DeriveKeyUsage"));
    m_deriveKeyUsageHasBeenSet = true;
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
  if(jsonValue.ValueExists("ReplicationStatus"))
  {
    Aws::Map<Aws::String, JsonView> replicationStatusJsonMap = jsonValue.GetObject("ReplicationStatus").GetAllObjects();
    for(auto& replicationStatusItem : replicationStatusJsonMap)
    {
      m_replicationStatus[replicationStatusItem.first] = replicationStatusItem.second.AsObject();
    }
    m_replicationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsingDefaultReplicationRegions"))
  {
    m_usingDefaultReplicationRegions = jsonValue.GetBool("UsingDefaultReplicationRegions");
    m_usingDefaultReplicationRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Key::Jsonize() const
{
  JsonValue payload;

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

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_exportableHasBeenSet)
  {
   payload.WithBool("Exportable", m_exportable);

  }

  if(m_keyStateHasBeenSet)
  {
   payload.WithString("KeyState", KeyStateMapper::GetNameForKeyState(m_keyState));
  }

  if(m_keyOriginHasBeenSet)
  {
   payload.WithString("KeyOrigin", KeyOriginMapper::GetNameForKeyOrigin(m_keyOrigin));
  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_usageStartTimestampHasBeenSet)
  {
   payload.WithDouble("UsageStartTimestamp", m_usageStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_usageStopTimestampHasBeenSet)
  {
   payload.WithDouble("UsageStopTimestamp", m_usageStopTimestamp.SecondsWithMSPrecision());
  }

  if(m_deletePendingTimestampHasBeenSet)
  {
   payload.WithDouble("DeletePendingTimestamp", m_deletePendingTimestamp.SecondsWithMSPrecision());
  }

  if(m_deleteTimestampHasBeenSet)
  {
   payload.WithDouble("DeleteTimestamp", m_deleteTimestamp.SecondsWithMSPrecision());
  }

  if(m_deriveKeyUsageHasBeenSet)
  {
   payload.WithString("DeriveKeyUsage", DeriveKeyUsageMapper::GetNameForDeriveKeyUsage(m_deriveKeyUsage));
  }

  if(m_multiRegionKeyTypeHasBeenSet)
  {
   payload.WithString("MultiRegionKeyType", MultiRegionKeyTypeMapper::GetNameForMultiRegionKeyType(m_multiRegionKeyType));
  }

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("PrimaryRegion", m_primaryRegion);

  }

  if(m_replicationStatusHasBeenSet)
  {
   JsonValue replicationStatusJsonMap;
   for(auto& replicationStatusItem : m_replicationStatus)
   {
     replicationStatusJsonMap.WithObject(replicationStatusItem.first, replicationStatusItem.second.Jsonize());
   }
   payload.WithObject("ReplicationStatus", std::move(replicationStatusJsonMap));

  }

  if(m_usingDefaultReplicationRegionsHasBeenSet)
  {
   payload.WithBool("UsingDefaultReplicationRegions", m_usingDefaultReplicationRegions);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
