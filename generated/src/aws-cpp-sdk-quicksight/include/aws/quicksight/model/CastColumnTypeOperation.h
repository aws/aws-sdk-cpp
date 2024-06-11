/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnDataType.h>
#include <aws/quicksight/model/ColumnDataSubType.h>
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
   * <p>A transform operation that casts a column to a different type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CastColumnTypeOperation">AWS
   * API Reference</a></p>
   */
  class CastColumnTypeOperation
  {
  public:
    AWS_QUICKSIGHT_API CastColumnTypeOperation();
    AWS_QUICKSIGHT_API CastColumnTypeOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CastColumnTypeOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column name.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline CastColumnTypeOperation& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline CastColumnTypeOperation& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline CastColumnTypeOperation& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New column data type.</p>
     */
    inline const ColumnDataType& GetNewColumnType() const{ return m_newColumnType; }
    inline bool NewColumnTypeHasBeenSet() const { return m_newColumnTypeHasBeenSet; }
    inline void SetNewColumnType(const ColumnDataType& value) { m_newColumnTypeHasBeenSet = true; m_newColumnType = value; }
    inline void SetNewColumnType(ColumnDataType&& value) { m_newColumnTypeHasBeenSet = true; m_newColumnType = std::move(value); }
    inline CastColumnTypeOperation& WithNewColumnType(const ColumnDataType& value) { SetNewColumnType(value); return *this;}
    inline CastColumnTypeOperation& WithNewColumnType(ColumnDataType&& value) { SetNewColumnType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub data type of the new column. Sub types are only available for decimal
     * columns that are part of a SPICE dataset.</p>
     */
    inline const ColumnDataSubType& GetSubType() const{ return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(const ColumnDataSubType& value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline void SetSubType(ColumnDataSubType&& value) { m_subTypeHasBeenSet = true; m_subType = std::move(value); }
    inline CastColumnTypeOperation& WithSubType(const ColumnDataSubType& value) { SetSubType(value); return *this;}
    inline CastColumnTypeOperation& WithSubType(ColumnDataSubType&& value) { SetSubType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When casting a column from string to datetime type, you can supply a string
     * in a format supported by Amazon QuickSight to denote the source data format.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline CastColumnTypeOperation& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline CastColumnTypeOperation& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline CastColumnTypeOperation& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    ColumnDataType m_newColumnType;
    bool m_newColumnTypeHasBeenSet = false;

    ColumnDataSubType m_subType;
    bool m_subTypeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
