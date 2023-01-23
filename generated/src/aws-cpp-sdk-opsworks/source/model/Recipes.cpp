/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/Recipes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Recipes::Recipes() : 
    m_setupHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_deployHasBeenSet(false),
    m_undeployHasBeenSet(false),
    m_shutdownHasBeenSet(false)
{
}

Recipes::Recipes(JsonView jsonValue) : 
    m_setupHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_deployHasBeenSet(false),
    m_undeployHasBeenSet(false),
    m_shutdownHasBeenSet(false)
{
  *this = jsonValue;
}

Recipes& Recipes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Setup"))
  {
    Aws::Utils::Array<JsonView> setupJsonList = jsonValue.GetArray("Setup");
    for(unsigned setupIndex = 0; setupIndex < setupJsonList.GetLength(); ++setupIndex)
    {
      m_setup.push_back(setupJsonList[setupIndex].AsString());
    }
    m_setupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configure"))
  {
    Aws::Utils::Array<JsonView> configureJsonList = jsonValue.GetArray("Configure");
    for(unsigned configureIndex = 0; configureIndex < configureJsonList.GetLength(); ++configureIndex)
    {
      m_configure.push_back(configureJsonList[configureIndex].AsString());
    }
    m_configureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deploy"))
  {
    Aws::Utils::Array<JsonView> deployJsonList = jsonValue.GetArray("Deploy");
    for(unsigned deployIndex = 0; deployIndex < deployJsonList.GetLength(); ++deployIndex)
    {
      m_deploy.push_back(deployJsonList[deployIndex].AsString());
    }
    m_deployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Undeploy"))
  {
    Aws::Utils::Array<JsonView> undeployJsonList = jsonValue.GetArray("Undeploy");
    for(unsigned undeployIndex = 0; undeployIndex < undeployJsonList.GetLength(); ++undeployIndex)
    {
      m_undeploy.push_back(undeployJsonList[undeployIndex].AsString());
    }
    m_undeployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shutdown"))
  {
    Aws::Utils::Array<JsonView> shutdownJsonList = jsonValue.GetArray("Shutdown");
    for(unsigned shutdownIndex = 0; shutdownIndex < shutdownJsonList.GetLength(); ++shutdownIndex)
    {
      m_shutdown.push_back(shutdownJsonList[shutdownIndex].AsString());
    }
    m_shutdownHasBeenSet = true;
  }

  return *this;
}

JsonValue Recipes::Jsonize() const
{
  JsonValue payload;

  if(m_setupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> setupJsonList(m_setup.size());
   for(unsigned setupIndex = 0; setupIndex < setupJsonList.GetLength(); ++setupIndex)
   {
     setupJsonList[setupIndex].AsString(m_setup[setupIndex]);
   }
   payload.WithArray("Setup", std::move(setupJsonList));

  }

  if(m_configureHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configureJsonList(m_configure.size());
   for(unsigned configureIndex = 0; configureIndex < configureJsonList.GetLength(); ++configureIndex)
   {
     configureJsonList[configureIndex].AsString(m_configure[configureIndex]);
   }
   payload.WithArray("Configure", std::move(configureJsonList));

  }

  if(m_deployHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deployJsonList(m_deploy.size());
   for(unsigned deployIndex = 0; deployIndex < deployJsonList.GetLength(); ++deployIndex)
   {
     deployJsonList[deployIndex].AsString(m_deploy[deployIndex]);
   }
   payload.WithArray("Deploy", std::move(deployJsonList));

  }

  if(m_undeployHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> undeployJsonList(m_undeploy.size());
   for(unsigned undeployIndex = 0; undeployIndex < undeployJsonList.GetLength(); ++undeployIndex)
   {
     undeployJsonList[undeployIndex].AsString(m_undeploy[undeployIndex]);
   }
   payload.WithArray("Undeploy", std::move(undeployJsonList));

  }

  if(m_shutdownHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shutdownJsonList(m_shutdown.size());
   for(unsigned shutdownIndex = 0; shutdownIndex < shutdownJsonList.GetLength(); ++shutdownIndex)
   {
     shutdownJsonList[shutdownIndex].AsString(m_shutdown[shutdownIndex]);
   }
   payload.WithArray("Shutdown", std::move(shutdownJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
