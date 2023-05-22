/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialHeatmapConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeospatialHeatmapConfiguration::GeospatialHeatmapConfiguration() : 
    m_heatmapColorHasBeenSet(false)
{
}

GeospatialHeatmapConfiguration::GeospatialHeatmapConfiguration(JsonView jsonValue) : 
    m_heatmapColorHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialHeatmapConfiguration& GeospatialHeatmapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeatmapColor"))
  {
    m_heatmapColor = jsonValue.GetObject("HeatmapColor");

    m_heatmapColorHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialHeatmapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_heatmapColorHasBeenSet)
  {
   payload.WithObject("HeatmapColor", m_heatmapColor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
