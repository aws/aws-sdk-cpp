/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Plugin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

Plugin::Plugin(JsonView jsonValue)
{
  *this = jsonValue;
}

Plugin& Plugin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");
    m_pluginIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverUrl"))
  {
    m_serverUrl = jsonValue.GetString("serverUrl");
    m_serverUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = PluginStateMapper::GetPluginStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildStatus"))
  {
    m_buildStatus = PluginBuildStatusMapper::GetPluginBuildStatusForName(jsonValue.GetString("buildStatus"));
    m_buildStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Plugin::Jsonize() const
{
  JsonValue payload;

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PluginTypeMapper::GetNameForPluginType(m_type));
  }

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("serverUrl", m_serverUrl);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", PluginStateMapper::GetNameForPluginState(m_state));
  }

  if(m_buildStatusHasBeenSet)
  {
   payload.WithString("buildStatus", PluginBuildStatusMapper::GetNameForPluginBuildStatus(m_buildStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
