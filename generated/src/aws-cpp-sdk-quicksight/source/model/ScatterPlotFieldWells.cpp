/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ScatterPlotFieldWells.h>
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

ScatterPlotFieldWells::ScatterPlotFieldWells() : 
    m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet(false),
    m_scatterPlotUnaggregatedFieldWellsHasBeenSet(false)
{
}

ScatterPlotFieldWells::ScatterPlotFieldWells(JsonView jsonValue) : 
    m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet(false),
    m_scatterPlotUnaggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

ScatterPlotFieldWells& ScatterPlotFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScatterPlotCategoricallyAggregatedFieldWells"))
  {
    m_scatterPlotCategoricallyAggregatedFieldWells = jsonValue.GetObject("ScatterPlotCategoricallyAggregatedFieldWells");

    m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScatterPlotUnaggregatedFieldWells"))
  {
    m_scatterPlotUnaggregatedFieldWells = jsonValue.GetObject("ScatterPlotUnaggregatedFieldWells");

    m_scatterPlotUnaggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScatterPlotFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("ScatterPlotCategoricallyAggregatedFieldWells", m_scatterPlotCategoricallyAggregatedFieldWells.Jsonize());

  }

  if(m_scatterPlotUnaggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("ScatterPlotUnaggregatedFieldWells", m_scatterPlotUnaggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
