/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UserSettings.h>
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

UserSettings::UserSettings() : 
    m_executionRoleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sharingSettingsHasBeenSet(false),
    m_jupyterServerAppSettingsHasBeenSet(false),
    m_kernelGatewayAppSettingsHasBeenSet(false),
    m_tensorBoardAppSettingsHasBeenSet(false),
    m_rStudioServerProAppSettingsHasBeenSet(false),
    m_rSessionAppSettingsHasBeenSet(false),
    m_canvasAppSettingsHasBeenSet(false),
    m_codeEditorAppSettingsHasBeenSet(false),
    m_jupyterLabAppSettingsHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false),
    m_defaultLandingUriHasBeenSet(false),
    m_studioWebPortal(StudioWebPortal::NOT_SET),
    m_studioWebPortalHasBeenSet(false),
    m_customPosixUserConfigHasBeenSet(false),
    m_customFileSystemConfigsHasBeenSet(false)
{
}

UserSettings::UserSettings(JsonView jsonValue) : 
    m_executionRoleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sharingSettingsHasBeenSet(false),
    m_jupyterServerAppSettingsHasBeenSet(false),
    m_kernelGatewayAppSettingsHasBeenSet(false),
    m_tensorBoardAppSettingsHasBeenSet(false),
    m_rStudioServerProAppSettingsHasBeenSet(false),
    m_rSessionAppSettingsHasBeenSet(false),
    m_canvasAppSettingsHasBeenSet(false),
    m_codeEditorAppSettingsHasBeenSet(false),
    m_jupyterLabAppSettingsHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false),
    m_defaultLandingUriHasBeenSet(false),
    m_studioWebPortal(StudioWebPortal::NOT_SET),
    m_studioWebPortalHasBeenSet(false),
    m_customPosixUserConfigHasBeenSet(false),
    m_customFileSystemConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

UserSettings& UserSettings::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SharingSettings"))
  {
    m_sharingSettings = jsonValue.GetObject("SharingSettings");

    m_sharingSettingsHasBeenSet = true;
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

  if(jsonValue.ValueExists("TensorBoardAppSettings"))
  {
    m_tensorBoardAppSettings = jsonValue.GetObject("TensorBoardAppSettings");

    m_tensorBoardAppSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RStudioServerProAppSettings"))
  {
    m_rStudioServerProAppSettings = jsonValue.GetObject("RStudioServerProAppSettings");

    m_rStudioServerProAppSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RSessionAppSettings"))
  {
    m_rSessionAppSettings = jsonValue.GetObject("RSessionAppSettings");

    m_rSessionAppSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanvasAppSettings"))
  {
    m_canvasAppSettings = jsonValue.GetObject("CanvasAppSettings");

    m_canvasAppSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeEditorAppSettings"))
  {
    m_codeEditorAppSettings = jsonValue.GetObject("CodeEditorAppSettings");

    m_codeEditorAppSettingsHasBeenSet = true;
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

  if(jsonValue.ValueExists("DefaultLandingUri"))
  {
    m_defaultLandingUri = jsonValue.GetString("DefaultLandingUri");

    m_defaultLandingUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StudioWebPortal"))
  {
    m_studioWebPortal = StudioWebPortalMapper::GetStudioWebPortalForName(jsonValue.GetString("StudioWebPortal"));

    m_studioWebPortalHasBeenSet = true;
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

JsonValue UserSettings::Jsonize() const
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

  if(m_sharingSettingsHasBeenSet)
  {
   payload.WithObject("SharingSettings", m_sharingSettings.Jsonize());

  }

  if(m_jupyterServerAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterServerAppSettings", m_jupyterServerAppSettings.Jsonize());

  }

  if(m_kernelGatewayAppSettingsHasBeenSet)
  {
   payload.WithObject("KernelGatewayAppSettings", m_kernelGatewayAppSettings.Jsonize());

  }

  if(m_tensorBoardAppSettingsHasBeenSet)
  {
   payload.WithObject("TensorBoardAppSettings", m_tensorBoardAppSettings.Jsonize());

  }

  if(m_rStudioServerProAppSettingsHasBeenSet)
  {
   payload.WithObject("RStudioServerProAppSettings", m_rStudioServerProAppSettings.Jsonize());

  }

  if(m_rSessionAppSettingsHasBeenSet)
  {
   payload.WithObject("RSessionAppSettings", m_rSessionAppSettings.Jsonize());

  }

  if(m_canvasAppSettingsHasBeenSet)
  {
   payload.WithObject("CanvasAppSettings", m_canvasAppSettings.Jsonize());

  }

  if(m_codeEditorAppSettingsHasBeenSet)
  {
   payload.WithObject("CodeEditorAppSettings", m_codeEditorAppSettings.Jsonize());

  }

  if(m_jupyterLabAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterLabAppSettings", m_jupyterLabAppSettings.Jsonize());

  }

  if(m_spaceStorageSettingsHasBeenSet)
  {
   payload.WithObject("SpaceStorageSettings", m_spaceStorageSettings.Jsonize());

  }

  if(m_defaultLandingUriHasBeenSet)
  {
   payload.WithString("DefaultLandingUri", m_defaultLandingUri);

  }

  if(m_studioWebPortalHasBeenSet)
  {
   payload.WithString("StudioWebPortal", StudioWebPortalMapper::GetNameForStudioWebPortal(m_studioWebPortal));
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
