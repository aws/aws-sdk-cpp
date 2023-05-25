/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

RobotApplicationConfig::RobotApplicationConfig() : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_toolsHasBeenSet(false)
{
}

RobotApplicationConfig::RobotApplicationConfig(JsonView jsonValue) : 
    m_applicationHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_launchConfigHasBeenSet(false),
    m_uploadConfigurationsHasBeenSet(false),
    m_toolsHasBeenSet(false)
{
  *this = jsonValue;
}

RobotApplicationConfig& RobotApplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("application"))
  {
    m_application = jsonValue.GetString("application");

    m_applicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationVersion"))
  {
    m_applicationVersion = jsonValue.GetString("applicationVersion");

    m_applicationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfig"))
  {
    m_launchConfig = jsonValue.GetObject("launchConfig");

    m_launchConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadConfigurations"))
  {
    Aws::Utils::Array<JsonView> uploadConfigurationsJsonList = jsonValue.GetArray("uploadConfigurations");
    for(unsigned uploadConfigurationsIndex = 0; uploadConfigurationsIndex < uploadConfigurationsJsonList.GetLength(); ++uploadConfigurationsIndex)
    {
      m_uploadConfigurations.push_back(uploadConfigurationsJsonList[uploadConfigurationsIndex].AsObject());
    }
    m_uploadConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tools"))
  {
    Aws::Utils::Array<JsonView> toolsJsonList = jsonValue.GetArray("tools");
    for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
    {
      m_tools.push_back(toolsJsonList[toolsIndex].AsObject());
    }
    m_toolsHasBeenSet = true;
  }

  return *this;
}

JsonValue RobotApplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithString("applicationVersion", m_applicationVersion);

  }

  if(m_launchConfigHasBeenSet)
  {
   payload.WithObject("launchConfig", m_launchConfig.Jsonize());

  }

  if(m_uploadConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> uploadConfigurationsJsonList(m_uploadConfigurations.size());
   for(unsigned uploadConfigurationsIndex = 0; uploadConfigurationsIndex < uploadConfigurationsJsonList.GetLength(); ++uploadConfigurationsIndex)
   {
     uploadConfigurationsJsonList[uploadConfigurationsIndex].AsObject(m_uploadConfigurations[uploadConfigurationsIndex].Jsonize());
   }
   payload.WithArray("uploadConfigurations", std::move(uploadConfigurationsJsonList));

  }

  if(m_toolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toolsJsonList(m_tools.size());
   for(unsigned toolsIndex = 0; toolsIndex < toolsJsonList.GetLength(); ++toolsIndex)
   {
     toolsJsonList[toolsIndex].AsObject(m_tools[toolsIndex].Jsonize());
   }
   payload.WithArray("tools", std::move(toolsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
