/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableCellConditionalFormatting.h>
#include <aws/quicksight/model/TableRowConditionalFormatting.h>
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
   * <p>Conditional formatting options for a
   * <code>PivotTableVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class TableConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API TableConditionalFormattingOption() = default;
    AWS_QUICKSIGHT_API TableConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline const TableCellConditionalFormatting& GetCell() const { return m_cell; }
    inline bool CellHasBeenSet() const { return m_cellHasBeenSet; }
    template<typename CellT = TableCellConditionalFormatting>
    void SetCell(CellT&& value) { m_cellHasBeenSet = true; m_cell = std::forward<CellT>(value); }
    template<typename CellT = TableCellConditionalFormatting>
    TableConditionalFormattingOption& WithCell(CellT&& value) { SetCell(std::forward<CellT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline const TableRowConditionalFormatting& GetRow() const { return m_row; }
    inline bool RowHasBeenSet() const { return m_rowHasBeenSet; }
    template<typename RowT = TableRowConditionalFormatting>
    void SetRow(RowT&& value) { m_rowHasBeenSet = true; m_row = std::forward<RowT>(value); }
    template<typename RowT = TableRowConditionalFormatting>
    TableConditionalFormattingOption& WithRow(RowT&& value) { SetRow(std::forward<RowT>(value)); return *this;}
    ///@}
  private:

    TableCellConditionalFormatting m_cell;
    bool m_cellHasBeenSet = false;

    TableRowConditionalFormatting m_row;
    bool m_rowHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
