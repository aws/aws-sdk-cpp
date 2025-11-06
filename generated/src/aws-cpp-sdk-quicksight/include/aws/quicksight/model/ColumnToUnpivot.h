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
 * <p>Specifies a column to be unpivoted, transforming it from a column into rows
 * with associated values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnToUnpivot">AWS
 * API Reference</a></p>
 */
class ColumnToUnpivot {
 public:
  AWS_QUICKSIGHT_API ColumnToUnpivot() = default;
  AWS_QUICKSIGHT_API ColumnToUnpivot(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ColumnToUnpivot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column to unpivot from the source data.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  ColumnToUnpivot& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to assign to this column in the unpivoted result, typically the
   * column name or a descriptive label.</p>
   */
  inline const Aws::String& GetNewValue() const { return m_newValue; }
  inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
  template <typename NewValueT = Aws::String>
  void SetNewValue(NewValueT&& value) {
    m_newValueHasBeenSet = true;
    m_newValue = std::forward<NewValueT>(value);
  }
  template <typename NewValueT = Aws::String>
  ColumnToUnpivot& WithNewValue(NewValueT&& value) {
    SetNewValue(std::forward<NewValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnName;
  bool m_columnNameHasBeenSet = false;

  Aws::String m_newValue;
  bool m_newValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
