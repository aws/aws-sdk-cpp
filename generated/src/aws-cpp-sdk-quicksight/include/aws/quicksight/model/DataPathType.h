/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableDataPathType.h>
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
   * <p>The type of the data path value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathType">AWS
   * API Reference</a></p>
   */
  class DataPathType
  {
  public:
    AWS_QUICKSIGHT_API DataPathType();
    AWS_QUICKSIGHT_API DataPathType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline const PivotTableDataPathType& GetPivotTableDataPathType() const{ return m_pivotTableDataPathType; }

    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline bool PivotTableDataPathTypeHasBeenSet() const { return m_pivotTableDataPathTypeHasBeenSet; }

    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline void SetPivotTableDataPathType(const PivotTableDataPathType& value) { m_pivotTableDataPathTypeHasBeenSet = true; m_pivotTableDataPathType = value; }

    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline void SetPivotTableDataPathType(PivotTableDataPathType&& value) { m_pivotTableDataPathTypeHasBeenSet = true; m_pivotTableDataPathType = std::move(value); }

    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline DataPathType& WithPivotTableDataPathType(const PivotTableDataPathType& value) { SetPivotTableDataPathType(value); return *this;}

    /**
     * <p>The type of data path value utilized in a pivot table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HIERARCHY_ROWS_LAYOUT_COLUMN</code> -
     * The type of data path for the rows layout column, when <code>RowsLayout</code>
     * is set to <code>HIERARCHY</code>.</p> </li> <li> <p>
     * <code>MULTIPLE_ROW_METRICS_COLUMN</code> - The type of data path for the metric
     * column when the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>EMPTY_COLUMN_HEADER</code> - The type of data path for the column with
     * empty column header, when there is no field in <code>ColumnsFieldWell</code> and
     * the row is set to Metric Placement.</p> </li> <li> <p>
     * <code>COUNT_METRIC_COLUMN</code> - The type of data path for the column with
     * <code>COUNT</code> as the metric, when there is no field in the
     * <code>ValuesFieldWell</code>.</p> </li> </ul>
     */
    inline DataPathType& WithPivotTableDataPathType(PivotTableDataPathType&& value) { SetPivotTableDataPathType(std::move(value)); return *this;}

  private:

    PivotTableDataPathType m_pivotTableDataPathType;
    bool m_pivotTableDataPathTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
