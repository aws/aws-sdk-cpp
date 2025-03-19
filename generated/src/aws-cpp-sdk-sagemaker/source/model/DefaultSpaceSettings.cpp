/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DefaultSpaceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DefaultSpaceSettings::DefaultSpaceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DefaultSpaceSettings& DefaultSpaceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JupyterServerAppSettings"))
  {
    m_jupyterServerAppSettings = jsonValue.GetObject("JupyterServerAppSettings");
    m_jupyterServerAppSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KernelGatewayAppSettings"))
  {
    m_kernelGatewayAppSettings = jsonValue.GetObject("KernelGatewayAppSettings");
    m_kernelGatewayAppSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JupyterLabAppSettings"))
  {
    m_jupyterLabAppSettings = jsonValue.GetObject("JupyterLabAppSettings");
    m_jupyterLabAppSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceStorageSettings"))
  {
    m_spaceStorageSettings = jsonValue.GetObject("SpaceStorageSettings");
    m_spaceStorageSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomPosixUserConfig"))
  {
    m_customPosixUserConfig = jsonValue.GetObject("CustomPosixUserConfig");
    m_customPosixUserConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomFileSystemConfigs"))
  {
    Aws::Utils::Array<JsonView> customFileSystemConfigsJsonList = jsonValue.GetArray("CustomFileSystemConfigs");
    for(unsigned customFileSystemConfigsIndex = 0; customFileSystemConfigsIndex < customFileSystemConfigsJsonList.GetLength(); ++customFileSystemConfigsIndex)
    {
      m_customFileSystemConfigs.push_back(customFileSystemConfigsJsonList[customFileSystemConfigsIndex].AsObject());
    }
    m_customFileSystemConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultSpaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_jupyterServerAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterServerAppSettings", m_jupyterServerAppSettings.Jsonize());

  }

  if(m_kernelGatewayAppSettingsHasBeenSet)
  {
   payload.WithObject("KernelGatewayAppSettings", m_kernelGatewayAppSettings.Jsonize());

  }

  if(m_jupyterLabAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterLabAppSettings", m_jupyterLabAppSettings.Jsonize());

  }

  if(m_spaceStorageSettingsHasBeenSet)
  {
   payload.WithObject("SpaceStorageSettings", m_spaceStorageSettings.Jsonize());

  }

  if(m_customPosixUserConfigHasBeenSet)
  {
   payload.WithObject("CustomPosixUserConfig", m_customPosixUserConfig.Jsonize());

  }

  if(m_customFileSystemConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customFileSystemConfigsJsonList(m_customFileSystemConfigs.size());
   for(unsigned customFileSystemConfigsIndex = 0; customFileSystemConfigsIndex < customFileSystemConfigsJsonList.GetLength(); ++customFileSystemConfigsIndex)
   {
     customFileSystemConfigsJsonList[customFileSystemConfigsIndex].AsObject(m_customFileSystemConfigs[customFileSystemConfigsIndex].Jsonize());
   }
   payload.WithArray("CustomFileSystemConfigs", std::move(customFileSystemConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
