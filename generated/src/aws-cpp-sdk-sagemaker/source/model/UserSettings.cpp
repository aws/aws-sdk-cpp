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
    m_canvasAppSettingsHasBeenSet(false)
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
    m_canvasAppSettingsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
