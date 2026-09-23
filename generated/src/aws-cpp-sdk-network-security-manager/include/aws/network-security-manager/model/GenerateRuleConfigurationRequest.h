/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/RuleFirewallType.h>
#include <aws/network-security-manager/model/RuleType.h>
#include <aws/network-security-manager/model/WAFConfigDataType.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class GenerateRuleConfigurationRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API GenerateRuleConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GenerateRuleConfiguration"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A natural-language description of the configuration that you want to
   * generate.</p>
   */
  inline const Aws::String& GetPrompt() const { return m_prompt; }
  inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
  template <typename PromptT = Aws::String>
  void SetPrompt(PromptT&& value) {
    m_promptHasBeenSet = true;
    m_prompt = std::forward<PromptT>(value);
  }
  template <typename PromptT = Aws::String>
  GenerateRuleConfigurationRequest& WithPrompt(PromptT&& value) {
    SetPrompt(std::forward<PromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type of the rule.</p>
   */
  inline RuleFirewallType GetRuleFirewallType() const { return m_ruleFirewallType; }
  inline bool RuleFirewallTypeHasBeenSet() const { return m_ruleFirewallTypeHasBeenSet; }
  inline void SetRuleFirewallType(RuleFirewallType value) {
    m_ruleFirewallTypeHasBeenSet = true;
    m_ruleFirewallType = value;
  }
  inline GenerateRuleConfigurationRequest& WithRuleFirewallType(RuleFirewallType value) {
    SetRuleFirewallType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the rule. <code>CONFIGURATION</code> rules contain firewall
   * settings, and <code>INSPECTION</code> rules contain rule groups.</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline GenerateRuleConfigurationRequest& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For AWS WAF configuration rules, the specific AWS WAF configuration variant
   * to generate. This is optional; if you omit it, the service selects the
   * variant.</p>
   */
  inline WAFConfigDataType GetWafConfigDataType() const { return m_wafConfigDataType; }
  inline bool WafConfigDataTypeHasBeenSet() const { return m_wafConfigDataTypeHasBeenSet; }
  inline void SetWafConfigDataType(WAFConfigDataType value) {
    m_wafConfigDataTypeHasBeenSet = true;
    m_wafConfigDataType = value;
  }
  inline GenerateRuleConfigurationRequest& WithWafConfigDataType(WAFConfigDataType value) {
    SetWafConfigDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An existing configuration to edit, as a JSON string. When you provide this
   * value, the operation edits the configuration. When you omit it, the operation
   * generates a new configuration.</p>
   */
  inline const Aws::String& GetCurrentConfiguration() const { return m_currentConfiguration; }
  inline bool CurrentConfigurationHasBeenSet() const { return m_currentConfigurationHasBeenSet; }
  template <typename CurrentConfigurationT = Aws::String>
  void SetCurrentConfiguration(CurrentConfigurationT&& value) {
    m_currentConfigurationHasBeenSet = true;
    m_currentConfiguration = std::forward<CurrentConfigurationT>(value);
  }
  template <typename CurrentConfigurationT = Aws::String>
  GenerateRuleConfigurationRequest& WithCurrentConfiguration(CurrentConfigurationT&& value) {
    SetCurrentConfiguration(std::forward<CurrentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive token that you provide to ensure that the operation
   * completes no more than one time. If you retry a request with the same client
   * token and the same parameters, the service returns the result of the original
   * successful request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  GenerateRuleConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prompt;

  RuleFirewallType m_ruleFirewallType{RuleFirewallType::NOT_SET};

  RuleType m_ruleType{RuleType::NOT_SET};

  WAFConfigDataType m_wafConfigDataType{WAFConfigDataType::NOT_SET};

  Aws::String m_currentConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_promptHasBeenSet = false;
  bool m_ruleFirewallTypeHasBeenSet = false;
  bool m_ruleTypeHasBeenSet = false;
  bool m_wafConfigDataTypeHasBeenSet = false;
  bool m_currentConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
