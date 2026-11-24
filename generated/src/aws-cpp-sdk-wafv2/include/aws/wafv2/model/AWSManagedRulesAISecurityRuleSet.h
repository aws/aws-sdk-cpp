/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/BedrockGuardrails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Configures the use of the AI security managed rule group,
 * <code>AWSManagedRulesAISecurityRuleSet</code>. This configuration is used in
 * <code>ManagedRuleGroupConfig</code>. </p> <p>The rule group always runs its own
 * inspections. The configuration that you provide here determines whether the rule
 * group also uses Amazon Bedrock Guardrails to inspect web requests, or web
 * requests and responses. </p> <p>Use of this rule group is not supported in
 * Firewall Manager. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesAISecurityRuleSet">AWS
 * API Reference</a></p>
 */
class AWSManagedRulesAISecurityRuleSet {
 public:
  AWS_WAFV2_API AWSManagedRulesAISecurityRuleSet() = default;
  AWS_WAFV2_API AWSManagedRulesAISecurityRuleSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API AWSManagedRulesAISecurityRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether and how the rule group uses Amazon Bedrock Guardrails. </p>
   */
  inline const BedrockGuardrails& GetBedrockGuardrails() const { return m_bedrockGuardrails; }
  inline bool BedrockGuardrailsHasBeenSet() const { return m_bedrockGuardrailsHasBeenSet; }
  template <typename BedrockGuardrailsT = BedrockGuardrails>
  void SetBedrockGuardrails(BedrockGuardrailsT&& value) {
    m_bedrockGuardrailsHasBeenSet = true;
    m_bedrockGuardrails = std::forward<BedrockGuardrailsT>(value);
  }
  template <typename BedrockGuardrailsT = BedrockGuardrails>
  AWSManagedRulesAISecurityRuleSet& WithBedrockGuardrails(BedrockGuardrailsT&& value) {
    SetBedrockGuardrails(std::forward<BedrockGuardrailsT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockGuardrails m_bedrockGuardrails;
  bool m_bedrockGuardrailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
