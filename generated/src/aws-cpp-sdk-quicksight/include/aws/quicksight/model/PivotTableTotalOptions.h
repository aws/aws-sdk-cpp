/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SubtotalOptions.h>
#include <aws/quicksight/model/PivotTotalOptions.h>
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
   * <p>The total options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableTotalOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableTotalOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableTotalOptions() = default;
    AWS_QUICKSIGHT_API PivotTableTotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableTotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The row subtotal options.</p>
     */
    inline const SubtotalOptions& GetRowSubtotalOptions() const { return m_rowSubtotalOptions; }
    inline bool RowSubtotalOptionsHasBeenSet() const { return m_rowSubtotalOptionsHasBeenSet; }
    template<typename RowSubtotalOptionsT = SubtotalOptions>
    void SetRowSubtotalOptions(RowSubtotalOptionsT&& value) { m_rowSubtotalOptionsHasBeenSet = true; m_rowSubtotalOptions = std::forward<RowSubtotalOptionsT>(value); }
    template<typename RowSubtotalOptionsT = SubtotalOptions>
    PivotTableTotalOptions& WithRowSubtotalOptions(RowSubtotalOptionsT&& value) { SetRowSubtotalOptions(std::forward<RowSubtotalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column subtotal options.</p>
     */
    inline const SubtotalOptions& GetColumnSubtotalOptions() const { return m_columnSubtotalOptions; }
    inline bool ColumnSubtotalOptionsHasBeenSet() const { return m_columnSubtotalOptionsHasBeenSet; }
    template<typename ColumnSubtotalOptionsT = SubtotalOptions>
    void SetColumnSubtotalOptions(ColumnSubtotalOptionsT&& value) { m_columnSubtotalOptionsHasBeenSet = true; m_columnSubtotalOptions = std::forward<ColumnSubtotalOptionsT>(value); }
    template<typename ColumnSubtotalOptionsT = SubtotalOptions>
    PivotTableTotalOptions& WithColumnSubtotalOptions(ColumnSubtotalOptionsT&& value) { SetColumnSubtotalOptions(std::forward<ColumnSubtotalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row total options.</p>
     */
    inline const PivotTotalOptions& GetRowTotalOptions() const { return m_rowTotalOptions; }
    inline bool RowTotalOptionsHasBeenSet() const { return m_rowTotalOptionsHasBeenSet; }
    template<typename RowTotalOptionsT = PivotTotalOptions>
    void SetRowTotalOptions(RowTotalOptionsT&& value) { m_rowTotalOptionsHasBeenSet = true; m_rowTotalOptions = std::forward<RowTotalOptionsT>(value); }
    template<typename RowTotalOptionsT = PivotTotalOptions>
    PivotTableTotalOptions& WithRowTotalOptions(RowTotalOptionsT&& value) { SetRowTotalOptions(std::forward<RowTotalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column total options.</p>
     */
    inline const PivotTotalOptions& GetColumnTotalOptions() const { return m_columnTotalOptions; }
    inline bool ColumnTotalOptionsHasBeenSet() const { return m_columnTotalOptionsHasBeenSet; }
    template<typename ColumnTotalOptionsT = PivotTotalOptions>
    void SetColumnTotalOptions(ColumnTotalOptionsT&& value) { m_columnTotalOptionsHasBeenSet = true; m_columnTotalOptions = std::forward<ColumnTotalOptionsT>(value); }
    template<typename ColumnTotalOptionsT = PivotTotalOptions>
    PivotTableTotalOptions& WithColumnTotalOptions(ColumnTotalOptionsT&& value) { SetColumnTotalOptions(std::forward<ColumnTotalOptionsT>(value)); return *this;}
    ///@}
  private:

    SubtotalOptions m_rowSubtotalOptions;
    bool m_rowSubtotalOptionsHasBeenSet = false;

    SubtotalOptions m_columnSubtotalOptions;
    bool m_columnSubtotalOptionsHasBeenSet = false;

    PivotTotalOptions m_rowTotalOptions;
    bool m_rowTotalOptionsHasBeenSet = false;

    PivotTotalOptions m_columnTotalOptions;
    bool m_columnTotalOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
