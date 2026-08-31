/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/ConditionalValidation.h>
#include <aws/pinpoint-sms-voice-v2/model/FieldCondition.h>

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
 * <p>A single conditional rule that resolves to a field behavior when all of its
 * conditions evaluate to true. Conditions within a rule are combined with logical
 * AND: all conditions must match for the rule to fire.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ConditionalRule">AWS
 * API Reference</a></p>
 */
class ConditionalRule {
 public:
  AWS_PINPOINTSMSVOICEV2_API ConditionalRule() = default;
  AWS_PINPOINTSMSVOICEV2_API ConditionalRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API ConditionalRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conditions that must all evaluate to true for this rule to match.
   * Conditions are combined with logical AND. Use multiple rules with the same
   * <b>RuleBehavior</b> to express logical OR.</p>
   */
  inline const Aws::Vector<FieldCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<FieldCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<FieldCondition>>
  ConditionalRule& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = FieldCondition>
  ConditionalRule& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field behavior that applies when all conditions in this rule match. Valid
   * values are <b>REQUIRED</b>, <b>OPTIONAL</b>, and <b>DISALLOWED</b>.</p>
   */
  inline const Aws::String& GetRuleBehavior() const { return m_ruleBehavior; }
  inline bool RuleBehaviorHasBeenSet() const { return m_ruleBehaviorHasBeenSet; }
  template <typename RuleBehaviorT = Aws::String>
  void SetRuleBehavior(RuleBehaviorT&& value) {
    m_ruleBehaviorHasBeenSet = true;
    m_ruleBehavior = std::forward<RuleBehaviorT>(value);
  }
  template <typename RuleBehaviorT = Aws::String>
  ConditionalRule& WithRuleBehavior(RuleBehaviorT&& value) {
    SetRuleBehavior(std::forward<RuleBehaviorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional per-rule validation constraints (minimum length, maximum length,
   * regex pattern, allowed select values) that override the field's default
   * validation when this rule matches.</p>
   */
  inline const ConditionalValidation& GetConditionalValidation() const { return m_conditionalValidation; }
  inline bool ConditionalValidationHasBeenSet() const { return m_conditionalValidationHasBeenSet; }
  template <typename ConditionalValidationT = ConditionalValidation>
  void SetConditionalValidation(ConditionalValidationT&& value) {
    m_conditionalValidationHasBeenSet = true;
    m_conditionalValidation = std::forward<ConditionalValidationT>(value);
  }
  template <typename ConditionalValidationT = ConditionalValidation>
  ConditionalRule& WithConditionalValidation(ConditionalValidationT&& value) {
    SetConditionalValidation(std::forward<ConditionalValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FieldCondition> m_conditions;

  Aws::String m_ruleBehavior;

  ConditionalValidation m_conditionalValidation;
  bool m_conditionsHasBeenSet = false;
  bool m_ruleBehaviorHasBeenSet = false;
  bool m_conditionalValidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
