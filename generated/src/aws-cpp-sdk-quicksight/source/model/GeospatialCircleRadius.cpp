/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialCircleRadius.h>
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

GeospatialCircleRadius::GeospatialCircleRadius(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialCircleRadius& GeospatialCircleRadius::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Radius"))
  {
    m_radius = jsonValue.GetDouble("Radius");
    m_radiusHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialCircleRadius::Jsonize() const
{
  JsonValue payload;

  if(m_radiusHasBeenSet)
  {
   payload.WithDouble("Radius", m_radius);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
