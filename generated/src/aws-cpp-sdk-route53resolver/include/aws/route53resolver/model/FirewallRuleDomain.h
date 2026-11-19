/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainStatus.h>

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
 * <p>A domain that DNS Firewall observed for an AutoAllowlist rule, with its
 * review status and request volume. Counts are aggregated across all VPCs that use
 * the rule group, through a rule group association or through a Route 53 Profile
 * that includes the rule group, including VPCs in other accounts. The domain isn't
 * attributed to the VPC or account in which it was observed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleDomain">AWS
 * API Reference</a></p>
 */
class FirewallRuleDomain {
 public:
  AWS_ROUTE53RESOLVER_API FirewallRuleDomain() = default;
  AWS_ROUTE53RESOLVER_API FirewallRuleDomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API FirewallRuleDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain name.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  FirewallRuleDomain& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The review status of the domain:</p> <ul> <li> <p> <code>OBSERVED</code> -
   * DNS Firewall saw the domain in the VPCs' DNS traffic and you haven't allowed or
   * denied it. The look-back window seeds the initial observed domains. After that,
   * a domain becomes observed when any DNS Firewall rule blocks a query for it from
   * a VPC that uses the rule group, including rules in other rule groups, or when
   * you remove it from the managed domain list with <code>REMOVE</code>. To keep
   * observing new domains, place a rule that blocks the domains you haven't approved
   * after the AutoAllowlist rule. Domains from the look-back period that keep being
   * queried and aren't blocked move to <code>ALLOWED</code> within about a day after
   * the rule is created. Observed domains aren't evaluated for safety, so review
   * them before you allow them.</p> </li> <li> <p> <code>ALLOWED</code> - DNS
   * Firewall allowed queries for the domain, whether or not the domain is in the
   * rule's managed domain list. To get the domains in the managed domain list (the
   * allowlist that the rule enforces), call <a>ListFirewallRuleDomains</a> with
   * <code>FirewallDomainListId</code>.</p> </li> <li> <p> <code>DENIED</code> - The
   * domain was denied with the <code>DENY</code> operation of
   * <a>UpdateFirewallDomains</a>, which also removes it from the managed domain list
   * if it was there. A denied domain that is still queried and not blocked can move
   * to <code>ALLOWED</code>.</p> </li> </ul>
   */
  inline FirewallDomainStatus GetDomainStatus() const { return m_domainStatus; }
  inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
  inline void SetDomainStatus(FirewallDomainStatus value) {
    m_domainStatusHasBeenSet = true;
    m_domainStatus = value;
  }
  inline FirewallRuleDomain& WithDomainStatus(FirewallDomainStatus value) {
    SetDomainStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of DNS requests observed for this domain in the last 24 hours.</p>
   */
  inline long long GetLast24HourRequests() const { return m_last24HourRequests; }
  inline bool Last24HourRequestsHasBeenSet() const { return m_last24HourRequestsHasBeenSet; }
  inline void SetLast24HourRequests(long long value) {
    m_last24HourRequestsHasBeenSet = true;
    m_last24HourRequests = value;
  }
  inline FirewallRuleDomain& WithLast24HourRequests(long long value) {
    SetLast24HourRequests(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of DNS requests observed for this domain since it was first
   * added, including the requests in the look-back window that seeded the rule.</p>
   */
  inline long long GetTotalRequests() const { return m_totalRequests; }
  inline bool TotalRequestsHasBeenSet() const { return m_totalRequestsHasBeenSet; }
  inline void SetTotalRequests(long long value) {
    m_totalRequestsHasBeenSet = true;
    m_totalRequests = value;
  }
  inline FirewallRuleDomain& WithTotalRequests(long long value) {
    SetTotalRequests(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the domain was first observed and added, in RFC 3339
   * format.</p>
   */
  inline const Aws::String& GetAddedTime() const { return m_addedTime; }
  inline bool AddedTimeHasBeenSet() const { return m_addedTimeHasBeenSet; }
  template <typename AddedTimeT = Aws::String>
  void SetAddedTime(AddedTimeT&& value) {
    m_addedTimeHasBeenSet = true;
    m_addedTime = std::forward<AddedTimeT>(value);
  }
  template <typename AddedTimeT = Aws::String>
  FirewallRuleDomain& WithAddedTime(AddedTimeT&& value) {
    SetAddedTime(std::forward<AddedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  FirewallDomainStatus m_domainStatus{FirewallDomainStatus::NOT_SET};

  long long m_last24HourRequests{0};

  long long m_totalRequests{0};

  Aws::String m_addedTime;
  bool m_domainNameHasBeenSet = false;
  bool m_domainStatusHasBeenSet = false;
  bool m_last24HourRequestsHasBeenSet = false;
  bool m_totalRequestsHasBeenSet = false;
  bool m_addedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
