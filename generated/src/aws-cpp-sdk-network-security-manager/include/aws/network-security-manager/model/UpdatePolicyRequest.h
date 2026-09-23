/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/PolicyConfiguration.h>
#include <aws/network-security-manager/model/TemplateOrRuleReference.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class UpdatePolicyRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API UpdatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicy"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the policy. This is the policy's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetPolicyIdentifier() const { return m_policyIdentifier; }
  inline bool PolicyIdentifierHasBeenSet() const { return m_policyIdentifierHasBeenSet; }
  template <typename PolicyIdentifierT = Aws::String>
  void SetPolicyIdentifier(PolicyIdentifierT&& value) {
    m_policyIdentifierHasBeenSet = true;
    m_policyIdentifier = std::forward<PolicyIdentifierT>(value);
  }
  template <typename PolicyIdentifierT = Aws::String>
  UpdatePolicyRequest& WithPolicyIdentifier(PolicyIdentifierT&& value) {
    SetPolicyIdentifier(std::forward<PolicyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic concurrency control. Each read and write returns
   * an <code>updateToken</code>. Provide the most recent value on your next update
   * to detect and prevent conflicting concurrent modifications.</p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdatePolicyRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  UpdatePolicyRequest& WithPolicyDescription(PolicyDescriptionT&& value) {
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
  inline UpdatePolicyRequest& WithPriority(int value) {
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
  UpdatePolicyRequest& WithAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    SetAssociatedTemplateAndRuleList(std::forward<AssociatedTemplateAndRuleListT>(value));
    return *this;
  }
  template <typename AssociatedTemplateAndRuleListT = TemplateOrRuleReference>
  UpdatePolicyRequest& AddAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    m_associatedTemplateAndRuleListHasBeenSet = true;
    m_associatedTemplateAndRuleList.emplace_back(std::forward<AssociatedTemplateAndRuleListT>(value));
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
  UpdatePolicyRequest& WithPolicyConfiguration(PolicyConfigurationT&& value) {
    SetPolicyConfiguration(std::forward<PolicyConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>).</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline UpdatePolicyRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
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
  UpdatePolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyIdentifier;

  Aws::String m_updateToken;

  Aws::String m_policyDescription;

  int m_priority{0};

  Aws::Vector<TemplateOrRuleReference> m_associatedTemplateAndRuleList;

  PolicyConfiguration m_policyConfiguration;

  bool m_isPublished{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_policyIdentifierHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_policyDescriptionHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_associatedTemplateAndRuleListHasBeenSet = false;
  bool m_policyConfigurationHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
