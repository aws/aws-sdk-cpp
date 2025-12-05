/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetNumericComparisonFilterCondition.h>
#include <aws/quicksight/model/DataSetNumericRangeFilterCondition.h>

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
 * <p>A filter condition for numeric columns, supporting both comparison and
 * range-based filtering.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetNumericFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetNumericFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetNumericFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetNumericFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetNumericFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the numeric column to filter.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  DataSetNumericFilterCondition& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comparison-based filter condition for the numeric column.</p>
   */
  inline const DataSetNumericComparisonFilterCondition& GetComparisonFilterCondition() const { return m_comparisonFilterCondition; }
  inline bool ComparisonFilterConditionHasBeenSet() const { return m_comparisonFilterConditionHasBeenSet; }
  template <typename ComparisonFilterConditionT = DataSetNumericComparisonFilterCondition>
  void SetComparisonFilterCondition(ComparisonFilterConditionT&& value) {
    m_comparisonFilterConditionHasBeenSet = true;
    m_comparisonFilterCondition = std::forward<ComparisonFilterConditionT>(value);
  }
  template <typename ComparisonFilterConditionT = DataSetNumericComparisonFilterCondition>
  DataSetNumericFilterCondition& WithComparisonFilterCondition(ComparisonFilterConditionT&& value) {
    SetComparisonFilterCondition(std::forward<ComparisonFilterConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A range-based filter condition for the numeric column, filtering values
   * between minimum and maximum numbers.</p>
   */
  inline const DataSetNumericRangeFilterCondition& GetRangeFilterCondition() const { return m_rangeFilterCondition; }
  inline bool RangeFilterConditionHasBeenSet() const { return m_rangeFilterConditionHasBeenSet; }
  template <typename RangeFilterConditionT = DataSetNumericRangeFilterCondition>
  void SetRangeFilterCondition(RangeFilterConditionT&& value) {
    m_rangeFilterConditionHasBeenSet = true;
    m_rangeFilterCondition = std::forward<RangeFilterConditionT>(value);
  }
  template <typename RangeFilterConditionT = DataSetNumericRangeFilterCondition>
  DataSetNumericFilterCondition& WithRangeFilterCondition(RangeFilterConditionT&& value) {
    SetRangeFilterCondition(std::forward<RangeFilterConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_columnName;

  DataSetNumericComparisonFilterCondition m_comparisonFilterCondition;

  DataSetNumericRangeFilterCondition m_rangeFilterCondition;
  bool m_columnNameHasBeenSet = false;
  bool m_comparisonFilterConditionHasBeenSet = false;
  bool m_rangeFilterConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
