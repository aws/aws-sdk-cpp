/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapFieldWells.h>
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

GeospatialMapFieldWells::GeospatialMapFieldWells() : 
    m_geospatialMapAggregatedFieldWellsHasBeenSet(false)
{
}

GeospatialMapFieldWells::GeospatialMapFieldWells(JsonView jsonValue) : 
    m_geospatialMapAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialMapFieldWells& GeospatialMapFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeospatialMapAggregatedFieldWells"))
  {
    m_geospatialMapAggregatedFieldWells = jsonValue.GetObject("GeospatialMapAggregatedFieldWells");

    m_geospatialMapAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialMapFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_geospatialMapAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("GeospatialMapAggregatedFieldWells", m_geospatialMapAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
