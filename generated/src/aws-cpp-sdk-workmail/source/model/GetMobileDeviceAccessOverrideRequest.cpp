/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMobileDeviceAccessOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMobileDeviceAccessOverrideRequest::GetMobileDeviceAccessOverrideRequest() : 
    m_organizationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

Aws::String GetMobileDeviceAccessOverrideRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMobileDeviceAccessOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.GetMobileDeviceAccessOverride"));
  return headers;

}




