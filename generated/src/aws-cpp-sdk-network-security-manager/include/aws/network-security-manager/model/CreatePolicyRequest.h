/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/PolicyConfiguration.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>
#include <aws/network-security-manager/model/TemplateOrRuleReference.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class CreatePolicyRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

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
  CreatePolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  CreatePolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the policy.</p>
   */
  inline const Aws::String& GetPolicyDescription() const { return m_policyDescription; }
  inline bool PolicyDescriptionHasBeenSet() const { return m_policyDescriptionHasBeenSet; }
  template <typename PolicyDescriptionT = Aws::String>
  void SetPolicyDescription(PolicyDescriptionT&& value) {
    m_policyDescriptionHasBeenSet = true;
    m_policyDescription = std::forward<PolicyDescriptionT>(value);
  }
  template <typename PolicyDescriptionT = Aws::String>
  CreatePolicyRequest& WithPolicyDescription(PolicyDescriptionT&& value) {
    SetPolicyDescription(std::forward<PolicyDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the resource. A lower number indicates a higher priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreatePolicyRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The templates and rules to associate with the policy. For AWS WAF policies,
   * specify 1 to 100 templates or rules, of which at most 2 can be templates. For
   * AWS Shield Advanced policies, this list must be empty.</p>
   */
  inline const Aws::Vector<TemplateOrRuleReference>& GetAssociatedTemplateAndRuleList() const { return m_associatedTemplateAndRuleList; }
  inline bool AssociatedTemplateAndRuleListHasBeenSet() const { return m_associatedTemplateAndRuleListHasBeenSet; }
  template <typename AssociatedTemplateAndRuleListT = Aws::Vector<TemplateOrRuleReference>>
  void SetAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    m_associatedTemplateAndRuleListHasBeenSet = true;
    m_associatedTemplateAndRuleList = std::forward<AssociatedTemplateAndRuleListT>(value);
  }
  template <typename AssociatedTemplateAndRuleListT = Aws::Vector<TemplateOrRuleReference>>
  CreatePolicyRequest& WithAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    SetAssociatedTemplateAndRuleList(std::forward<AssociatedTemplateAndRuleListT>(value));
    return *this;
  }
  template <typename AssociatedTemplateAndRuleListT = TemplateOrRuleReference>
  CreatePolicyRequest& AddAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    m_associatedTemplateAndRuleListHasBeenSet = true;
    m_associatedTemplateAndRuleList.emplace_back(std::forward<AssociatedTemplateAndRuleListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline PolicyFirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(PolicyFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline CreatePolicyRequest& WithFirewallType(PolicyFirewallType value) {
    SetFirewallType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings that control the policy's behavior, including
   * remediation and firewall-type-specific settings.</p>
   */
  inline const PolicyConfiguration& GetPolicyConfiguration() const { return m_policyConfiguration; }
  inline bool PolicyConfigurationHasBeenSet() const { return m_policyConfigurationHasBeenSet; }
  template <typename PolicyConfigurationT = PolicyConfiguration>
  void SetPolicyConfiguration(PolicyConfigurationT&& value) {
    m_policyConfigurationHasBeenSet = true;
    m_policyConfiguration = std::forward<PolicyConfigurationT>(value);
  }
  template <typename PolicyConfigurationT = PolicyConfiguration>
  CreatePolicyRequest& WithPolicyConfiguration(PolicyConfigurationT&& value) {
    SetPolicyConfiguration(std::forward<PolicyConfigurationT>(value));
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
  inline CreatePolicyRequest& WithIsPublished(bool value) {
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
  CreatePolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_policyName;

  Aws::String m_policyDescription;

  int m_priority{0};

  Aws::Vector<TemplateOrRuleReference> m_associatedTemplateAndRuleList;

  PolicyFirewallType m_firewallType{PolicyFirewallType::NOT_SET};

  PolicyConfiguration m_policyConfiguration;

  bool m_isPublished{false};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_policyNameHasBeenSet = false;
  bool m_policyDescriptionHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_associatedTemplateAndRuleListHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_policyConfigurationHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
