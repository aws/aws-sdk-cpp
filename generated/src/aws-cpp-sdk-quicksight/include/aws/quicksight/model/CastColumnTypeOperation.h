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
    AWS_QUICKSIGHT_API CastColumnTypeOperation() = default;
    AWS_QUICKSIGHT_API CastColumnTypeOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CastColumnTypeOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Column name.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    CastColumnTypeOperation& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New column data type.</p>
     */
    inline ColumnDataType GetNewColumnType() const { return m_newColumnType; }
    inline bool NewColumnTypeHasBeenSet() const { return m_newColumnTypeHasBeenSet; }
    inline void SetNewColumnType(ColumnDataType value) { m_newColumnTypeHasBeenSet = true; m_newColumnType = value; }
    inline CastColumnTypeOperation& WithNewColumnType(ColumnDataType value) { SetNewColumnType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub data type of the new column. Sub types are only available for decimal
     * columns that are part of a SPICE dataset.</p>
     */
    inline ColumnDataSubType GetSubType() const { return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(ColumnDataSubType value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline CastColumnTypeOperation& WithSubType(ColumnDataSubType value) { SetSubType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When casting a column from string to datetime type, you can supply a string
     * in a format supported by Amazon QuickSight to denote the source data format.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    CastColumnTypeOperation& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    ColumnDataType m_newColumnType{ColumnDataType::NOT_SET};
    bool m_newColumnTypeHasBeenSet = false;

    ColumnDataSubType m_subType{ColumnDataSubType::NOT_SET};
    bool m_subTypeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
