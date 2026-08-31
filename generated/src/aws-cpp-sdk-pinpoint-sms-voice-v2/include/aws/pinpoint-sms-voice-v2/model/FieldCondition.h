/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>A single condition on a dependency field's value. Conditions are combined
 * into a <b>ConditionalRule</b> and evaluated together with logical
 * AND.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/FieldCondition">AWS
 * API Reference</a></p>
 */
class FieldCondition {
 public:
  AWS_PINPOINTSMSVOICEV2_API FieldCondition() = default;
  AWS_PINPOINTSMSVOICEV2_API FieldCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API FieldCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the field whose value determines this condition, for example
   * <b>companyInfo.businessType</b>.</p>
   */
  inline const Aws::String& GetDependsOnFieldPath() const { return m_dependsOnFieldPath; }
  inline bool DependsOnFieldPathHasBeenSet() const { return m_dependsOnFieldPathHasBeenSet; }
  template <typename DependsOnFieldPathT = Aws::String>
  void SetDependsOnFieldPath(DependsOnFieldPathT&& value) {
    m_dependsOnFieldPathHasBeenSet = true;
    m_dependsOnFieldPath = std::forward<DependsOnFieldPathT>(value);
  }
  template <typename DependsOnFieldPathT = Aws::String>
  FieldCondition& WithDependsOnFieldPath(DependsOnFieldPathT&& value) {
    SetDependsOnFieldPath(std::forward<DependsOnFieldPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator to apply between the dependency field's value and
   * <b>Values</b>. Valid values are <b>EQUALS</b>, <b>NOT_EQUALS</b>, <b>IN</b>,
   * <b>NOT_IN</b>, <b>HAS_VALUE</b>, and <b>NO_VALUE</b>. Operators not in this list
   * are treated as evaluating to false, which causes the containing rule to be
   * skipped. This allows forward-compatible additions of new operators without
   * breaking older SDK clients.</p>
   */
  inline const Aws::String& GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  template <typename OperatorT = Aws::String>
  void SetOperator(OperatorT&& value) {
    m_operatorHasBeenSet = true;
    m_operator = std::forward<OperatorT>(value);
  }
  template <typename OperatorT = Aws::String>
  FieldCondition& WithOperator(OperatorT&& value) {
    SetOperator(std::forward<OperatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to compare the dependency field's value against. Required for the
   * <b>EQUALS</b>, <b>NOT_EQUALS</b>, <b>IN</b>, and <b>NOT_IN</b> operators.
   * Omitted for <b>HAS_VALUE</b> and <b>NO_VALUE</b>, which test only presence.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  FieldCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  FieldCondition& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dependsOnFieldPath;

  Aws::String m_operator;

  Aws::Vector<Aws::String> m_values;
  bool m_dependsOnFieldPathHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
