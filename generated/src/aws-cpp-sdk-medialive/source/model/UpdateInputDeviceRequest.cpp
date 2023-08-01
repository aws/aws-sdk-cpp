/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateInputDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInputDeviceRequest::UpdateInputDeviceRequest() : 
    m_hdDeviceSettingsHasBeenSet(false),
    m_inputDeviceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uhdDeviceSettingsHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

Aws::String UpdateInputDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hdDeviceSettingsHasBeenSet)
  {
   payload.WithObject("hdDeviceSettings", m_hdDeviceSettings.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_uhdDeviceSettingsHasBeenSet)
  {
   payload.WithObject("uhdDeviceSettings", m_uhdDeviceSettings.Jsonize());

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  return payload.View().WriteReadable();
}




