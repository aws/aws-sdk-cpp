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
    m_kernelGatewayAppSettingsHasBeenSet(false)
{
}

SpaceSettings::SpaceSettings(JsonView jsonValue) : 
    m_jupyterServerAppSettingsHasBeenSet(false),
    m_kernelGatewayAppSettingsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
