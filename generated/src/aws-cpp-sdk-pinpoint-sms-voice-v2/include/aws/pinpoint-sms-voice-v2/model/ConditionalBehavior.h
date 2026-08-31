/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/ConditionalRule.h>

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
 * <p>The set of conditional rules that determine a field's resolved requirement
 * based on the values of other fields in the same registration form. Attached to
 * fields whose <b>FieldRequirement</b> is <b>CONDITIONAL</b>.</p> <p>Evaluation
 * proceeds top-to-bottom through <b>Rules</b>. The first rule whose conditions all
 * evaluate to true wins and its behavior is returned. If no rule matches, the
 * <b>DefaultBehavior</b> is returned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ConditionalBehavior">AWS
 * API Reference</a></p>
 */
class ConditionalBehavior {
 public:
  AWS_PINPOINTSMSVOICEV2_API ConditionalBehavior() = default;
  AWS_PINPOINTSMSVOICEV2_API ConditionalBehavior(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API ConditionalBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An ordered list of conditional rules. Rules are evaluated top-to-bottom and
   * the first rule whose conditions all evaluate to true determines the field's
   * behavior. Rules whose conditions do not all match are skipped and evaluation
   * continues to the next rule.</p>
   */
  inline const Aws::Vector<ConditionalRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<ConditionalRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<ConditionalRule>>
  ConditionalBehavior& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = ConditionalRule>
  ConditionalBehavior& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field behavior that applies when no conditional rule in <b>Rules</b>
   * matches. Valid values are <b>REQUIRED</b>, <b>OPTIONAL</b>, and
   * <b>DISALLOWED</b>.</p>
   */
  inline const Aws::String& GetDefaultBehavior() const { return m_defaultBehavior; }
  inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }
  template <typename DefaultBehaviorT = Aws::String>
  void SetDefaultBehavior(DefaultBehaviorT&& value) {
    m_defaultBehaviorHasBeenSet = true;
    m_defaultBehavior = std::forward<DefaultBehaviorT>(value);
  }
  template <typename DefaultBehaviorT = Aws::String>
  ConditionalBehavior& WithDefaultBehavior(DefaultBehaviorT&& value) {
    SetDefaultBehavior(std::forward<DefaultBehaviorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConditionalRule> m_rules;

  Aws::String m_defaultBehavior;
  bool m_rulesHasBeenSet = false;
  bool m_defaultBehaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
