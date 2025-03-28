/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TransposedColumnType.h>
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
   * <p>The column option of the transposed table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TransposedTableOption">AWS
   * API Reference</a></p>
   */
  class TransposedTableOption
  {
  public:
    AWS_QUICKSIGHT_API TransposedTableOption() = default;
    AWS_QUICKSIGHT_API TransposedTableOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TransposedTableOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The index of a columns in a transposed table. The index range is 0-9999.</p>
     */
    inline int GetColumnIndex() const { return m_columnIndex; }
    inline bool ColumnIndexHasBeenSet() const { return m_columnIndexHasBeenSet; }
    inline void SetColumnIndex(int value) { m_columnIndexHasBeenSet = true; m_columnIndex = value; }
    inline TransposedTableOption& WithColumnIndex(int value) { SetColumnIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of a column in a transposed table.</p>
     */
    inline const Aws::String& GetColumnWidth() const { return m_columnWidth; }
    inline bool ColumnWidthHasBeenSet() const { return m_columnWidthHasBeenSet; }
    template<typename ColumnWidthT = Aws::String>
    void SetColumnWidth(ColumnWidthT&& value) { m_columnWidthHasBeenSet = true; m_columnWidth = std::forward<ColumnWidthT>(value); }
    template<typename ColumnWidthT = Aws::String>
    TransposedTableOption& WithColumnWidth(ColumnWidthT&& value) { SetColumnWidth(std::forward<ColumnWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column type of the column in a transposed table. Choose one of the
     * following options:</p> <ul> <li> <p> <code>ROW_HEADER_COLUMN</code>: Refers to
     * the leftmost column of the row header in the transposed table.</p> </li> <li>
     * <p> <code>VALUE_COLUMN</code>: Refers to all value columns in the transposed
     * table.</p> </li> </ul>
     */
    inline TransposedColumnType GetColumnType() const { return m_columnType; }
    inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }
    inline void SetColumnType(TransposedColumnType value) { m_columnTypeHasBeenSet = true; m_columnType = value; }
    inline TransposedTableOption& WithColumnType(TransposedColumnType value) { SetColumnType(value); return *this;}
    ///@}
  private:

    int m_columnIndex{0};
    bool m_columnIndexHasBeenSet = false;

    Aws::String m_columnWidth;
    bool m_columnWidthHasBeenSet = false;

    TransposedColumnType m_columnType{TransposedColumnType::NOT_SET};
    bool m_columnTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
