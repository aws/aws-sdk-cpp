﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableCellConditionalFormatting.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class PivotTableConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingOption() = default;
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cell conditional formatting option for a pivot table.</p>
     */
    inline const PivotTableCellConditionalFormatting& GetCell() const { return m_cell; }
    inline bool CellHasBeenSet() const { return m_cellHasBeenSet; }
    template<typename CellT = PivotTableCellConditionalFormatting>
    void SetCell(CellT&& value) { m_cellHasBeenSet = true; m_cell = std::forward<CellT>(value); }
    template<typename CellT = PivotTableCellConditionalFormatting>
    PivotTableConditionalFormattingOption& WithCell(CellT&& value) { SetCell(std::forward<CellT>(value)); return *this;}
    ///@}
  private:

    PivotTableCellConditionalFormatting m_cell;
    bool m_cellHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
