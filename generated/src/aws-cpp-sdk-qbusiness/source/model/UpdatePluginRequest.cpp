/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdatePluginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePluginRequest::UpdatePluginRequest() : 
    m_applicationIdHasBeenSet(false),
    m_authConfigurationHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_state(PluginState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String UpdatePluginRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authConfigurationHasBeenSet)
  {
   payload.WithObject("authConfiguration", m_authConfiguration.Jsonize());

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("serverUrl", m_serverUrl);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", PluginStateMapper::GetNameForPluginState(m_state));
  }

  return payload.View().WriteReadable();
}




