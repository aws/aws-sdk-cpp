﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableOptions.h>
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

PivotTableOptions::PivotTableOptions() : 
    m_metricPlacement(PivotTableMetricPlacement::NOT_SET),
    m_metricPlacementHasBeenSet(false),
    m_singleMetricVisibility(Visibility::NOT_SET),
    m_singleMetricVisibilityHasBeenSet(false),
    m_columnNamesVisibility(Visibility::NOT_SET),
    m_columnNamesVisibilityHasBeenSet(false),
    m_toggleButtonsVisibility(Visibility::NOT_SET),
    m_toggleButtonsVisibilityHasBeenSet(false),
    m_columnHeaderStyleHasBeenSet(false),
    m_rowHeaderStyleHasBeenSet(false),
    m_cellStyleHasBeenSet(false),
    m_rowFieldNamesStyleHasBeenSet(false),
    m_rowAlternateColorOptionsHasBeenSet(false),
    m_collapsedRowDimensionsVisibility(Visibility::NOT_SET),
    m_collapsedRowDimensionsVisibilityHasBeenSet(false),
    m_rowsLayout(PivotTableRowsLayout::NOT_SET),
    m_rowsLayoutHasBeenSet(false),
    m_rowsLabelOptionsHasBeenSet(false),
    m_defaultCellWidthHasBeenSet(false)
{
}

PivotTableOptions::PivotTableOptions(JsonView jsonValue) : 
    m_metricPlacement(PivotTableMetricPlacement::NOT_SET),
    m_metricPlacementHasBeenSet(false),
    m_singleMetricVisibility(Visibility::NOT_SET),
    m_singleMetricVisibilityHasBeenSet(false),
    m_columnNamesVisibility(Visibility::NOT_SET),
    m_columnNamesVisibilityHasBeenSet(false),
    m_toggleButtonsVisibility(Visibility::NOT_SET),
    m_toggleButtonsVisibilityHasBeenSet(false),
    m_columnHeaderStyleHasBeenSet(false),
    m_rowHeaderStyleHasBeenSet(false),
    m_cellStyleHasBeenSet(false),
    m_rowFieldNamesStyleHasBeenSet(false),
    m_rowAlternateColorOptionsHasBeenSet(false),
    m_collapsedRowDimensionsVisibility(Visibility::NOT_SET),
    m_collapsedRowDimensionsVisibilityHasBeenSet(false),
    m_rowsLayout(PivotTableRowsLayout::NOT_SET),
    m_rowsLayoutHasBeenSet(false),
    m_rowsLabelOptionsHasBeenSet(false),
    m_defaultCellWidthHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableOptions& PivotTableOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricPlacement"))
  {
    m_metricPlacement = PivotTableMetricPlacementMapper::GetPivotTableMetricPlacementForName(jsonValue.GetString("MetricPlacement"));

    m_metricPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingleMetricVisibility"))
  {
    m_singleMetricVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("SingleMetricVisibility"));

    m_singleMetricVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnNamesVisibility"))
  {
    m_columnNamesVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("ColumnNamesVisibility"));

    m_columnNamesVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToggleButtonsVisibility"))
  {
    m_toggleButtonsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("ToggleButtonsVisibility"));

    m_toggleButtonsVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnHeaderStyle"))
  {
    m_columnHeaderStyle = jsonValue.GetObject("ColumnHeaderStyle");

    m_columnHeaderStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowHeaderStyle"))
  {
    m_rowHeaderStyle = jsonValue.GetObject("RowHeaderStyle");

    m_rowHeaderStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CellStyle"))
  {
    m_cellStyle = jsonValue.GetObject("CellStyle");

    m_cellStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowFieldNamesStyle"))
  {
    m_rowFieldNamesStyle = jsonValue.GetObject("RowFieldNamesStyle");

    m_rowFieldNamesStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowAlternateColorOptions"))
  {
    m_rowAlternateColorOptions = jsonValue.GetObject("RowAlternateColorOptions");

    m_rowAlternateColorOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollapsedRowDimensionsVisibility"))
  {
    m_collapsedRowDimensionsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("CollapsedRowDimensionsVisibility"));

    m_collapsedRowDimensionsVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowsLayout"))
  {
    m_rowsLayout = PivotTableRowsLayoutMapper::GetPivotTableRowsLayoutForName(jsonValue.GetString("RowsLayout"));

    m_rowsLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowsLabelOptions"))
  {
    m_rowsLabelOptions = jsonValue.GetObject("RowsLabelOptions");

    m_rowsLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultCellWidth"))
  {
    m_defaultCellWidth = jsonValue.GetString("DefaultCellWidth");

    m_defaultCellWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableOptions::Jsonize() const
{
  JsonValue payload;

  if(m_metricPlacementHasBeenSet)
  {
   payload.WithString("MetricPlacement", PivotTableMetricPlacementMapper::GetNameForPivotTableMetricPlacement(m_metricPlacement));
  }

  if(m_singleMetricVisibilityHasBeenSet)
  {
   payload.WithString("SingleMetricVisibility", VisibilityMapper::GetNameForVisibility(m_singleMetricVisibility));
  }

  if(m_columnNamesVisibilityHasBeenSet)
  {
   payload.WithString("ColumnNamesVisibility", VisibilityMapper::GetNameForVisibility(m_columnNamesVisibility));
  }

  if(m_toggleButtonsVisibilityHasBeenSet)
  {
   payload.WithString("ToggleButtonsVisibility", VisibilityMapper::GetNameForVisibility(m_toggleButtonsVisibility));
  }

  if(m_columnHeaderStyleHasBeenSet)
  {
   payload.WithObject("ColumnHeaderStyle", m_columnHeaderStyle.Jsonize());

  }

  if(m_rowHeaderStyleHasBeenSet)
  {
   payload.WithObject("RowHeaderStyle", m_rowHeaderStyle.Jsonize());

  }

  if(m_cellStyleHasBeenSet)
  {
   payload.WithObject("CellStyle", m_cellStyle.Jsonize());

  }

  if(m_rowFieldNamesStyleHasBeenSet)
  {
   payload.WithObject("RowFieldNamesStyle", m_rowFieldNamesStyle.Jsonize());

  }

  if(m_rowAlternateColorOptionsHasBeenSet)
  {
   payload.WithObject("RowAlternateColorOptions", m_rowAlternateColorOptions.Jsonize());

  }

  if(m_collapsedRowDimensionsVisibilityHasBeenSet)
  {
   payload.WithString("CollapsedRowDimensionsVisibility", VisibilityMapper::GetNameForVisibility(m_collapsedRowDimensionsVisibility));
  }

  if(m_rowsLayoutHasBeenSet)
  {
   payload.WithString("RowsLayout", PivotTableRowsLayoutMapper::GetNameForPivotTableRowsLayout(m_rowsLayout));
  }

  if(m_rowsLabelOptionsHasBeenSet)
  {
   payload.WithObject("RowsLabelOptions", m_rowsLabelOptions.Jsonize());

  }

  if(m_defaultCellWidthHasBeenSet)
  {
   payload.WithString("DefaultCellWidth", m_defaultCellWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
