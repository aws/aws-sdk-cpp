/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/CreateMobileDeviceAccessRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMobileDeviceAccessRuleRequest::CreateMobileDeviceAccessRuleRequest() : 
    m_organizationIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_deviceTypesHasBeenSet(false),
    m_notDeviceTypesHasBeenSet(false),
    m_deviceModelsHasBeenSet(false),
    m_notDeviceModelsHasBeenSet(false),
    m_deviceOperatingSystemsHasBeenSet(false),
    m_notDeviceOperatingSystemsHasBeenSet(false),
    m_deviceUserAgentsHasBeenSet(false),
    m_notDeviceUserAgentsHasBeenSet(false)
{
}

Aws::String CreateMobileDeviceAccessRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", MobileDeviceAccessRuleEffectMapper::GetNameForMobileDeviceAccessRuleEffect(m_effect));
  }

  if(m_deviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceTypesJsonList(m_deviceTypes.size());
   for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
   {
     deviceTypesJsonList[deviceTypesIndex].AsString(m_deviceTypes[deviceTypesIndex]);
   }
   payload.WithArray("DeviceTypes", std::move(deviceTypesJsonList));

  }

  if(m_notDeviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceTypesJsonList(m_notDeviceTypes.size());
   for(unsigned notDeviceTypesIndex = 0; notDeviceTypesIndex < notDeviceTypesJsonList.GetLength(); ++notDeviceTypesIndex)
   {
     notDeviceTypesJsonList[notDeviceTypesIndex].AsString(m_notDeviceTypes[notDeviceTypesIndex]);
   }
   payload.WithArray("NotDeviceTypes", std::move(notDeviceTypesJsonList));

  }

  if(m_deviceModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceModelsJsonList(m_deviceModels.size());
   for(unsigned deviceModelsIndex = 0; deviceModelsIndex < deviceModelsJsonList.GetLength(); ++deviceModelsIndex)
   {
     deviceModelsJsonList[deviceModelsIndex].AsString(m_deviceModels[deviceModelsIndex]);
   }
   payload.WithArray("DeviceModels", std::move(deviceModelsJsonList));

  }

  if(m_notDeviceModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceModelsJsonList(m_notDeviceModels.size());
   for(unsigned notDeviceModelsIndex = 0; notDeviceModelsIndex < notDeviceModelsJsonList.GetLength(); ++notDeviceModelsIndex)
   {
     notDeviceModelsJsonList[notDeviceModelsIndex].AsString(m_notDeviceModels[notDeviceModelsIndex]);
   }
   payload.WithArray("NotDeviceModels", std::move(notDeviceModelsJsonList));

  }

  if(m_deviceOperatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceOperatingSystemsJsonList(m_deviceOperatingSystems.size());
   for(unsigned deviceOperatingSystemsIndex = 0; deviceOperatingSystemsIndex < deviceOperatingSystemsJsonList.GetLength(); ++deviceOperatingSystemsIndex)
   {
     deviceOperatingSystemsJsonList[deviceOperatingSystemsIndex].AsString(m_deviceOperatingSystems[deviceOperatingSystemsIndex]);
   }
   payload.WithArray("DeviceOperatingSystems", std::move(deviceOperatingSystemsJsonList));

  }

  if(m_notDeviceOperatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceOperatingSystemsJsonList(m_notDeviceOperatingSystems.size());
   for(unsigned notDeviceOperatingSystemsIndex = 0; notDeviceOperatingSystemsIndex < notDeviceOperatingSystemsJsonList.GetLength(); ++notDeviceOperatingSystemsIndex)
   {
     notDeviceOperatingSystemsJsonList[notDeviceOperatingSystemsIndex].AsString(m_notDeviceOperatingSystems[notDeviceOperatingSystemsIndex]);
   }
   payload.WithArray("NotDeviceOperatingSystems", std::move(notDeviceOperatingSystemsJsonList));

  }

  if(m_deviceUserAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceUserAgentsJsonList(m_deviceUserAgents.size());
   for(unsigned deviceUserAgentsIndex = 0; deviceUserAgentsIndex < deviceUserAgentsJsonList.GetLength(); ++deviceUserAgentsIndex)
   {
     deviceUserAgentsJsonList[deviceUserAgentsIndex].AsString(m_deviceUserAgents[deviceUserAgentsIndex]);
   }
   payload.WithArray("DeviceUserAgents", std::move(deviceUserAgentsJsonList));

  }

  if(m_notDeviceUserAgentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notDeviceUserAgentsJsonList(m_notDeviceUserAgents.size());
   for(unsigned notDeviceUserAgentsIndex = 0; notDeviceUserAgentsIndex < notDeviceUserAgentsJsonList.GetLength(); ++notDeviceUserAgentsIndex)
   {
     notDeviceUserAgentsJsonList[notDeviceUserAgentsIndex].AsString(m_notDeviceUserAgents[notDeviceUserAgentsIndex]);
   }
   payload.WithArray("NotDeviceUserAgents", std::move(notDeviceUserAgentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMobileDeviceAccessRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.CreateMobileDeviceAccessRule"));
  return headers;

}




