/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/RuleFirewallType.h>
#include <aws/network-security-manager/model/RuleType.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class CreateRuleRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

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
  CreateRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the rule.</p>
   */
  inline const Aws::String& GetRuleName() const { return m_ruleName; }
  inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
  template <typename RuleNameT = Aws::String>
  void SetRuleName(RuleNameT&& value) {
    m_ruleNameHasBeenSet = true;
    m_ruleName = std::forward<RuleNameT>(value);
  }
  template <typename RuleNameT = Aws::String>
  CreateRuleRequest& WithRuleName(RuleNameT&& value) {
    SetRuleName(std::forward<RuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline RuleFirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(RuleFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline CreateRuleRequest& WithFirewallType(RuleFirewallType value) {
    SetFirewallType(value);
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
  inline CreateRuleRequest& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the rule.</p>
   */
  inline const Aws::String& GetRuleDescription() const { return m_ruleDescription; }
  inline bool RuleDescriptionHasBeenSet() const { return m_ruleDescriptionHasBeenSet; }
  template <typename RuleDescriptionT = Aws::String>
  void SetRuleDescription(RuleDescriptionT&& value) {
    m_ruleDescriptionHasBeenSet = true;
    m_ruleDescription = std::forward<RuleDescriptionT>(value);
  }
  template <typename RuleDescriptionT = Aws::String>
  CreateRuleRequest& WithRuleDescription(RuleDescriptionT&& value) {
    SetRuleDescription(std::forward<RuleDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall configuration for the rule, as a JSON document. The structure
   * depends on the rule's firewall type and rule type. For an AWS WAF
   * <code>INSPECTION</code> rule, provide an AWS WAF rule group. For an AWS WAF
   * <code>CONFIGURATION</code> rule, provide a single web ACL setting, such as
   * <code>DefaultAction</code> or <code>VisibilityConfig</code>; use
   * <code>wafConfigDataType</code> to declare which setting the document contains.
   * For the schema of each setting and complete examples, see <a
   * href="https://docs.aws.amazon.com/network-security-manager/latest/devguide/what-is.html">Writing
   * rule configurations</a> in the <i>AWS Network Security Manager Developer
   * Guide</i>.</p>
   */
  inline Aws::Utils::DocumentView GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = Aws::Utils::Document>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = Aws::Utils::Document>
  CreateRuleRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>). Default:
   * <code>true</code>.</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline CreateRuleRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the resource when it is created.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRuleRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRuleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_ruleName;

  RuleFirewallType m_firewallType{RuleFirewallType::NOT_SET};

  RuleType m_ruleType{RuleType::NOT_SET};

  Aws::String m_ruleDescription;

  Aws::Utils::Document m_configuration;

  bool m_isPublished{false};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_ruleNameHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_ruleTypeHasBeenSet = false;
  bool m_ruleDescriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
