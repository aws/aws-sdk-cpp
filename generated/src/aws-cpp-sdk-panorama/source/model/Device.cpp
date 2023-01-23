/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

Device::Device() : 
    m_brand(DeviceBrand::NOT_SET),
    m_brandHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_currentSoftwareHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceAggregatedStatus(DeviceAggregatedStatus::NOT_SET),
    m_deviceAggregatedStatusHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_latestDeviceJobHasBeenSet(false),
    m_leaseExpirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(DeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_brand(DeviceBrand::NOT_SET),
    m_brandHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_currentSoftwareHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceAggregatedStatus(DeviceAggregatedStatus::NOT_SET),
    m_deviceAggregatedStatusHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_latestDeviceJobHasBeenSet(false),
    m_leaseExpirationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provisioningStatus(DeviceStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(DeviceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = DeviceBrandMapper::GetDeviceBrandForName(jsonValue.GetString("Brand"));

    m_brandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentSoftware"))
  {
    m_currentSoftware = jsonValue.GetString("CurrentSoftware");

    m_currentSoftwareHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceAggregatedStatus"))
  {
    m_deviceAggregatedStatus = DeviceAggregatedStatusMapper::GetDeviceAggregatedStatusForName(jsonValue.GetString("DeviceAggregatedStatus"));

    m_deviceAggregatedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestDeviceJob"))
  {
    m_latestDeviceJob = jsonValue.GetObject("LatestDeviceJob");

    m_latestDeviceJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LeaseExpirationTime"))
  {
    m_leaseExpirationTime = jsonValue.GetDouble("LeaseExpirationTime");

    m_leaseExpirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("ProvisioningStatus"));

    m_provisioningStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_brandHasBeenSet)
  {
   payload.WithString("Brand", DeviceBrandMapper::GetNameForDeviceBrand(m_brand));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_currentSoftwareHasBeenSet)
  {
   payload.WithString("CurrentSoftware", m_currentSoftware);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deviceAggregatedStatusHasBeenSet)
  {
   payload.WithString("DeviceAggregatedStatus", DeviceAggregatedStatusMapper::GetNameForDeviceAggregatedStatus(m_deviceAggregatedStatus));
  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_latestDeviceJobHasBeenSet)
  {
   payload.WithObject("LatestDeviceJob", m_latestDeviceJob.Jsonize());

  }

  if(m_leaseExpirationTimeHasBeenSet)
  {
   payload.WithDouble("LeaseExpirationTime", m_leaseExpirationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", DeviceStatusMapper::GetNameForDeviceStatus(m_provisioningStatus));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DeviceTypeMapper::GetNameForDeviceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
