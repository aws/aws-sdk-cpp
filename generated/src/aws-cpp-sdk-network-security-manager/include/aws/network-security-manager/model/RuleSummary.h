/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/RuleFirewallType.h>
#include <aws/network-security-manager/model/RuleType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>Summary information about a rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/RuleSummary">AWS
 * API Reference</a></p>
 */
class RuleSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API RuleSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service-generated id of the rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  RuleSummary& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the rule.</p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  RuleSummary& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
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
  RuleSummary& WithRuleName(RuleNameT&& value) {
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
  inline RuleSummary& WithFirewallType(RuleFirewallType value) {
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
  inline RuleSummary& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable) or <code>ACTIVE</code> (published, in use).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RuleSummary& WithStatus(EntityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the resource.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  RuleSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a published version of the resource exists.</p>
   */
  inline bool GetHasPublishedVersion() const { return m_hasPublishedVersion; }
  inline bool HasPublishedVersionHasBeenSet() const { return m_hasPublishedVersionHasBeenSet; }
  inline void SetHasPublishedVersion(bool value) {
    m_hasPublishedVersionHasBeenSet = true;
    m_hasPublishedVersion = value;
  }
  inline RuleSummary& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated. For a snapshot, this is the time
   * when the snapshot was created.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RuleSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleId;

  Aws::String m_ruleArn;

  Aws::String m_ruleName;

  RuleFirewallType m_firewallType{RuleFirewallType::NOT_SET};

  RuleType m_ruleType{RuleType::NOT_SET};

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_ruleIdHasBeenSet = false;
  bool m_ruleArnHasBeenSet = false;
  bool m_ruleNameHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_ruleTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
