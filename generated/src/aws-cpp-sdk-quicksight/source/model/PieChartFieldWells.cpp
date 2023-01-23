/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PieChartFieldWells.h>
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

PieChartFieldWells::PieChartFieldWells() : 
    m_pieChartAggregatedFieldWellsHasBeenSet(false)
{
}

PieChartFieldWells::PieChartFieldWells(JsonView jsonValue) : 
    m_pieChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

PieChartFieldWells& PieChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PieChartAggregatedFieldWells"))
  {
    m_pieChartAggregatedFieldWells = jsonValue.GetObject("PieChartAggregatedFieldWells");

    m_pieChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue PieChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_pieChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("PieChartAggregatedFieldWells", m_pieChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
