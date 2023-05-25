/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/PluginSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

PluginSummary::PluginSummary() : 
    m_pluginIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_status(PluginHealth::NOT_SET),
    m_statusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_registeredTimeHasBeenSet(false)
{
}

PluginSummary::PluginSummary(JsonView jsonValue) : 
    m_pluginIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_status(PluginHealth::NOT_SET),
    m_statusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_registeredTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PluginSummary& PluginSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PluginHealthMapper::GetPluginHealthForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredTime"))
  {
    m_registeredTime = jsonValue.GetString("registeredTime");

    m_registeredTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PluginSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PluginHealthMapper::GetNameForPluginHealth(m_status));
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_registeredTimeHasBeenSet)
  {
   payload.WithString("registeredTime", m_registeredTime);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
