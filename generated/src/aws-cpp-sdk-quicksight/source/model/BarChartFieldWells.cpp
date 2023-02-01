/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BarChartFieldWells.h>
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

BarChartFieldWells::BarChartFieldWells() : 
    m_barChartAggregatedFieldWellsHasBeenSet(false)
{
}

BarChartFieldWells::BarChartFieldWells(JsonView jsonValue) : 
    m_barChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

BarChartFieldWells& BarChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BarChartAggregatedFieldWells"))
  {
    m_barChartAggregatedFieldWells = jsonValue.GetObject("BarChartAggregatedFieldWells");

    m_barChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue BarChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_barChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("BarChartAggregatedFieldWells", m_barChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
