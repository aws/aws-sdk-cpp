/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatModeConfiguration.h>
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

ChatModeConfiguration::ChatModeConfiguration() : 
    m_pluginConfigurationHasBeenSet(false)
{
}

ChatModeConfiguration::ChatModeConfiguration(JsonView jsonValue) : 
    m_pluginConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ChatModeConfiguration& ChatModeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pluginConfiguration"))
  {
    m_pluginConfiguration = jsonValue.GetObject("pluginConfiguration");

    m_pluginConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ChatModeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pluginConfigurationHasBeenSet)
  {
   payload.WithObject("pluginConfiguration", m_pluginConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
