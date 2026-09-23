/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AssociatedTemplateOrRule.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/PolicyConfiguration.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {
class GetPolicyResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API GetPolicyResult() = default;
  AWS_NETWORKSECURITYMANAGER_API GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated id of the policy.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  GetPolicyResult& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the policy.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  GetPolicyResult& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  GetPolicyResult& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the policy.</p>
   */
  inline const Aws::String& GetPolicyDescription() const { return m_policyDescription; }
  template <typename PolicyDescriptionT = Aws::String>
  void SetPolicyDescription(PolicyDescriptionT&& value) {
    m_policyDescriptionHasBeenSet = true;
    m_policyDescription = std::forward<PolicyDescriptionT>(value);
  }
  template <typename PolicyDescriptionT = Aws::String>
  GetPolicyResult& WithPolicyDescription(PolicyDescriptionT&& value) {
    SetPolicyDescription(std::forward<PolicyDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable) or <code>ACTIVE</code> (published, in use).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetPolicyResult& WithStatus(EntityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the resource. A lower number indicates a higher priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline GetPolicyResult& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The templates and rules associated with the policy. For AWS WAF policies,
   * this list contains 1 to 100 templates or rules, of which at most 2 can be
   * templates. For AWS Shield Advanced policies, this list is empty.</p>
   */
  inline const Aws::Vector<AssociatedTemplateOrRule>& GetAssociatedTemplateAndRuleList() const { return m_associatedTemplateAndRuleList; }
  template <typename AssociatedTemplateAndRuleListT = Aws::Vector<AssociatedTemplateOrRule>>
  void SetAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    m_associatedTemplateAndRuleListHasBeenSet = true;
    m_associatedTemplateAndRuleList = std::forward<AssociatedTemplateAndRuleListT>(value);
  }
  template <typename AssociatedTemplateAndRuleListT = Aws::Vector<AssociatedTemplateOrRule>>
  GetPolicyResult& WithAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    SetAssociatedTemplateAndRuleList(std::forward<AssociatedTemplateAndRuleListT>(value));
    return *this;
  }
  template <typename AssociatedTemplateAndRuleListT = AssociatedTemplateOrRule>
  GetPolicyResult& AddAssociatedTemplateAndRuleList(AssociatedTemplateAndRuleListT&& value) {
    m_associatedTemplateAndRuleListHasBeenSet = true;
    m_associatedTemplateAndRuleList.emplace_back(std::forward<AssociatedTemplateAndRuleListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the resource.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GetPolicyResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
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
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  GetPolicyResult& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the resource is a snapshot of a published version.</p>
   */
  inline bool GetIsSnapshot() const { return m_isSnapshot; }
  inline void SetIsSnapshot(bool value) {
    m_isSnapshotHasBeenSet = true;
    m_isSnapshot = value;
  }
  inline GetPolicyResult& WithIsSnapshot(bool value) {
    SetIsSnapshot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a published version of the resource exists.</p>
   */
  inline bool GetHasPublishedVersion() const { return m_hasPublishedVersion; }
  inline void SetHasPublishedVersion(bool value) {
    m_hasPublishedVersionHasBeenSet = true;
    m_hasPublishedVersion = value;
  }
  inline GetPolicyResult& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline PolicyFirewallType GetFirewallType() const { return m_firewallType; }
  inline void SetFirewallType(PolicyFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline GetPolicyResult& WithFirewallType(PolicyFirewallType value) {
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
  template <typename PolicyConfigurationT = PolicyConfiguration>
  void SetPolicyConfiguration(PolicyConfigurationT&& value) {
    m_policyConfigurationHasBeenSet = true;
    m_policyConfiguration = std::forward<PolicyConfigurationT>(value);
  }
  template <typename PolicyConfigurationT = PolicyConfiguration>
  GetPolicyResult& WithPolicyConfiguration(PolicyConfigurationT&& value) {
    SetPolicyConfiguration(std::forward<PolicyConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetPolicyResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_policyId;

  Aws::String m_policyArn;

  Aws::String m_policyName;

  Aws::String m_policyDescription;

  EntityStatus m_status{EntityStatus::NOT_SET};

  int m_priority{0};

  Aws::Vector<AssociatedTemplateOrRule> m_associatedTemplateAndRuleList;

  Aws::String m_version;

  Aws::String m_updateToken;

  bool m_isSnapshot{false};

  bool m_hasPublishedVersion{false};

  PolicyFirewallType m_firewallType{PolicyFirewallType::NOT_SET};

  PolicyConfiguration m_policyConfiguration;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyIdHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_policyDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_associatedTemplateAndRuleListHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_isSnapshotHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_policyConfigurationHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
