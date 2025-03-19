/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapState.h>
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

GeospatialMapState::GeospatialMapState(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialMapState& GeospatialMapState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bounds"))
  {
    m_bounds = jsonValue.GetObject("Bounds");
    m_boundsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapNavigation"))
  {
    m_mapNavigation = GeospatialMapNavigationMapper::GetGeospatialMapNavigationForName(jsonValue.GetString("MapNavigation"));
    m_mapNavigationHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialMapState::Jsonize() const
{
  JsonValue payload;

  if(m_boundsHasBeenSet)
  {
   payload.WithObject("Bounds", m_bounds.Jsonize());

  }

  if(m_mapNavigationHasBeenSet)
  {
   payload.WithString("MapNavigation", GeospatialMapNavigationMapper::GetNameForGeospatialMapNavigation(m_mapNavigation));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
