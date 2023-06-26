/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialWindowOptions.h>
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

GeospatialWindowOptions::GeospatialWindowOptions() : 
    m_boundsHasBeenSet(false),
    m_mapZoomMode(MapZoomMode::NOT_SET),
    m_mapZoomModeHasBeenSet(false)
{
}

GeospatialWindowOptions::GeospatialWindowOptions(JsonView jsonValue) : 
    m_boundsHasBeenSet(false),
    m_mapZoomMode(MapZoomMode::NOT_SET),
    m_mapZoomModeHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialWindowOptions& GeospatialWindowOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bounds"))
  {
    m_bounds = jsonValue.GetObject("Bounds");

    m_boundsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MapZoomMode"))
  {
    m_mapZoomMode = MapZoomModeMapper::GetMapZoomModeForName(jsonValue.GetString("MapZoomMode"));

    m_mapZoomModeHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialWindowOptions::Jsonize() const
{
  JsonValue payload;

  if(m_boundsHasBeenSet)
  {
   payload.WithObject("Bounds", m_bounds.Jsonize());

  }

  if(m_mapZoomModeHasBeenSet)
  {
   payload.WithString("MapZoomMode", MapZoomModeMapper::GetNameForMapZoomMode(m_mapZoomMode));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
