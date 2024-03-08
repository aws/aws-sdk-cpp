/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreatePluginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePluginRequest::CreatePluginRequest() : 
    m_applicationIdHasBeenSet(false),
    m_authConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_displayNameHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(PluginType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreatePluginRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authConfigurationHasBeenSet)
  {
   payload.WithObject("authConfiguration", m_authConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("serverUrl", m_serverUrl);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PluginTypeMapper::GetNameForPluginType(m_type));
  }

  return payload.View().WriteReadable();
}




