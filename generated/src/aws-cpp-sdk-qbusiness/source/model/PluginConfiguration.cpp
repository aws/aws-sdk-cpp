/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginConfiguration.h>
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

PluginConfiguration::PluginConfiguration() : 
    m_pluginIdHasBeenSet(false)
{
}

PluginConfiguration::PluginConfiguration(JsonView jsonValue) : 
    m_pluginIdHasBeenSet(false)
{
  *this = jsonValue;
}

PluginConfiguration& PluginConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PluginConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
