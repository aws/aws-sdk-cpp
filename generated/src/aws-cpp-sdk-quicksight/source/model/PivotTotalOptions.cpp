﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTotalOptions.h>
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

PivotTotalOptions::PivotTotalOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

PivotTotalOptions& PivotTotalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalsVisibility"))
  {
    m_totalsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TotalsVisibility"));
    m_totalsVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = TableTotalsPlacementMapper::GetTableTotalsPlacementForName(jsonValue.GetString("Placement"));
    m_placementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScrollStatus"))
  {
    m_scrollStatus = TableTotalsScrollStatusMapper::GetTableTotalsScrollStatusForName(jsonValue.GetString("ScrollStatus"));
    m_scrollStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");
    m_customLabelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalCellStyle"))
  {
    m_totalCellStyle = jsonValue.GetObject("TotalCellStyle");
    m_totalCellStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueCellStyle"))
  {
    m_valueCellStyle = jsonValue.GetObject("ValueCellStyle");
    m_valueCellStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricHeaderCellStyle"))
  {
    m_metricHeaderCellStyle = jsonValue.GetObject("MetricHeaderCellStyle");
    m_metricHeaderCellStyleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalAggregationOptions"))
  {
    Aws::Utils::Array<JsonView> totalAggregationOptionsJsonList = jsonValue.GetArray("TotalAggregationOptions");
    for(unsigned totalAggregationOptionsIndex = 0; totalAggregationOptionsIndex < totalAggregationOptionsJsonList.GetLength(); ++totalAggregationOptionsIndex)
    {
      m_totalAggregationOptions.push_back(totalAggregationOptionsJsonList[totalAggregationOptionsIndex].AsObject());
    }
    m_totalAggregationOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PivotTotalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_totalsVisibilityHasBeenSet)
  {
   payload.WithString("TotalsVisibility", VisibilityMapper::GetNameForVisibility(m_totalsVisibility));
  }

  if(m_placementHasBeenSet)
  {
   payload.WithString("Placement", TableTotalsPlacementMapper::GetNameForTableTotalsPlacement(m_placement));
  }

  if(m_scrollStatusHasBeenSet)
  {
   payload.WithString("ScrollStatus", TableTotalsScrollStatusMapper::GetNameForTableTotalsScrollStatus(m_scrollStatus));
  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_totalCellStyleHasBeenSet)
  {
   payload.WithObject("TotalCellStyle", m_totalCellStyle.Jsonize());

  }

  if(m_valueCellStyleHasBeenSet)
  {
   payload.WithObject("ValueCellStyle", m_valueCellStyle.Jsonize());

  }

  if(m_metricHeaderCellStyleHasBeenSet)
  {
   payload.WithObject("MetricHeaderCellStyle", m_metricHeaderCellStyle.Jsonize());

  }

  if(m_totalAggregationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> totalAggregationOptionsJsonList(m_totalAggregationOptions.size());
   for(unsigned totalAggregationOptionsIndex = 0; totalAggregationOptionsIndex < totalAggregationOptionsJsonList.GetLength(); ++totalAggregationOptionsIndex)
   {
     totalAggregationOptionsJsonList[totalAggregationOptionsIndex].AsObject(m_totalAggregationOptions[totalAggregationOptionsIndex].Jsonize());
   }
   payload.WithArray("TotalAggregationOptions", std::move(totalAggregationOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
