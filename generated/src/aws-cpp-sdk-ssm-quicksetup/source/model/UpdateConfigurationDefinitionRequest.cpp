/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/UpdateConfigurationDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConfigurationDefinitionRequest::SerializePayload() const
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

  if(m_typeVersionHasBeenSet)
  {
   payload.WithString("TypeVersion", m_typeVersion);

  }

  return payload.View().WriteReadable();
}




