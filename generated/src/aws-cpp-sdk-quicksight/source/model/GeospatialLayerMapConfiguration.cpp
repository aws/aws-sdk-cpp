/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerMapConfiguration.h>
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

GeospatialLayerMapConfiguration::GeospatialLayerMapConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLayerMapConfiguration& GeospatialLayerMapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");
    m_legendHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapLayers"))
  {
    Aws::Utils::Array<JsonView> mapLayersJsonList = jsonValue.GetArray("MapLayers");
    for(unsigned mapLayersIndex = 0; mapLayersIndex < mapLayersJsonList.GetLength(); ++mapLayersIndex)
    {
      m_mapLayers.push_back(mapLayersJsonList[mapLayersIndex].AsObject());
    }
    m_mapLayersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapState"))
  {
    m_mapState = jsonValue.GetObject("MapState");
    m_mapStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapStyle"))
  {
    m_mapStyle = jsonValue.GetObject("MapStyle");
    m_mapStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLayerMapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_mapLayersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mapLayersJsonList(m_mapLayers.size());
   for(unsigned mapLayersIndex = 0; mapLayersIndex < mapLayersJsonList.GetLength(); ++mapLayersIndex)
   {
     mapLayersJsonList[mapLayersIndex].AsObject(m_mapLayers[mapLayersIndex].Jsonize());
   }
   payload.WithArray("MapLayers", std::move(mapLayersJsonList));

  }

  if(m_mapStateHasBeenSet)
  {
   payload.WithObject("MapState", m_mapState.Jsonize());

  }

  if(m_mapStyleHasBeenSet)
  {
   payload.WithObject("MapStyle", m_mapStyle.Jsonize());

  }

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
