/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableMetricPlacement.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/quicksight/model/RowAlternateColorOptions.h>
#include <aws/quicksight/model/PivotTableRowsLayout.h>
#include <aws/quicksight/model/PivotTableRowsLabelOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The table options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableOptions();
    AWS_QUICKSIGHT_API PivotTableOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline const PivotTableMetricPlacement& GetMetricPlacement() const{ return m_metricPlacement; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline bool MetricPlacementHasBeenSet() const { return m_metricPlacementHasBeenSet; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline void SetMetricPlacement(const PivotTableMetricPlacement& value) { m_metricPlacementHasBeenSet = true; m_metricPlacement = value; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline void SetMetricPlacement(PivotTableMetricPlacement&& value) { m_metricPlacementHasBeenSet = true; m_metricPlacement = std::move(value); }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline PivotTableOptions& WithMetricPlacement(const PivotTableMetricPlacement& value) { SetMetricPlacement(value); return *this;}

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline PivotTableOptions& WithMetricPlacement(PivotTableMetricPlacement&& value) { SetMetricPlacement(std::move(value)); return *this;}


    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline const Visibility& GetSingleMetricVisibility() const{ return m_singleMetricVisibility; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline bool SingleMetricVisibilityHasBeenSet() const { return m_singleMetricVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline void SetSingleMetricVisibility(const Visibility& value) { m_singleMetricVisibilityHasBeenSet = true; m_singleMetricVisibility = value; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline void SetSingleMetricVisibility(Visibility&& value) { m_singleMetricVisibilityHasBeenSet = true; m_singleMetricVisibility = std::move(value); }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline PivotTableOptions& WithSingleMetricVisibility(const Visibility& value) { SetSingleMetricVisibility(value); return *this;}

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline PivotTableOptions& WithSingleMetricVisibility(Visibility&& value) { SetSingleMetricVisibility(std::move(value)); return *this;}


    /**
     * <p>The visibility of the column names.</p>
     */
    inline const Visibility& GetColumnNamesVisibility() const{ return m_columnNamesVisibility; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline bool ColumnNamesVisibilityHasBeenSet() const { return m_columnNamesVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline void SetColumnNamesVisibility(const Visibility& value) { m_columnNamesVisibilityHasBeenSet = true; m_columnNamesVisibility = value; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline void SetColumnNamesVisibility(Visibility&& value) { m_columnNamesVisibilityHasBeenSet = true; m_columnNamesVisibility = std::move(value); }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline PivotTableOptions& WithColumnNamesVisibility(const Visibility& value) { SetColumnNamesVisibility(value); return *this;}

    /**
     * <p>The visibility of the column names.</p>
     */
    inline PivotTableOptions& WithColumnNamesVisibility(Visibility&& value) { SetColumnNamesVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline const Visibility& GetToggleButtonsVisibility() const{ return m_toggleButtonsVisibility; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline bool ToggleButtonsVisibilityHasBeenSet() const { return m_toggleButtonsVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline void SetToggleButtonsVisibility(const Visibility& value) { m_toggleButtonsVisibilityHasBeenSet = true; m_toggleButtonsVisibility = value; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline void SetToggleButtonsVisibility(Visibility&& value) { m_toggleButtonsVisibilityHasBeenSet = true; m_toggleButtonsVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline PivotTableOptions& WithToggleButtonsVisibility(const Visibility& value) { SetToggleButtonsVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline PivotTableOptions& WithToggleButtonsVisibility(Visibility&& value) { SetToggleButtonsVisibility(std::move(value)); return *this;}


    /**
     * <p>The table cell style of the column header.</p>
     */
    inline const TableCellStyle& GetColumnHeaderStyle() const{ return m_columnHeaderStyle; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline bool ColumnHeaderStyleHasBeenSet() const { return m_columnHeaderStyleHasBeenSet; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline void SetColumnHeaderStyle(const TableCellStyle& value) { m_columnHeaderStyleHasBeenSet = true; m_columnHeaderStyle = value; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline void SetColumnHeaderStyle(TableCellStyle&& value) { m_columnHeaderStyleHasBeenSet = true; m_columnHeaderStyle = std::move(value); }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline PivotTableOptions& WithColumnHeaderStyle(const TableCellStyle& value) { SetColumnHeaderStyle(value); return *this;}

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline PivotTableOptions& WithColumnHeaderStyle(TableCellStyle&& value) { SetColumnHeaderStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline const TableCellStyle& GetRowHeaderStyle() const{ return m_rowHeaderStyle; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline bool RowHeaderStyleHasBeenSet() const { return m_rowHeaderStyleHasBeenSet; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline void SetRowHeaderStyle(const TableCellStyle& value) { m_rowHeaderStyleHasBeenSet = true; m_rowHeaderStyle = value; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline void SetRowHeaderStyle(TableCellStyle&& value) { m_rowHeaderStyleHasBeenSet = true; m_rowHeaderStyle = std::move(value); }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline PivotTableOptions& WithRowHeaderStyle(const TableCellStyle& value) { SetRowHeaderStyle(value); return *this;}

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline PivotTableOptions& WithRowHeaderStyle(TableCellStyle&& value) { SetRowHeaderStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of cells.</p>
     */
    inline const TableCellStyle& GetCellStyle() const{ return m_cellStyle; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline bool CellStyleHasBeenSet() const { return m_cellStyleHasBeenSet; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline void SetCellStyle(const TableCellStyle& value) { m_cellStyleHasBeenSet = true; m_cellStyle = value; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline void SetCellStyle(TableCellStyle&& value) { m_cellStyleHasBeenSet = true; m_cellStyle = std::move(value); }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline PivotTableOptions& WithCellStyle(const TableCellStyle& value) { SetCellStyle(value); return *this;}

    /**
     * <p>The table cell style of cells.</p>
     */
    inline PivotTableOptions& WithCellStyle(TableCellStyle&& value) { SetCellStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of row field names.</p>
     */
    inline const TableCellStyle& GetRowFieldNamesStyle() const{ return m_rowFieldNamesStyle; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline bool RowFieldNamesStyleHasBeenSet() const { return m_rowFieldNamesStyleHasBeenSet; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline void SetRowFieldNamesStyle(const TableCellStyle& value) { m_rowFieldNamesStyleHasBeenSet = true; m_rowFieldNamesStyle = value; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline void SetRowFieldNamesStyle(TableCellStyle&& value) { m_rowFieldNamesStyleHasBeenSet = true; m_rowFieldNamesStyle = std::move(value); }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline PivotTableOptions& WithRowFieldNamesStyle(const TableCellStyle& value) { SetRowFieldNamesStyle(value); return *this;}

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline PivotTableOptions& WithRowFieldNamesStyle(TableCellStyle&& value) { SetRowFieldNamesStyle(std::move(value)); return *this;}


    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline const RowAlternateColorOptions& GetRowAlternateColorOptions() const{ return m_rowAlternateColorOptions; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline bool RowAlternateColorOptionsHasBeenSet() const { return m_rowAlternateColorOptionsHasBeenSet; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline void SetRowAlternateColorOptions(const RowAlternateColorOptions& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = value; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline void SetRowAlternateColorOptions(RowAlternateColorOptions&& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = std::move(value); }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline PivotTableOptions& WithRowAlternateColorOptions(const RowAlternateColorOptions& value) { SetRowAlternateColorOptions(value); return *this;}

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline PivotTableOptions& WithRowAlternateColorOptions(RowAlternateColorOptions&& value) { SetRowAlternateColorOptions(std::move(value)); return *this;}


    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline const Visibility& GetCollapsedRowDimensionsVisibility() const{ return m_collapsedRowDimensionsVisibility; }

    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline bool CollapsedRowDimensionsVisibilityHasBeenSet() const { return m_collapsedRowDimensionsVisibilityHasBeenSet; }

    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline void SetCollapsedRowDimensionsVisibility(const Visibility& value) { m_collapsedRowDimensionsVisibilityHasBeenSet = true; m_collapsedRowDimensionsVisibility = value; }

    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline void SetCollapsedRowDimensionsVisibility(Visibility&& value) { m_collapsedRowDimensionsVisibilityHasBeenSet = true; m_collapsedRowDimensionsVisibility = std::move(value); }

    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline PivotTableOptions& WithCollapsedRowDimensionsVisibility(const Visibility& value) { SetCollapsedRowDimensionsVisibility(value); return *this;}

    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline PivotTableOptions& WithCollapsedRowDimensionsVisibility(Visibility&& value) { SetCollapsedRowDimensionsVisibility(std::move(value)); return *this;}


    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline const PivotTableRowsLayout& GetRowsLayout() const{ return m_rowsLayout; }

    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline bool RowsLayoutHasBeenSet() const { return m_rowsLayoutHasBeenSet; }

    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline void SetRowsLayout(const PivotTableRowsLayout& value) { m_rowsLayoutHasBeenSet = true; m_rowsLayout = value; }

    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline void SetRowsLayout(PivotTableRowsLayout&& value) { m_rowsLayoutHasBeenSet = true; m_rowsLayout = std::move(value); }

    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline PivotTableOptions& WithRowsLayout(const PivotTableRowsLayout& value) { SetRowsLayout(value); return *this;}

    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline PivotTableOptions& WithRowsLayout(PivotTableRowsLayout&& value) { SetRowsLayout(std::move(value)); return *this;}


    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline const PivotTableRowsLabelOptions& GetRowsLabelOptions() const{ return m_rowsLabelOptions; }

    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline bool RowsLabelOptionsHasBeenSet() const { return m_rowsLabelOptionsHasBeenSet; }

    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline void SetRowsLabelOptions(const PivotTableRowsLabelOptions& value) { m_rowsLabelOptionsHasBeenSet = true; m_rowsLabelOptions = value; }

    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline void SetRowsLabelOptions(PivotTableRowsLabelOptions&& value) { m_rowsLabelOptionsHasBeenSet = true; m_rowsLabelOptions = std::move(value); }

    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline PivotTableOptions& WithRowsLabelOptions(const PivotTableRowsLabelOptions& value) { SetRowsLabelOptions(value); return *this;}

    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline PivotTableOptions& WithRowsLabelOptions(PivotTableRowsLabelOptions&& value) { SetRowsLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline const Aws::String& GetDefaultCellWidth() const{ return m_defaultCellWidth; }

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline bool DefaultCellWidthHasBeenSet() const { return m_defaultCellWidthHasBeenSet; }

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline void SetDefaultCellWidth(const Aws::String& value) { m_defaultCellWidthHasBeenSet = true; m_defaultCellWidth = value; }

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline void SetDefaultCellWidth(Aws::String&& value) { m_defaultCellWidthHasBeenSet = true; m_defaultCellWidth = std::move(value); }

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline void SetDefaultCellWidth(const char* value) { m_defaultCellWidthHasBeenSet = true; m_defaultCellWidth.assign(value); }

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline PivotTableOptions& WithDefaultCellWidth(const Aws::String& value) { SetDefaultCellWidth(value); return *this;}

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline PivotTableOptions& WithDefaultCellWidth(Aws::String&& value) { SetDefaultCellWidth(std::move(value)); return *this;}

    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline PivotTableOptions& WithDefaultCellWidth(const char* value) { SetDefaultCellWidth(value); return *this;}

  private:

    PivotTableMetricPlacement m_metricPlacement;
    bool m_metricPlacementHasBeenSet = false;

    Visibility m_singleMetricVisibility;
    bool m_singleMetricVisibilityHasBeenSet = false;

    Visibility m_columnNamesVisibility;
    bool m_columnNamesVisibilityHasBeenSet = false;

    Visibility m_toggleButtonsVisibility;
    bool m_toggleButtonsVisibilityHasBeenSet = false;

    TableCellStyle m_columnHeaderStyle;
    bool m_columnHeaderStyleHasBeenSet = false;

    TableCellStyle m_rowHeaderStyle;
    bool m_rowHeaderStyleHasBeenSet = false;

    TableCellStyle m_cellStyle;
    bool m_cellStyleHasBeenSet = false;

    TableCellStyle m_rowFieldNamesStyle;
    bool m_rowFieldNamesStyleHasBeenSet = false;

    RowAlternateColorOptions m_rowAlternateColorOptions;
    bool m_rowAlternateColorOptionsHasBeenSet = false;

    Visibility m_collapsedRowDimensionsVisibility;
    bool m_collapsedRowDimensionsVisibilityHasBeenSet = false;

    PivotTableRowsLayout m_rowsLayout;
    bool m_rowsLayoutHasBeenSet = false;

    PivotTableRowsLabelOptions m_rowsLabelOptions;
    bool m_rowsLabelOptionsHasBeenSet = false;

    Aws::String m_defaultCellWidth;
    bool m_defaultCellWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
