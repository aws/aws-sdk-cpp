/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldWells.h>
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

PivotTableFieldWells::PivotTableFieldWells() : 
    m_pivotTableAggregatedFieldWellsHasBeenSet(false)
{
}

PivotTableFieldWells::PivotTableFieldWells(JsonView jsonValue) : 
    m_pivotTableAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldWells& PivotTableFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PivotTableAggregatedFieldWells"))
  {
    m_pivotTableAggregatedFieldWells = jsonValue.GetObject("PivotTableAggregatedFieldWells");

    m_pivotTableAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_pivotTableAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("PivotTableAggregatedFieldWells", m_pivotTableAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
