/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AvailabilityZoneInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

AvailabilityZoneInfo::AvailabilityZoneInfo() : 
    m_availabilityZoneNameHasBeenSet(false),
    m_zoneStatus(ZoneStatus::NOT_SET),
    m_zoneStatusHasBeenSet(false),
    m_configuredDataNodeCountHasBeenSet(false),
    m_availableDataNodeCountHasBeenSet(false),
    m_totalShardsHasBeenSet(false),
    m_totalUnAssignedShardsHasBeenSet(false)
{
}

AvailabilityZoneInfo::AvailabilityZoneInfo(JsonView jsonValue) : 
    m_availabilityZoneNameHasBeenSet(false),
    m_zoneStatus(ZoneStatus::NOT_SET),
    m_zoneStatusHasBeenSet(false),
    m_configuredDataNodeCountHasBeenSet(false),
    m_availableDataNodeCountHasBeenSet(false),
    m_totalShardsHasBeenSet(false),
    m_totalUnAssignedShardsHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityZoneInfo& AvailabilityZoneInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZoneName"))
  {
    m_availabilityZoneName = jsonValue.GetString("AvailabilityZoneName");

    m_availabilityZoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneStatus"))
  {
    m_zoneStatus = ZoneStatusMapper::GetZoneStatusForName(jsonValue.GetString("ZoneStatus"));

    m_zoneStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfiguredDataNodeCount"))
  {
    m_configuredDataNodeCount = jsonValue.GetString("ConfiguredDataNodeCount");

    m_configuredDataNodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableDataNodeCount"))
  {
    m_availableDataNodeCount = jsonValue.GetString("AvailableDataNodeCount");

    m_availableDataNodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalShards"))
  {
    m_totalShards = jsonValue.GetString("TotalShards");

    m_totalShardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalUnAssignedShards"))
  {
    m_totalUnAssignedShards = jsonValue.GetString("TotalUnAssignedShards");

    m_totalUnAssignedShardsHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityZoneInfo::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneNameHasBeenSet)
  {
   payload.WithString("AvailabilityZoneName", m_availabilityZoneName);

  }

  if(m_zoneStatusHasBeenSet)
  {
   payload.WithString("ZoneStatus", ZoneStatusMapper::GetNameForZoneStatus(m_zoneStatus));
  }

  if(m_configuredDataNodeCountHasBeenSet)
  {
   payload.WithString("ConfiguredDataNodeCount", m_configuredDataNodeCount);

  }

  if(m_availableDataNodeCountHasBeenSet)
  {
   payload.WithString("AvailableDataNodeCount", m_availableDataNodeCount);

  }

  if(m_totalShardsHasBeenSet)
  {
   payload.WithString("TotalShards", m_totalShards);

  }

  if(m_totalUnAssignedShardsHasBeenSet)
  {
   payload.WithString("TotalUnAssignedShards", m_totalUnAssignedShards);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
