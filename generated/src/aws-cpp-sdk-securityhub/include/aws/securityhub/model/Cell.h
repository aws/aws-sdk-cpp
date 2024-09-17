/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An occurrence of sensitive data detected in a Microsoft Excel workbook,
   * comma-separated value (CSV) file, or tab-separated value (TSV)
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Cell">AWS
   * API Reference</a></p>
   */
  class Cell
  {
  public:
    AWS_SECURITYHUB_API Cell();
    AWS_SECURITYHUB_API Cell(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Cell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column number of the column that contains the data. For a Microsoft Excel
     * workbook, the column number corresponds to the alphabetical column identifiers.
     * For example, a value of 1 for Column corresponds to the A column in the
     * workbook.</p>
     */
    inline long long GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(long long value) { m_columnHasBeenSet = true; m_column = value; }
    inline Cell& WithColumn(long long value) { SetColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row number of the row that contains the data.</p>
     */
    inline long long GetRow() const{ return m_row; }
    inline bool RowHasBeenSet() const { return m_rowHasBeenSet; }
    inline void SetRow(long long value) { m_rowHasBeenSet = true; m_row = value; }
    inline Cell& WithRow(long long value) { SetRow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column that contains the data.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline Cell& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline Cell& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline Cell& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Microsoft Excel workbook, provides the location of the cell, as an
     * absolute cell reference, that contains the data. For example, Sheet2!C5 for cell
     * C5 on Sheet2.</p>
     */
    inline const Aws::String& GetCellReference() const{ return m_cellReference; }
    inline bool CellReferenceHasBeenSet() const { return m_cellReferenceHasBeenSet; }
    inline void SetCellReference(const Aws::String& value) { m_cellReferenceHasBeenSet = true; m_cellReference = value; }
    inline void SetCellReference(Aws::String&& value) { m_cellReferenceHasBeenSet = true; m_cellReference = std::move(value); }
    inline void SetCellReference(const char* value) { m_cellReferenceHasBeenSet = true; m_cellReference.assign(value); }
    inline Cell& WithCellReference(const Aws::String& value) { SetCellReference(value); return *this;}
    inline Cell& WithCellReference(Aws::String&& value) { SetCellReference(std::move(value)); return *this;}
    inline Cell& WithCellReference(const char* value) { SetCellReference(value); return *this;}
    ///@}
  private:

    long long m_column;
    bool m_columnHasBeenSet = false;

    long long m_row;
    bool m_rowHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_cellReference;
    bool m_cellReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
