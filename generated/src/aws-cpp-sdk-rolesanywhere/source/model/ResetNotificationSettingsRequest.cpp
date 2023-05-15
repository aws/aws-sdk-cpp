/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ResetNotificationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetNotificationSettingsRequest::ResetNotificationSettingsRequest() : 
    m_notificationSettingKeysHasBeenSet(false),
    m_trustAnchorIdHasBeenSet(false)
{
}

Aws::String ResetNotificationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notificationSettingKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationSettingKeysJsonList(m_notificationSettingKeys.size());
   for(unsigned notificationSettingKeysIndex = 0; notificationSettingKeysIndex < notificationSettingKeysJsonList.GetLength(); ++notificationSettingKeysIndex)
   {
     notificationSettingKeysJsonList[notificationSettingKeysIndex].AsObject(m_notificationSettingKeys[notificationSettingKeysIndex].Jsonize());
   }
   payload.WithArray("notificationSettingKeys", std::move(notificationSettingKeysJsonList));

  }

  if(m_trustAnchorIdHasBeenSet)
  {
   payload.WithString("trustAnchorId", m_trustAnchorId);

  }

  return payload.View().WriteReadable();
}




