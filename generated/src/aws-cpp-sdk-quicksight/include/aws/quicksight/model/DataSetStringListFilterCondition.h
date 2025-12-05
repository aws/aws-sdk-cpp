/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetStringListFilterOperator.h>
#include <aws/quicksight/model/DataSetStringListFilterValue.h>

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
 * <p>A filter condition that includes or excludes string values from a specified
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetStringListFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetStringListFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetStringListFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetStringListFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetStringListFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list operator to use, either <code>INCLUDE</code> to match values in the
   * list or <code>EXCLUDE</code> to filter out values in the list.</p>
   */
  inline DataSetStringListFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(DataSetStringListFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline DataSetStringListFilterCondition& WithOperator(DataSetStringListFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of string values to include or exclude in the filter.</p>
   */
  inline const DataSetStringListFilterValue& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = DataSetStringListFilterValue>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = DataSetStringListFilterValue>
  DataSetStringListFilterCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  DataSetStringListFilterOperator m_operator{DataSetStringListFilterOperator::NOT_SET};

  DataSetStringListFilterValue m_values;
  bool m_operatorHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
