/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartFieldWells.h>
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

LineChartFieldWells::LineChartFieldWells() : 
    m_lineChartAggregatedFieldWellsHasBeenSet(false)
{
}

LineChartFieldWells::LineChartFieldWells(JsonView jsonValue) : 
    m_lineChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

LineChartFieldWells& LineChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineChartAggregatedFieldWells"))
  {
    m_lineChartAggregatedFieldWells = jsonValue.GetObject("LineChartAggregatedFieldWells");

    m_lineChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_lineChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("LineChartAggregatedFieldWells", m_lineChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
