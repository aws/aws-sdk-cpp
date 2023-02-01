/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BoxPlotFieldWells.h>
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

BoxPlotFieldWells::BoxPlotFieldWells() : 
    m_boxPlotAggregatedFieldWellsHasBeenSet(false)
{
}

BoxPlotFieldWells::BoxPlotFieldWells(JsonView jsonValue) : 
    m_boxPlotAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

BoxPlotFieldWells& BoxPlotFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoxPlotAggregatedFieldWells"))
  {
    m_boxPlotAggregatedFieldWells = jsonValue.GetObject("BoxPlotAggregatedFieldWells");

    m_boxPlotAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue BoxPlotFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_boxPlotAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("BoxPlotAggregatedFieldWells", m_boxPlotAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
