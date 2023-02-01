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
    m_timeSeriesForecastingSettingsHasBeenSet(false)
{
}

CanvasAppSettings::CanvasAppSettings(JsonView jsonValue) : 
    m_timeSeriesForecastingSettingsHasBeenSet(false)
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

  return *this;
}

JsonValue CanvasAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesForecastingSettingsHasBeenSet)
  {
   payload.WithObject("TimeSeriesForecastingSettings", m_timeSeriesForecastingSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
