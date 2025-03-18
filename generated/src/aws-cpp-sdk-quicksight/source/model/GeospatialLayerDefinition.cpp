/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerDefinition.h>
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

GeospatialLayerDefinition::GeospatialLayerDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLayerDefinition& GeospatialLayerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PointLayer"))
  {
    m_pointLayer = jsonValue.GetObject("PointLayer");
    m_pointLayerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LineLayer"))
  {
    m_lineLayer = jsonValue.GetObject("LineLayer");
    m_lineLayerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PolygonLayer"))
  {
    m_polygonLayer = jsonValue.GetObject("PolygonLayer");
    m_polygonLayerHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLayerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_pointLayerHasBeenSet)
  {
   payload.WithObject("PointLayer", m_pointLayer.Jsonize());

  }

  if(m_lineLayerHasBeenSet)
  {
   payload.WithObject("LineLayer", m_lineLayer.Jsonize());

  }

  if(m_polygonLayerHasBeenSet)
  {
   payload.WithObject("PolygonLayer", m_polygonLayer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
