/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Represents a column that will be included in the result of an append
 * operation, combining data from multiple sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AppendedColumn">AWS
 * API Reference</a></p>
 */
class AppendedColumn {
 public:
  AWS_QUICKSIGHT_API AppendedColumn() = default;
  AWS_QUICKSIGHT_API AppendedColumn(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AppendedColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column to include in the appended result.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  AppendedColumn& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the column in the appended result.</p>
   */
  inline const Aws::String& GetNewColumnId() const { return m_newColumnId; }
  inline bool NewColumnIdHasBeenSet() const { return m_newColumnIdHasBeenSet; }
  template <typename NewColumnIdT = Aws::String>
  void SetNewColumnId(NewColumnIdT&& value) {
    m_newColumnIdHasBeenSet = true;
    m_newColumnId = std::forward<NewColumnIdT>(value);
  }
  template <typename NewColumnIdT = Aws::String>
  AppendedColumn& WithNewColumnId(NewColumnIdT&& value) {
    SetNewColumnId(std::forward<NewColumnIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnName;
  bool m_columnNameHasBeenSet = false;

  Aws::String m_newColumnId;
  bool m_newColumnIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
