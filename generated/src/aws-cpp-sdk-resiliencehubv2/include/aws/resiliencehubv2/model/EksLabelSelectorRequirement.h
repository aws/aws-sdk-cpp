/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EksLabelSelectorOperator.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A single label requirement in a label selector, expressed as a key, an
 * operator, and an optional list of values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EksLabelSelectorRequirement">AWS
 * API Reference</a></p>
 */
class EksLabelSelectorRequirement {
 public:
  AWS_RESILIENCEHUBV2_API EksLabelSelectorRequirement() = default;
  AWS_RESILIENCEHUBV2_API EksLabelSelectorRequirement(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EksLabelSelectorRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The label key that the requirement applies to.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  EksLabelSelectorRequirement& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operator that relates the label key to the values.</p>
   */
  inline EksLabelSelectorOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(EksLabelSelectorOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline EksLabelSelectorRequirement& WithOperator(EksLabelSelectorOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The label values to compare against. Specify values when the operator is IN
   * or NOT_IN. Leave this empty when the operator is EXISTS or DOES_NOT_EXIST.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  EksLabelSelectorRequirement& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  EksLabelSelectorRequirement& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  EksLabelSelectorOperator m_operator{EksLabelSelectorOperator::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_keyHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
