/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

WorldCount::WorldCount() : 
    m_floorplanCount(0),
    m_floorplanCountHasBeenSet(false),
    m_interiorCountPerFloorplan(0),
    m_interiorCountPerFloorplanHasBeenSet(false)
{
}

WorldCount::WorldCount(JsonView jsonValue) : 
    m_floorplanCount(0),
    m_floorplanCountHasBeenSet(false),
    m_interiorCountPerFloorplan(0),
    m_interiorCountPerFloorplanHasBeenSet(false)
{
  *this = jsonValue;
}

WorldCount& WorldCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("floorplanCount"))
  {
    m_floorplanCount = jsonValue.GetInteger("floorplanCount");

    m_floorplanCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interiorCountPerFloorplan"))
  {
    m_interiorCountPerFloorplan = jsonValue.GetInteger("interiorCountPerFloorplan");

    m_interiorCountPerFloorplanHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldCount::Jsonize() const
{
  JsonValue payload;

  if(m_floorplanCountHasBeenSet)
  {
   payload.WithInteger("floorplanCount", m_floorplanCount);

  }

  if(m_interiorCountPerFloorplanHasBeenSet)
  {
   payload.WithInteger("interiorCountPerFloorplan", m_interiorCountPerFloorplan);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
