/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartFieldWells.h>
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

RadarChartFieldWells::RadarChartFieldWells() : 
    m_radarChartAggregatedFieldWellsHasBeenSet(false)
{
}

RadarChartFieldWells::RadarChartFieldWells(JsonView jsonValue) : 
    m_radarChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

RadarChartFieldWells& RadarChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RadarChartAggregatedFieldWells"))
  {
    m_radarChartAggregatedFieldWells = jsonValue.GetObject("RadarChartAggregatedFieldWells");

    m_radarChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue RadarChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_radarChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("RadarChartAggregatedFieldWells", m_radarChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
