/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ConfigurationDefinitionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

ConfigurationDefinitionInput::ConfigurationDefinitionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationDefinitionInput& ConfigurationDefinitionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalDeploymentAdministrationRoleArn"))
  {
    m_localDeploymentAdministrationRoleArn = jsonValue.GetString("LocalDeploymentAdministrationRoleArn");
    m_localDeploymentAdministrationRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalDeploymentExecutionRoleName"))
  {
    m_localDeploymentExecutionRoleName = jsonValue.GetString("LocalDeploymentExecutionRoleName");
    m_localDeploymentExecutionRoleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeVersion"))
  {
    m_typeVersion = jsonValue.GetString("TypeVersion");
    m_typeVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationDefinitionInput::Jsonize() const
{
  JsonValue payload;

  if(m_localDeploymentAdministrationRoleArnHasBeenSet)
  {
   payload.WithString("LocalDeploymentAdministrationRoleArn", m_localDeploymentAdministrationRoleArn);

  }

  if(m_localDeploymentExecutionRoleNameHasBeenSet)
  {
   payload.WithString("LocalDeploymentExecutionRoleName", m_localDeploymentExecutionRoleName);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_typeVersionHasBeenSet)
  {
   payload.WithString("TypeVersion", m_typeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
