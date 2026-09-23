/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/RuleFirewallType.h>
#include <aws/network-security-manager/model/RuleType.h>

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
class CreateRuleResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateRuleResult() = default;
  AWS_NETWORKSECURITYMANAGER_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated id of the rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  CreateRuleResult& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the rule.</p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  CreateRuleResult& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the rule.</p>
   */
  inline const Aws::String& GetRuleName() const { return m_ruleName; }
  template <typename RuleNameT = Aws::String>
  void SetRuleName(RuleNameT&& value) {
    m_ruleNameHasBeenSet = true;
    m_ruleName = std::forward<RuleNameT>(value);
  }
  template <typename RuleNameT = Aws::String>
  CreateRuleResult& WithRuleName(RuleNameT&& value) {
    SetRuleName(std::forward<RuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline RuleFirewallType GetFirewallType() const { return m_firewallType; }
  inline void SetFirewallType(RuleFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline CreateRuleResult& WithFirewallType(RuleFirewallType value) {
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
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline CreateRuleResult& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the rule.</p>
   */
  inline const Aws::String& GetRuleDescription() const { return m_ruleDescription; }
  template <typename RuleDescriptionT = Aws::String>
  void SetRuleDescription(RuleDescriptionT&& value) {
    m_ruleDescriptionHasBeenSet = true;
    m_ruleDescription = std::forward<RuleDescriptionT>(value);
  }
  template <typename RuleDescriptionT = Aws::String>
  CreateRuleResult& WithRuleDescription(RuleDescriptionT&& value) {
    SetRuleDescription(std::forward<RuleDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall configuration for the rule, as a JSON document. The structure
   * depends on the rule's firewall type and rule type.</p>
   */
  inline Aws::Utils::DocumentView GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = Aws::Utils::Document>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = Aws::Utils::Document>
  CreateRuleResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  inline CreateRuleResult& WithStatus(EntityStatus value) {
    SetStatus(value);
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
  CreateRuleResult& WithVersion(VersionT&& value) {
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
  CreateRuleResult& WithUpdateToken(UpdateTokenT&& value) {
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
  inline CreateRuleResult& WithIsSnapshot(bool value) {
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
  inline CreateRuleResult& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
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
  CreateRuleResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  CreateRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ruleId;

  Aws::String m_ruleArn;

  Aws::String m_ruleName;

  RuleFirewallType m_firewallType{RuleFirewallType::NOT_SET};

  RuleType m_ruleType{RuleType::NOT_SET};

  Aws::String m_ruleDescription;

  Aws::Utils::Document m_configuration;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  Aws::String m_updateToken;

  bool m_isSnapshot{false};

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ruleIdHasBeenSet = false;
  bool m_ruleArnHasBeenSet = false;
  bool m_ruleNameHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_ruleTypeHasBeenSet = false;
  bool m_ruleDescriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_isSnapshotHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
