/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/PutNotificationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutNotificationSettingsRequest::PutNotificationSettingsRequest() : 
    m_notificationSettingsHasBeenSet(false),
    m_trustAnchorIdHasBeenSet(false)
{
}

Aws::String PutNotificationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationSettingsJsonList(m_notificationSettings.size());
   for(unsigned notificationSettingsIndex = 0; notificationSettingsIndex < notificationSettingsJsonList.GetLength(); ++notificationSettingsIndex)
   {
     notificationSettingsJsonList[notificationSettingsIndex].AsObject(m_notificationSettings[notificationSettingsIndex].Jsonize());
   }
   payload.WithArray("notificationSettings", std::move(notificationSettingsJsonList));

  }

  if(m_trustAnchorIdHasBeenSet)
  {
   payload.WithString("trustAnchorId", m_trustAnchorId);

  }

  return payload.View().WriteReadable();
}




