/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceSettings.h>
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

SpaceSettings::SpaceSettings() : 
    m_jupyterServerAppSettingsHasBeenSet(false),
    m_kernelGatewayAppSettingsHasBeenSet(false),
    m_codeEditorAppSettingsHasBeenSet(false),
    m_jupyterLabAppSettingsHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false),
    m_customFileSystemsHasBeenSet(false)
{
}

SpaceSettings::SpaceSettings(JsonView jsonValue) : 
    m_jupyterServerAppSettingsHasBeenSet(false),
    m_kernelGatewayAppSettingsHasBeenSet(false),
    m_codeEditorAppSettingsHasBeenSet(false),
    m_jupyterLabAppSettingsHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false),
    m_customFileSystemsHasBeenSet(false)
{
  *this = jsonValue;
}

SpaceSettings& SpaceSettings::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("AppType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("AppType"));

    m_appTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpaceStorageSettings"))
  {
    m_spaceStorageSettings = jsonValue.GetObject("SpaceStorageSettings");

    m_spaceStorageSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomFileSystems"))
  {
    Aws::Utils::Array<JsonView> customFileSystemsJsonList = jsonValue.GetArray("CustomFileSystems");
    for(unsigned customFileSystemsIndex = 0; customFileSystemsIndex < customFileSystemsJsonList.GetLength(); ++customFileSystemsIndex)
    {
      m_customFileSystems.push_back(customFileSystemsJsonList[customFileSystemsIndex].AsObject());
    }
    m_customFileSystemsHasBeenSet = true;
  }

  return *this;
}

JsonValue SpaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_jupyterServerAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterServerAppSettings", m_jupyterServerAppSettings.Jsonize());

  }

  if(m_kernelGatewayAppSettingsHasBeenSet)
  {
   payload.WithObject("KernelGatewayAppSettings", m_kernelGatewayAppSettings.Jsonize());

  }

  if(m_codeEditorAppSettingsHasBeenSet)
  {
   payload.WithObject("CodeEditorAppSettings", m_codeEditorAppSettings.Jsonize());

  }

  if(m_jupyterLabAppSettingsHasBeenSet)
  {
   payload.WithObject("JupyterLabAppSettings", m_jupyterLabAppSettings.Jsonize());

  }

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("AppType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_spaceStorageSettingsHasBeenSet)
  {
   payload.WithObject("SpaceStorageSettings", m_spaceStorageSettings.Jsonize());

  }

  if(m_customFileSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customFileSystemsJsonList(m_customFileSystems.size());
   for(unsigned customFileSystemsIndex = 0; customFileSystemsIndex < customFileSystemsJsonList.GetLength(); ++customFileSystemsIndex)
   {
     customFileSystemsJsonList[customFileSystemsIndex].AsObject(m_customFileSystems[customFileSystemsIndex].Jsonize());
   }
   payload.WithArray("CustomFileSystems", std::move(customFileSystemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
