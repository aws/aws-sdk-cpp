/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/FilterOperator.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>A filter for a query, to return a subset of the results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/FilterParameter">AWS
 * API Reference</a></p>
 */
class FilterParameter {
 public:
  AWS_NETWORKFLOWMONITOR_API FilterParameter() = default;
  AWS_NETWORKFLOWMONITOR_API FilterParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API FilterParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field that you want to filter on. The fields that you can
   * specify depend on the type of query.</p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  FilterParameter& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operator to use to compare the field with the values that you specify.
   * The operator can be one of the following</p> <ul> <li> <p> <code>EQUALS</code>:
   * The field matches a single value.</p> </li> <li> <p> <code>NOT_EQUALS</code>:
   * The field doesn't match a single value.</p> </li> <li> <p> <code>IN</code>: The
   * field matches any one of several values.</p> </li> <li> <p>
   * <code>CONTAINS</code>: The field contains a value.</p> </li> </ul>
   */
  inline FilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(FilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline FilterParameter& WithOperator(FilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to compare the field with.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  FilterParameter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  FilterParameter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_field;

  FilterOperator m_operator{FilterOperator::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_fieldHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
