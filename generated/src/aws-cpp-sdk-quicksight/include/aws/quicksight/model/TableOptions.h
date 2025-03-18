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
    AWS_QUICKSIGHT_API TableOptions() = default;
    AWS_QUICKSIGHT_API TableOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The orientation (vertical, horizontal) for a table.</p>
     */
    inline TableOrientation GetOrientation() const { return m_orientation; }
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }
    inline void SetOrientation(TableOrientation value) { m_orientationHasBeenSet = true; m_orientation = value; }
    inline TableOptions& WithOrientation(TableOrientation value) { SetOrientation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of a table header.</p>
     */
    inline const TableCellStyle& GetHeaderStyle() const { return m_headerStyle; }
    inline bool HeaderStyleHasBeenSet() const { return m_headerStyleHasBeenSet; }
    template<typename HeaderStyleT = TableCellStyle>
    void SetHeaderStyle(HeaderStyleT&& value) { m_headerStyleHasBeenSet = true; m_headerStyle = std::forward<HeaderStyleT>(value); }
    template<typename HeaderStyleT = TableCellStyle>
    TableOptions& WithHeaderStyle(HeaderStyleT&& value) { SetHeaderStyle(std::forward<HeaderStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table cell style of table cells.</p>
     */
    inline const TableCellStyle& GetCellStyle() const { return m_cellStyle; }
    inline bool CellStyleHasBeenSet() const { return m_cellStyleHasBeenSet; }
    template<typename CellStyleT = TableCellStyle>
    void SetCellStyle(CellStyleT&& value) { m_cellStyleHasBeenSet = true; m_cellStyle = std::forward<CellStyleT>(value); }
    template<typename CellStyleT = TableCellStyle>
    TableOptions& WithCellStyle(CellStyleT&& value) { SetCellStyle(std::forward<CellStyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row alternate color options (widget status, row alternate colors) for a
     * table.</p>
     */
    inline const RowAlternateColorOptions& GetRowAlternateColorOptions() const { return m_rowAlternateColorOptions; }
    inline bool RowAlternateColorOptionsHasBeenSet() const { return m_rowAlternateColorOptionsHasBeenSet; }
    template<typename RowAlternateColorOptionsT = RowAlternateColorOptions>
    void SetRowAlternateColorOptions(RowAlternateColorOptionsT&& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = std::forward<RowAlternateColorOptionsT>(value); }
    template<typename RowAlternateColorOptionsT = RowAlternateColorOptions>
    TableOptions& WithRowAlternateColorOptions(RowAlternateColorOptionsT&& value) { SetRowAlternateColorOptions(std::forward<RowAlternateColorOptionsT>(value)); return *this;}
    ///@}
  private:

    TableOrientation m_orientation{TableOrientation::NOT_SET};
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
