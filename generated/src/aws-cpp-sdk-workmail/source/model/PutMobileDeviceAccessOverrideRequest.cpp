/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PutMobileDeviceAccessOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMobileDeviceAccessOverrideRequest::PutMobileDeviceAccessOverrideRequest() : 
    m_organizationIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String PutMobileDeviceAccessOverrideRequest::SerializePayload() const
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

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", MobileDeviceAccessRuleEffectMapper::GetNameForMobileDeviceAccessRuleEffect(m_effect));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutMobileDeviceAccessOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutMobileDeviceAccessOverride"));
  return headers;

}




