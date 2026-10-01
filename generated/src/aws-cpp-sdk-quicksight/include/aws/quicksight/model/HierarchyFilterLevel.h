/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>

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
 * <p>One level of the drill-down path of a
 * <code>HierarchyFilter</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HierarchyFilterLevel">AWS
 * API Reference</a></p>
 */
class HierarchyFilterLevel {
 public:
  AWS_QUICKSIGHT_API HierarchyFilterLevel() = default;
  AWS_QUICKSIGHT_API HierarchyFilterLevel(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API HierarchyFilterLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The column that this level of the hierarchy drills down by. This column must
   * belong to the same dataset as <code>HierarchyFilter$Column</code>.</p>
   */
  inline const ColumnIdentifier& GetColumn() const { return m_column; }
  inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
  template <typename ColumnT = ColumnIdentifier>
  void SetColumn(ColumnT&& value) {
    m_columnHasBeenSet = true;
    m_column = std::forward<ColumnT>(value);
  }
  template <typename ColumnT = ColumnIdentifier>
  HierarchyFilterLevel& WithColumn(ColumnT&& value) {
    SetColumn(std::forward<ColumnT>(value));
    return *this;
  }
  ///@}
 private:
  ColumnIdentifier m_column;
  bool m_columnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
