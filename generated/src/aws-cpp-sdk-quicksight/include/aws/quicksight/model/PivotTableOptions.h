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
    AWS_QUICKSIGHT_API PivotTableOptions() = default;
    AWS_QUICKSIGHT_API PivotTableOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline PivotTableMetricPlacement GetMetricPlacement() const { return m_metricPlacement; }
    inline bool MetricPlacementHasBeenSet() const { return m_metricPlacementHasBeenSet; }
    inline void SetMetricPlacement(PivotTableMetricPlacement value) { m_metricPlacementHasBeenSet = true; m_metricPlacement = value; }
    inline PivotTableOptions& WithMetricPlacement(PivotTableMetricPlacement value) { SetMetricPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline Visibility GetSingleMetricVisibility() const { return m_singleMetricVisibility; }
    inline bool SingleMetricVisibilityHasBeenSet() const { return m_singleMetricVisibilityHasBeenSet; }
    inline void SetSingleMetricVisibility(Visibility value) { m_singleMetricVisibilityHasBeenSet = true; m_singleMetricVisibility = value; }
    inline PivotTableOptions& WithSingleMetricVisibility(Visibility value) { SetSingleMetricVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the column names.</p>
     */
    inline Visibility GetColumnNamesVisibility() const { return m_columnNamesVisibility; }
    inline bool ColumnNamesVisibilityHasBeenSet() const { return m_columnNamesVisibilityHasBeenSet; }
    inline void SetColumnNamesVisibility(Visibility value) { m_columnNamesVisibilityHasBeenSet = true; m_columnNamesVisibility = value; }
    inline PivotTableOptions& WithColumnNamesVisibility(Visibility value) { SetColumnNamesVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline Visibility GetToggleButtonsVisibility() const { return m_toggleButtonsVisibility; }
    inline bool ToggleButtonsVisibilityHasBeenSet() const { return m_toggleButtonsVisibilityHasBeenSet; }
    inline void SetToggleButtonsVisibility(Visibility value) { m_toggleButtonsVisibilityHasBeenSet = true; m_toggleButtonsVisibility = value; }
    inline PivotTableOptions& WithToggleButtonsVisibility(Visibility value) { SetToggleButtonsVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of the column header.</p>
     */
    inline const TableCellStyle& GetColumnHeaderStyle() const { return m_columnHeaderStyle; }
    inline bool ColumnHeaderStyleHasBeenSet() const { return m_columnHeaderStyleHasBeenSet; }
    template<typename ColumnHeaderStyleT = TableCellStyle>
    void SetColumnHeaderStyle(ColumnHeaderStyleT&& value) { m_columnHeaderStyleHasBeenSet = true; m_columnHeaderStyle = std::forward<ColumnHeaderStyleT>(value); }
    template<typename ColumnHeaderStyleT = TableCellStyle>
    PivotTableOptions& WithColumnHeaderStyle(ColumnHeaderStyleT&& value) { SetColumnHeaderStyle(std::forward<ColumnHeaderStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline const TableCellStyle& GetRowHeaderStyle() const { return m_rowHeaderStyle; }
    inline bool RowHeaderStyleHasBeenSet() const { return m_rowHeaderStyleHasBeenSet; }
    template<typename RowHeaderStyleT = TableCellStyle>
    void SetRowHeaderStyle(RowHeaderStyleT&& value) { m_rowHeaderStyleHasBeenSet = true; m_rowHeaderStyle = std::forward<RowHeaderStyleT>(value); }
    template<typename RowHeaderStyleT = TableCellStyle>
    PivotTableOptions& WithRowHeaderStyle(RowHeaderStyleT&& value) { SetRowHeaderStyle(std::forward<RowHeaderStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of cells.</p>
     */
    inline const TableCellStyle& GetCellStyle() const { return m_cellStyle; }
    inline bool CellStyleHasBeenSet() const { return m_cellStyleHasBeenSet; }
    template<typename CellStyleT = TableCellStyle>
    void SetCellStyle(CellStyleT&& value) { m_cellStyleHasBeenSet = true; m_cellStyle = std::forward<CellStyleT>(value); }
    template<typename CellStyleT = TableCellStyle>
    PivotTableOptions& WithCellStyle(CellStyleT&& value) { SetCellStyle(std::forward<CellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of row field names.</p>
     */
    inline const TableCellStyle& GetRowFieldNamesStyle() const { return m_rowFieldNamesStyle; }
    inline bool RowFieldNamesStyleHasBeenSet() const { return m_rowFieldNamesStyleHasBeenSet; }
    template<typename RowFieldNamesStyleT = TableCellStyle>
    void SetRowFieldNamesStyle(RowFieldNamesStyleT&& value) { m_rowFieldNamesStyleHasBeenSet = true; m_rowFieldNamesStyle = std::forward<RowFieldNamesStyleT>(value); }
    template<typename RowFieldNamesStyleT = TableCellStyle>
    PivotTableOptions& WithRowFieldNamesStyle(RowFieldNamesStyleT&& value) { SetRowFieldNamesStyle(std::forward<RowFieldNamesStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline const RowAlternateColorOptions& GetRowAlternateColorOptions() const { return m_rowAlternateColorOptions; }
    inline bool RowAlternateColorOptionsHasBeenSet() const { return m_rowAlternateColorOptionsHasBeenSet; }
    template<typename RowAlternateColorOptionsT = RowAlternateColorOptions>
    void SetRowAlternateColorOptions(RowAlternateColorOptionsT&& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = std::forward<RowAlternateColorOptionsT>(value); }
    template<typename RowAlternateColorOptionsT = RowAlternateColorOptions>
    PivotTableOptions& WithRowAlternateColorOptions(RowAlternateColorOptionsT&& value) { SetRowAlternateColorOptions(std::forward<RowAlternateColorOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility setting of a pivot table's collapsed row dimension fields. If
     * the value of this structure is <code>HIDDEN</code>, all collapsed columns in a
     * pivot table are automatically hidden. The default value is
     * <code>VISIBLE</code>.</p>
     */
    inline Visibility GetCollapsedRowDimensionsVisibility() const { return m_collapsedRowDimensionsVisibility; }
    inline bool CollapsedRowDimensionsVisibilityHasBeenSet() const { return m_collapsedRowDimensionsVisibilityHasBeenSet; }
    inline void SetCollapsedRowDimensionsVisibility(Visibility value) { m_collapsedRowDimensionsVisibilityHasBeenSet = true; m_collapsedRowDimensionsVisibility = value; }
    inline PivotTableOptions& WithCollapsedRowDimensionsVisibility(Visibility value) { SetCollapsedRowDimensionsVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layout for the row dimension headers of a pivot table. Choose one of the
     * following options.</p> <ul> <li> <p> <code>TABULAR</code>: (Default) Each row
     * field is displayed in a separate column.</p> </li> <li> <p>
     * <code>HIERARCHY</code>: All row fields are displayed in a single column.
     * Indentation is used to differentiate row headers of different fields.</p> </li>
     * </ul>
     */
    inline PivotTableRowsLayout GetRowsLayout() const { return m_rowsLayout; }
    inline bool RowsLayoutHasBeenSet() const { return m_rowsLayoutHasBeenSet; }
    inline void SetRowsLayout(PivotTableRowsLayout value) { m_rowsLayoutHasBeenSet = true; m_rowsLayout = value; }
    inline PivotTableOptions& WithRowsLayout(PivotTableRowsLayout value) { SetRowsLayout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for the label that is located above the row headers. This option
     * is only applicable when <code>RowsLayout</code> is set to
     * <code>HIERARCHY</code>.</p>
     */
    inline const PivotTableRowsLabelOptions& GetRowsLabelOptions() const { return m_rowsLabelOptions; }
    inline bool RowsLabelOptionsHasBeenSet() const { return m_rowsLabelOptionsHasBeenSet; }
    template<typename RowsLabelOptionsT = PivotTableRowsLabelOptions>
    void SetRowsLabelOptions(RowsLabelOptionsT&& value) { m_rowsLabelOptionsHasBeenSet = true; m_rowsLabelOptions = std::forward<RowsLabelOptionsT>(value); }
    template<typename RowsLabelOptionsT = PivotTableRowsLabelOptions>
    PivotTableOptions& WithRowsLabelOptions(RowsLabelOptionsT&& value) { SetRowsLabelOptions(std::forward<RowsLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default cell width of the pivot table.</p>
     */
    inline const Aws::String& GetDefaultCellWidth() const { return m_defaultCellWidth; }
    inline bool DefaultCellWidthHasBeenSet() const { return m_defaultCellWidthHasBeenSet; }
    template<typename DefaultCellWidthT = Aws::String>
    void SetDefaultCellWidth(DefaultCellWidthT&& value) { m_defaultCellWidthHasBeenSet = true; m_defaultCellWidth = std::forward<DefaultCellWidthT>(value); }
    template<typename DefaultCellWidthT = Aws::String>
    PivotTableOptions& WithDefaultCellWidth(DefaultCellWidthT&& value) { SetDefaultCellWidth(std::forward<DefaultCellWidthT>(value)); return *this;}
    ///@}
  private:

    PivotTableMetricPlacement m_metricPlacement{PivotTableMetricPlacement::NOT_SET};
    bool m_metricPlacementHasBeenSet = false;

    Visibility m_singleMetricVisibility{Visibility::NOT_SET};
    bool m_singleMetricVisibilityHasBeenSet = false;

    Visibility m_columnNamesVisibility{Visibility::NOT_SET};
    bool m_columnNamesVisibilityHasBeenSet = false;

    Visibility m_toggleButtonsVisibility{Visibility::NOT_SET};
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

    Visibility m_collapsedRowDimensionsVisibility{Visibility::NOT_SET};
    bool m_collapsedRowDimensionsVisibilityHasBeenSet = false;

    PivotTableRowsLayout m_rowsLayout{PivotTableRowsLayout::NOT_SET};
    bool m_rowsLayoutHasBeenSet = false;

    PivotTableRowsLabelOptions m_rowsLabelOptions;
    bool m_rowsLabelOptionsHasBeenSet = false;

    Aws::String m_defaultCellWidth;
    bool m_defaultCellWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
