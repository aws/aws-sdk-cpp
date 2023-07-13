/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CanvasAppSettings.h>
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

CanvasAppSettings::CanvasAppSettings() : 
    m_timeSeriesForecastingSettingsHasBeenSet(false),
    m_modelRegisterSettingsHasBeenSet(false),
    m_workspaceSettingsHasBeenSet(false)
{
}

CanvasAppSettings::CanvasAppSettings(JsonView jsonValue) : 
    m_timeSeriesForecastingSettingsHasBeenSet(false),
    m_modelRegisterSettingsHasBeenSet(false),
    m_workspaceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CanvasAppSettings& CanvasAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeSeriesForecastingSettings"))
  {
    m_timeSeriesForecastingSettings = jsonValue.GetObject("TimeSeriesForecastingSettings");

    m_timeSeriesForecastingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelRegisterSettings"))
  {
    m_modelRegisterSettings = jsonValue.GetObject("ModelRegisterSettings");

    m_modelRegisterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceSettings"))
  {
    m_workspaceSettings = jsonValue.GetObject("WorkspaceSettings");

    m_workspaceSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CanvasAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesForecastingSettingsHasBeenSet)
  {
   payload.WithObject("TimeSeriesForecastingSettings", m_timeSeriesForecastingSettings.Jsonize());

  }

  if(m_modelRegisterSettingsHasBeenSet)
  {
   payload.WithObject("ModelRegisterSettings", m_modelRegisterSettings.Jsonize());

  }

  if(m_workspaceSettingsHasBeenSet)
  {
   payload.WithObject("WorkspaceSettings", m_workspaceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
