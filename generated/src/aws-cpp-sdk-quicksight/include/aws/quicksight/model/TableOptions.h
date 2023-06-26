/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableOrientation.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/quicksight/model/RowAlternateColorOptions.h>
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
   * <p>The table options for a table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableOptions">AWS
   * API Reference</a></p>
   */
  class TableOptions
  {
  public:
    AWS_QUICKSIGHT_API TableOptions();
    AWS_QUICKSIGHT_API TableOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline const TableOrientation& GetOrientation() const{ return m_orientation; }

    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }

    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline void SetOrientation(const TableOrientation& value) { m_orientationHasBeenSet = true; m_orientation = value; }

    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline void SetOrientation(TableOrientation&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }

    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline TableOptions& WithOrientation(const TableOrientation& value) { SetOrientation(value); return *this;}

    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline TableOptions& WithOrientation(TableOrientation&& value) { SetOrientation(std::move(value)); return *this;}


    /**
     * <p>The table cell style of a table header.</p>
     */
    inline const TableCellStyle& GetHeaderStyle() const{ return m_headerStyle; }

    /**
     * <p>The table cell style of a table header.</p>
     */
    inline bool HeaderStyleHasBeenSet() const { return m_headerStyleHasBeenSet; }

    /**
     * <p>The table cell style of a table header.</p>
     */
    inline void SetHeaderStyle(const TableCellStyle& value) { m_headerStyleHasBeenSet = true; m_headerStyle = value; }

    /**
     * <p>The table cell style of a table header.</p>
     */
    inline void SetHeaderStyle(TableCellStyle&& value) { m_headerStyleHasBeenSet = true; m_headerStyle = std::move(value); }

    /**
     * <p>The table cell style of a table header.</p>
     */
    inline TableOptions& WithHeaderStyle(const TableCellStyle& value) { SetHeaderStyle(value); return *this;}

    /**
     * <p>The table cell style of a table header.</p>
     */
    inline TableOptions& WithHeaderStyle(TableCellStyle&& value) { SetHeaderStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of table cells.</p>
     */
    inline const TableCellStyle& GetCellStyle() const{ return m_cellStyle; }

    /**
     * <p>The table cell style of table cells.</p>
     */
    inline bool CellStyleHasBeenSet() const { return m_cellStyleHasBeenSet; }

    /**
     * <p>The table cell style of table cells.</p>
     */
    inline void SetCellStyle(const TableCellStyle& value) { m_cellStyleHasBeenSet = true; m_cellStyle = value; }

    /**
     * <p>The table cell style of table cells.</p>
     */
    inline void SetCellStyle(TableCellStyle&& value) { m_cellStyleHasBeenSet = true; m_cellStyle = std::move(value); }

    /**
     * <p>The table cell style of table cells.</p>
     */
    inline TableOptions& WithCellStyle(const TableCellStyle& value) { SetCellStyle(value); return *this;}

    /**
     * <p>The table cell style of table cells.</p>
     */
    inline TableOptions& WithCellStyle(TableCellStyle&& value) { SetCellStyle(std::move(value)); return *this;}


    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline const RowAlternateColorOptions& GetRowAlternateColorOptions() const{ return m_rowAlternateColorOptions; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline bool RowAlternateColorOptionsHasBeenSet() const { return m_rowAlternateColorOptionsHasBeenSet; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline void SetRowAlternateColorOptions(const RowAlternateColorOptions& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = value; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline void SetRowAlternateColorOptions(RowAlternateColorOptions&& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = std::move(value); }

    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline TableOptions& WithRowAlternateColorOptions(const RowAlternateColorOptions& value) { SetRowAlternateColorOptions(value); return *this;}

    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline TableOptions& WithRowAlternateColorOptions(RowAlternateColorOptions&& value) { SetRowAlternateColorOptions(std::move(value)); return *this;}

  private:

    TableOrientation m_orientation;
    bool m_orientationHasBeenSet = false;

    TableCellStyle m_headerStyle;
    bool m_headerStyleHasBeenSet = false;

    TableCellStyle m_cellStyle;
    bool m_cellStyleHasBeenSet = false;

    RowAlternateColorOptions m_rowAlternateColorOptions;
    bool m_rowAlternateColorOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
