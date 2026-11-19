/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/DomainListType.h>
#include <aws/route53resolver/model/FirewallDomainListStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>Minimal high-level information for a firewall domain list. The action
 * <a>ListFirewallDomainLists</a> returns an array of these objects. </p> <p>To
 * retrieve full information for a firewall domain list, call
 * <a>GetFirewallDomainList</a> and <a>ListFirewallDomains</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallDomainListMetadata">AWS
 * API Reference</a></p>
 */
class FirewallDomainListMetadata {
 public:
  AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata() = default;
  AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API FirewallDomainListMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the domain list. </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  FirewallDomainListMetadata& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the firewall domain list metadata.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  FirewallDomainListMetadata& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the domain list. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FirewallDomainListMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique string defined by you to identify the request. This allows you to
   * retry failed requests without the risk of running the operation twice. This can
   * be any unique string, for example, a timestamp. </p>
   */
  inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
  inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
  template <typename CreatorRequestIdT = Aws::String>
  void SetCreatorRequestId(CreatorRequestIdT&& value) {
    m_creatorRequestIdHasBeenSet = true;
    m_creatorRequestId = std::forward<CreatorRequestIdT>(value);
  }
  template <typename CreatorRequestIdT = Aws::String>
  FirewallDomainListMetadata& WithCreatorRequestId(CreatorRequestIdT&& value) {
    SetCreatorRequestId(std::forward<CreatorRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The owner of the list, used only for lists that are not managed by you. For
   * example, the managed domain list <code>AWSManagedDomainsMalwareDomainList</code>
   * has the managed owner name <code>Route 53 Resolver DNS Firewall</code>.</p>
   */
  inline const Aws::String& GetManagedOwnerName() const { return m_managedOwnerName; }
  inline bool ManagedOwnerNameHasBeenSet() const { return m_managedOwnerNameHasBeenSet; }
  template <typename ManagedOwnerNameT = Aws::String>
  void SetManagedOwnerName(ManagedOwnerNameT&& value) {
    m_managedOwnerNameHasBeenSet = true;
    m_managedOwnerName = std::forward<ManagedOwnerNameT>(value);
  }
  template <typename ManagedOwnerNameT = Aws::String>
  FirewallDomainListMetadata& WithManagedOwnerName(ManagedOwnerNameT&& value) {
    SetManagedOwnerName(std::forward<ManagedOwnerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the managed domain list, for example <code>THREAT</code>.</p>
   */
  inline DomainListType GetManagedListType() const { return m_managedListType; }
  inline bool ManagedListTypeHasBeenSet() const { return m_managedListTypeHasBeenSet; }
  inline void SetManagedListType(DomainListType value) {
    m_managedListTypeHasBeenSet = true;
    m_managedListType = value;
  }
  inline FirewallDomainListMetadata& WithManagedListType(DomainListType value) {
    SetManagedListType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the domain list.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  FirewallDomainListMetadata& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an AutoAllowlist domain list, the ID of the firewall rule group that
   * contains the auto-allowlist rule that owns this domain list. Use it to navigate
   * to the rule group and its VPC associations. Present only when
   * <code>ManagedListType</code> is <code>AUTOALLOWLIST</code>.</p>
   */
  inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
  inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
  template <typename FirewallRuleGroupIdT = Aws::String>
  void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    m_firewallRuleGroupIdHasBeenSet = true;
    m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value);
  }
  template <typename FirewallRuleGroupIdT = Aws::String>
  FirewallDomainListMetadata& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an AutoAllowlist domain list, the threat protection ID of the
   * auto-allowlist rule that owns this domain list. Provide it to
   * <a>ListFirewallRuleDomains</a> to review the observed, allowed, and denied
   * domains. Present only when <code>ManagedListType</code> is
   * <code>AUTOALLOWLIST</code>.</p>
   */
  inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
  inline bool FirewallThreatProtectionIdHasBeenSet() const { return m_firewallThreatProtectionIdHasBeenSet; }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    m_firewallThreatProtectionIdHasBeenSet = true;
    m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value);
  }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  FirewallDomainListMetadata& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For an AutoAllowlist domain list, the status of the list:
   * <code>IMPORTING</code> while domains are being copied from the source domain
   * list specified at rule creation, <code>COMPLETE_IMPORT_FAILED</code> if that
   * copy failed, <code>UPDATING</code> while a change made with
   * <a>UpdateFirewallDomains</a> is being applied, <code>COMPLETE</code> otherwise,
   * and <code>DELETING</code> while the owning rule is being deleted. The first
   * change that you make after a failed copy replaces
   * <code>COMPLETE_IMPORT_FAILED</code> with <code>UPDATING</code> and then
   * <code>COMPLETE</code>. Present only when <code>ManagedListType</code> is
   * <code>AUTOALLOWLIST</code>. Use <a>GetFirewallDomainList</a> for the status of
   * other domain lists.</p>
   */
  inline FirewallDomainListStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FirewallDomainListStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FirewallDomainListMetadata& WithStatus(FirewallDomainListStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_creatorRequestId;

  Aws::String m_managedOwnerName;

  DomainListType m_managedListType{DomainListType::NOT_SET};

  Aws::String m_category;

  Aws::String m_firewallRuleGroupId;

  Aws::String m_firewallThreatProtectionId;

  FirewallDomainListStatus m_status{FirewallDomainListStatus::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_creatorRequestIdHasBeenSet = false;
  bool m_managedOwnerNameHasBeenSet = false;
  bool m_managedListTypeHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_firewallRuleGroupIdHasBeenSet = false;
  bool m_firewallThreatProtectionIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
