/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FunnelChartFieldWells.h>
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

FunnelChartFieldWells::FunnelChartFieldWells() : 
    m_funnelChartAggregatedFieldWellsHasBeenSet(false)
{
}

FunnelChartFieldWells::FunnelChartFieldWells(JsonView jsonValue) : 
    m_funnelChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

FunnelChartFieldWells& FunnelChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunnelChartAggregatedFieldWells"))
  {
    m_funnelChartAggregatedFieldWells = jsonValue.GetObject("FunnelChartAggregatedFieldWells");

    m_funnelChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue FunnelChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_funnelChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("FunnelChartAggregatedFieldWells", m_funnelChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
