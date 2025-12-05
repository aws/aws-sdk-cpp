/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetDateComparisonFilterOperator.h>
#include <aws/quicksight/model/DataSetDateFilterValue.h>

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
 * <p>A filter condition that compares date values using operators like
 * <code>BEFORE</code>, <code>AFTER</code>, or their inclusive
 * variants.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetDateComparisonFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetDateComparisonFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetDateComparisonFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetDateComparisonFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetDateComparisonFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator to use, such as <code>BEFORE</code>,
   * <code>BEFORE_OR_EQUALS_TO</code>, <code>AFTER</code>, or
   * <code>AFTER_OR_EQUALS_TO</code>.</p>
   */
  inline DataSetDateComparisonFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(DataSetDateComparisonFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline DataSetDateComparisonFilterCondition& WithOperator(DataSetDateComparisonFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date value to compare against.</p>
   */
  inline const DataSetDateFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = DataSetDateFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = DataSetDateFilterValue>
  DataSetDateComparisonFilterCondition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  DataSetDateComparisonFilterOperator m_operator{DataSetDateComparisonFilterOperator::NOT_SET};

  DataSetDateFilterValue m_value;
  bool m_operatorHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
