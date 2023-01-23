/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialCoordinateBounds.h>
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

GeospatialCoordinateBounds::GeospatialCoordinateBounds() : 
    m_north(0.0),
    m_northHasBeenSet(false),
    m_south(0.0),
    m_southHasBeenSet(false),
    m_west(0.0),
    m_westHasBeenSet(false),
    m_east(0.0),
    m_eastHasBeenSet(false)
{
}

GeospatialCoordinateBounds::GeospatialCoordinateBounds(JsonView jsonValue) : 
    m_north(0.0),
    m_northHasBeenSet(false),
    m_south(0.0),
    m_southHasBeenSet(false),
    m_west(0.0),
    m_westHasBeenSet(false),
    m_east(0.0),
    m_eastHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialCoordinateBounds& GeospatialCoordinateBounds::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("North"))
  {
    m_north = jsonValue.GetDouble("North");

    m_northHasBeenSet = true;
  }

  if(jsonValue.ValueExists("South"))
  {
    m_south = jsonValue.GetDouble("South");

    m_southHasBeenSet = true;
  }

  if(jsonValue.ValueExists("West"))
  {
    m_west = jsonValue.GetDouble("West");

    m_westHasBeenSet = true;
  }

  if(jsonValue.ValueExists("East"))
  {
    m_east = jsonValue.GetDouble("East");

    m_eastHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialCoordinateBounds::Jsonize() const
{
  JsonValue payload;

  if(m_northHasBeenSet)
  {
   payload.WithDouble("North", m_north);

  }

  if(m_southHasBeenSet)
  {
   payload.WithDouble("South", m_south);

  }

  if(m_westHasBeenSet)
  {
   payload.WithDouble("West", m_west);

  }

  if(m_eastHasBeenSet)
  {
   payload.WithDouble("East", m_east);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
