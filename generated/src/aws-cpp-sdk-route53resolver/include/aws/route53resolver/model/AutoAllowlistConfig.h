/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

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
 * <p>The configuration for an AutoAllowlist firewall rule, which observes the DNS
 * traffic of the VPCs that use the rule group, through a rule group association or
 * a Route 53 Profile. The rule allows the domains on its managed domain list. When
 * you create the rule, DNS Firewall seeds the observed domains from the look-back
 * window of each VPC. After that, a domain is listed as observed when any DNS
 * Firewall rule blocks a query for it from a VPC that uses the rule group,
 * including rules in other rule groups, so place a rule that blocks the domains
 * you haven't approved after the AutoAllowlist rule. To review the observed
 * domains, call <a>ListFirewallRuleDomains</a>. To approve or deny them, call
 * <a>UpdateFirewallDomains</a> on the rule's managed domain list.</p> <p>An
 * AutoAllowlist rule uses the <code>ALLOW</code> action, applies to all query
 * types, and always inspects redirection domains. You can't set
 * <code>Qtype</code>, <code>FirewallDomainRedirectionAction</code>,
 * <code>BlockResponse</code>, or the DNS Firewall Advanced settings on it. A rule
 * group can contain one AutoAllowlist rule.</p> <p>A new AutoAllowlist rule has
 * status <code>CREATING</code> while DNS Firewall reads the look-back window of
 * each VPC that uses the rule group, which can take hours for a rule group that
 * many VPCs use. Until the status is <code>COMPLETE</code>, the observed domains
 * and request counts are partial and <a>UpdateFirewallRule</a> rejects the rule.
 * You can approve, remove, and deny domains while the rule is
 * <code>CREATING</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AutoAllowlistConfig">AWS
 * API Reference</a></p>
 */
class AutoAllowlistConfig {
 public:
  AWS_ROUTE53RESOLVER_API AutoAllowlistConfig() = default;
  AWS_ROUTE53RESOLVER_API AutoAllowlistConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API AutoAllowlistConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The look-back window, in hours, of historical DNS traffic that DNS Firewall
   * uses to seed the initial set of observed domains when you create the rule. Valid
   * values are from <code>1</code> to <code>168</code> (7 days). You can't change
   * this value after you create the rule.</p>
   */
  inline int GetInitialDataTimeframeHours() const { return m_initialDataTimeframeHours; }
  inline bool InitialDataTimeframeHoursHasBeenSet() const { return m_initialDataTimeframeHoursHasBeenSet; }
  inline void SetInitialDataTimeframeHours(int value) {
    m_initialDataTimeframeHoursHasBeenSet = true;
    m_initialDataTimeframeHours = value;
  }
  inline AutoAllowlistConfig& WithInitialDataTimeframeHours(int value) {
    SetInitialDataTimeframeHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of a domain list whose domains DNS Firewall copies into the
   * AutoAllowlist rule's managed domain list after you create the rule. You must own
   * the source list, and it must be in <code>COMPLETE</code> status, in the same
   * Region, and not a managed or AutoAllowlist list. DNS Firewall reads the source
   * list while the copy runs, so don't change or delete it until the managed list's
   * status is no longer <code>IMPORTING</code>. A change made to the source list
   * during the copy can be reflected in the managed list, and deleting the source
   * list fails the copy. The managed list then has status <code>COMPLETE</code>, or
   * <code>COMPLETE_IMPORT_FAILED</code> if the copy failed. DNS Firewall uses this
   * value only when you create the rule.</p>
   */
  inline const Aws::String& GetImportFromFirewallDomainListId() const { return m_importFromFirewallDomainListId; }
  inline bool ImportFromFirewallDomainListIdHasBeenSet() const { return m_importFromFirewallDomainListIdHasBeenSet; }
  template <typename ImportFromFirewallDomainListIdT = Aws::String>
  void SetImportFromFirewallDomainListId(ImportFromFirewallDomainListIdT&& value) {
    m_importFromFirewallDomainListIdHasBeenSet = true;
    m_importFromFirewallDomainListId = std::forward<ImportFromFirewallDomainListIdT>(value);
  }
  template <typename ImportFromFirewallDomainListIdT = Aws::String>
  AutoAllowlistConfig& WithImportFromFirewallDomainListId(ImportFromFirewallDomainListIdT&& value) {
    SetImportFromFirewallDomainListId(std::forward<ImportFromFirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the managed domain list that DNS Firewall creates and maintains for
   * this AutoAllowlist rule. The list is named <code>AutoAllowlist - </code>
   * followed by the rule name, cut to 64 characters, and is renamed when you rename
   * the rule. DNS Firewall returns this value in responses. You can't set it.</p>
   */
  inline const Aws::String& GetAutoAllowlistFirewallDomainListId() const { return m_autoAllowlistFirewallDomainListId; }
  inline bool AutoAllowlistFirewallDomainListIdHasBeenSet() const { return m_autoAllowlistFirewallDomainListIdHasBeenSet; }
  template <typename AutoAllowlistFirewallDomainListIdT = Aws::String>
  void SetAutoAllowlistFirewallDomainListId(AutoAllowlistFirewallDomainListIdT&& value) {
    m_autoAllowlistFirewallDomainListIdHasBeenSet = true;
    m_autoAllowlistFirewallDomainListId = std::forward<AutoAllowlistFirewallDomainListIdT>(value);
  }
  template <typename AutoAllowlistFirewallDomainListIdT = Aws::String>
  AutoAllowlistConfig& WithAutoAllowlistFirewallDomainListId(AutoAllowlistFirewallDomainListIdT&& value) {
    SetAutoAllowlistFirewallDomainListId(std::forward<AutoAllowlistFirewallDomainListIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_initialDataTimeframeHours{0};

  Aws::String m_importFromFirewallDomainListId;

  Aws::String m_autoAllowlistFirewallDomainListId;
  bool m_initialDataTimeframeHoursHasBeenSet = false;
  bool m_importFromFirewallDomainListIdHasBeenSet = false;
  bool m_autoAllowlistFirewallDomainListIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
