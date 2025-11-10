/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetStringComparisonFilterCondition.h>
#include <aws/quicksight/model/DataSetStringListFilterCondition.h>

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
 * <p>A filter condition for string columns, supporting both comparison and
 * list-based filtering.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetStringFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetStringFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetStringFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetStringFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetStringFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the string column to filter.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  DataSetStringFilterCondition& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comparison-based filter condition for the string column.</p>
   */
  inline const DataSetStringComparisonFilterCondition& GetComparisonFilterCondition() const { return m_comparisonFilterCondition; }
  inline bool ComparisonFilterConditionHasBeenSet() const { return m_comparisonFilterConditionHasBeenSet; }
  template <typename ComparisonFilterConditionT = DataSetStringComparisonFilterCondition>
  void SetComparisonFilterCondition(ComparisonFilterConditionT&& value) {
    m_comparisonFilterConditionHasBeenSet = true;
    m_comparisonFilterCondition = std::forward<ComparisonFilterConditionT>(value);
  }
  template <typename ComparisonFilterConditionT = DataSetStringComparisonFilterCondition>
  DataSetStringFilterCondition& WithComparisonFilterCondition(ComparisonFilterConditionT&& value) {
    SetComparisonFilterCondition(std::forward<ComparisonFilterConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list-based filter condition that includes or excludes values from a
   * specified list.</p>
   */
  inline const DataSetStringListFilterCondition& GetListFilterCondition() const { return m_listFilterCondition; }
  inline bool ListFilterConditionHasBeenSet() const { return m_listFilterConditionHasBeenSet; }
  template <typename ListFilterConditionT = DataSetStringListFilterCondition>
  void SetListFilterCondition(ListFilterConditionT&& value) {
    m_listFilterConditionHasBeenSet = true;
    m_listFilterCondition = std::forward<ListFilterConditionT>(value);
  }
  template <typename ListFilterConditionT = DataSetStringListFilterCondition>
  DataSetStringFilterCondition& WithListFilterCondition(ListFilterConditionT&& value) {
    SetListFilterCondition(std::forward<ListFilterConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnName;
  bool m_columnNameHasBeenSet = false;

  DataSetStringComparisonFilterCondition m_comparisonFilterCondition;
  bool m_comparisonFilterConditionHasBeenSet = false;

  DataSetStringListFilterCondition m_listFilterCondition;
  bool m_listFilterConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
