/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMobileDeviceAccessEffectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMobileDeviceAccessEffectRequest::GetMobileDeviceAccessEffectRequest() : 
    m_organizationIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_deviceOperatingSystemHasBeenSet(false),
    m_deviceUserAgentHasBeenSet(false)
{
}

Aws::String GetMobileDeviceAccessEffectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("DeviceType", m_deviceType);

  }

  if(m_deviceModelHasBeenSet)
  {
   payload.WithString("DeviceModel", m_deviceModel);

  }

  if(m_deviceOperatingSystemHasBeenSet)
  {
   payload.WithString("DeviceOperatingSystem", m_deviceOperatingSystem);

  }

  if(m_deviceUserAgentHasBeenSet)
  {
   payload.WithString("DeviceUserAgent", m_deviceUserAgent);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMobileDeviceAccessEffectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.GetMobileDeviceAccessEffect"));
  return headers;

}




