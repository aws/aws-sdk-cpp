/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Device::Device() : 
    m_deviceIdHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_aWSLocationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(DeviceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_deviceIdHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_aWSLocationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_state(DeviceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSLocation"))
  {
    m_aWSLocation = jsonValue.GetObject("AWSLocation");

    m_aWSLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vendor"))
  {
    m_vendor = jsonValue.GetString("Vendor");

    m_vendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetObject("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SiteId"))
  {
    m_siteId = jsonValue.GetString("SiteId");

    m_siteIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DeviceStateMapper::GetDeviceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_aWSLocationHasBeenSet)
  {
   payload.WithObject("AWSLocation", m_aWSLocation.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", m_vendor);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("SerialNumber", m_serialNumber);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", DeviceStateMapper::GetNameForDeviceState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
