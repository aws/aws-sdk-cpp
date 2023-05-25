/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComboChartFieldWells.h>
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

ComboChartFieldWells::ComboChartFieldWells() : 
    m_comboChartAggregatedFieldWellsHasBeenSet(false)
{
}

ComboChartFieldWells::ComboChartFieldWells(JsonView jsonValue) : 
    m_comboChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

ComboChartFieldWells& ComboChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComboChartAggregatedFieldWells"))
  {
    m_comboChartAggregatedFieldWells = jsonValue.GetObject("ComboChartAggregatedFieldWells");

    m_comboChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComboChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_comboChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("ComboChartAggregatedFieldWells", m_comboChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
