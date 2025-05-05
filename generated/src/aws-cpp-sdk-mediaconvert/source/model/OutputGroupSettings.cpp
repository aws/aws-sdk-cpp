/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputGroupSettings::OutputGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

OutputGroupSettings& OutputGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cmafGroupSettings"))
  {
    m_cmafGroupSettings = jsonValue.GetObject("cmafGroupSettings");
    m_cmafGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashIsoGroupSettings"))
  {
    m_dashIsoGroupSettings = jsonValue.GetObject("dashIsoGroupSettings");
    m_dashIsoGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileGroupSettings"))
  {
    m_fileGroupSettings = jsonValue.GetObject("fileGroupSettings");
    m_fileGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hlsGroupSettings"))
  {
    m_hlsGroupSettings = jsonValue.GetObject("hlsGroupSettings");
    m_hlsGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("msSmoothGroupSettings"))
  {
    m_msSmoothGroupSettings = jsonValue.GetObject("msSmoothGroupSettings");
    m_msSmoothGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("perFrameMetrics"))
  {
    Aws::Utils::Array<JsonView> perFrameMetricsJsonList = jsonValue.GetArray("perFrameMetrics");
    for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
    {
      m_perFrameMetrics.push_back(FrameMetricTypeMapper::GetFrameMetricTypeForName(perFrameMetricsJsonList[perFrameMetricsIndex].AsString()));
    }
    m_perFrameMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = OutputGroupTypeMapper::GetOutputGroupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cmafGroupSettingsHasBeenSet)
  {
   payload.WithObject("cmafGroupSettings", m_cmafGroupSettings.Jsonize());

  }

  if(m_dashIsoGroupSettingsHasBeenSet)
  {
   payload.WithObject("dashIsoGroupSettings", m_dashIsoGroupSettings.Jsonize());

  }

  if(m_fileGroupSettingsHasBeenSet)
  {
   payload.WithObject("fileGroupSettings", m_fileGroupSettings.Jsonize());

  }

  if(m_hlsGroupSettingsHasBeenSet)
  {
   payload.WithObject("hlsGroupSettings", m_hlsGroupSettings.Jsonize());

  }

  if(m_msSmoothGroupSettingsHasBeenSet)
  {
   payload.WithObject("msSmoothGroupSettings", m_msSmoothGroupSettings.Jsonize());

  }

  if(m_perFrameMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> perFrameMetricsJsonList(m_perFrameMetrics.size());
   for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
   {
     perFrameMetricsJsonList[perFrameMetricsIndex].AsString(FrameMetricTypeMapper::GetNameForFrameMetricType(m_perFrameMetrics[perFrameMetricsIndex]));
   }
   payload.WithArray("perFrameMetrics", std::move(perFrameMetricsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", OutputGroupTypeMapper::GetNameForOutputGroupType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
