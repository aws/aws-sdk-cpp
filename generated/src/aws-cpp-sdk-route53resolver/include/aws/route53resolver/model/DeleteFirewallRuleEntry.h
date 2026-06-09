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
 * <p>The details for deleting a single firewall rule in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleEntry">AWS
 * API Reference</a></p>
 */
class DeleteFirewallRuleEntry {
 public:
  AWS_ROUTE53RESOLVER_API DeleteFirewallRuleEntry() = default;
  AWS_ROUTE53RESOLVER_API DeleteFirewallRuleEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API DeleteFirewallRuleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the firewall rule group for the rule.</p>
   */
  inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
  inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
  template <typename FirewallRuleGroupIdT = Aws::String>
  void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    m_firewallRuleGroupIdHasBeenSet = true;
    m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value);
  }
  template <typename FirewallRuleGroupIdT = Aws::String>
  DeleteFirewallRuleEntry& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain list that's used in the rule.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  DeleteFirewallRuleEntry& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS Firewall Advanced rule.</p>
   */
  inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
  inline bool FirewallThreatProtectionIdHasBeenSet() const { return m_firewallThreatProtectionIdHasBeenSet; }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    m_firewallThreatProtectionIdHasBeenSet = true;
    m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value);
  }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  DeleteFirewallRuleEntry& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS query type that the rule evaluates.</p>
   */
  inline const Aws::String& GetQtype() const { return m_qtype; }
  inline bool QtypeHasBeenSet() const { return m_qtypeHasBeenSet; }
  template <typename QtypeT = Aws::String>
  void SetQtype(QtypeT&& value) {
    m_qtypeHasBeenSet = true;
    m_qtype = std::forward<QtypeT>(value);
  }
  template <typename QtypeT = Aws::String>
  DeleteFirewallRuleEntry& WithQtype(QtypeT&& value) {
    SetQtype(std::forward<QtypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallRuleGroupId;

  Aws::String m_firewallDomainListId;

  Aws::String m_firewallThreatProtectionId;

  Aws::String m_qtype;
  bool m_firewallRuleGroupIdHasBeenSet = false;
  bool m_firewallDomainListIdHasBeenSet = false;
  bool m_firewallThreatProtectionIdHasBeenSet = false;
  bool m_qtypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
