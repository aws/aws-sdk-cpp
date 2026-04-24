/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetStringComparisonFilterOperator.h>
#include <aws/quicksight/model/DataSetStringFilterValue.h>

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
 * <p>A filter condition that compares string values using operators like
 * <code>EQUALS</code>, <code>CONTAINS</code>, or
 * <code>STARTS_WITH</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetStringComparisonFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetStringComparisonFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetStringComparisonFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetStringComparisonFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetStringComparisonFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator to use, such as <code>EQUALS</code>,
   * <code>CONTAINS</code>, <code>STARTS_WITH</code>, <code>ENDS_WITH</code>, or
   * their negations.</p>
   */
  inline DataSetStringComparisonFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(DataSetStringComparisonFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline DataSetStringComparisonFilterCondition& WithOperator(DataSetStringComparisonFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The string value to compare against.</p>
   */
  inline const DataSetStringFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = DataSetStringFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = DataSetStringFilterValue>
  DataSetStringComparisonFilterCondition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  DataSetStringComparisonFilterOperator m_operator{DataSetStringComparisonFilterOperator::NOT_SET};

  DataSetStringFilterValue m_value;
  bool m_operatorHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
