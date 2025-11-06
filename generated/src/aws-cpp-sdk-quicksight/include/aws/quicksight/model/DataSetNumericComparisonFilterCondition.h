/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetNumericComparisonFilterOperator.h>
#include <aws/quicksight/model/DataSetNumericFilterValue.h>

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
 * <p>A filter condition that compares numeric values using operators like
 * <code>EQUALS</code>, <code>GREATER_THAN</code>, or
 * <code>LESS_THAN</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetNumericComparisonFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetNumericComparisonFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetNumericComparisonFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetNumericComparisonFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetNumericComparisonFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator to use, such as <code>EQUALS</code>,
   * <code>GREATER_THAN</code>, <code>LESS_THAN</code>, or their variants.</p>
   */
  inline DataSetNumericComparisonFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(DataSetNumericComparisonFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline DataSetNumericComparisonFilterCondition& WithOperator(DataSetNumericComparisonFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric value to compare against.</p>
   */
  inline const DataSetNumericFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = DataSetNumericFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = DataSetNumericFilterValue>
  DataSetNumericComparisonFilterCondition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  DataSetNumericComparisonFilterOperator m_operator{DataSetNumericComparisonFilterOperator::NOT_SET};
  bool m_operatorHasBeenSet = false;

  DataSetNumericFilterValue m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
