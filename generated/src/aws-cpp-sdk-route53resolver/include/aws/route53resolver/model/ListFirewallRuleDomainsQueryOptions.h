/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallDomainStatusFilter.h>
#include <aws/route53resolver/model/FirewallRuleDomainSortBy.h>
#include <aws/route53resolver/model/FirewallRuleDomainSortOrder.h>

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
 * <p>Optional filters and sort order for
 * <a>ListFirewallRuleDomains</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleDomainsQueryOptions">AWS
 * API Reference</a></p>
 */
class ListFirewallRuleDomainsQueryOptions {
 public:
  AWS_ROUTE53RESOLVER_API ListFirewallRuleDomainsQueryOptions() = default;
  AWS_ROUTE53RESOLVER_API ListFirewallRuleDomainsQueryOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API ListFirewallRuleDomainsQueryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters the returned domains by review status. Valid values:</p> <ul> <li>
   * <p> <code>OBSERVED</code> - Domains that DNS Firewall saw in the VPCs' DNS
   * traffic and that you haven't allowed or denied. After the look-back window, a
   * domain is observed when any DNS Firewall rule blocks a query for it from a VPC
   * that uses the rule group, including rules in other rule groups, or when you
   * remove it from the managed domain list. Domains from the look-back period that
   * keep being queried and aren't blocked move to <code>ALLOWED</code> within about
   * a day after the rule is created.</p> </li> <li> <p> <code>ALLOWED</code> -
   * Domains that DNS Firewall allowed queries for, whether or not they're in the
   * rule's managed domain list.</p> </li> <li> <p> <code>DENIED</code> - Domains
   * that were denied with the <code>DENY</code> operation. A denied domain that is
   * still queried and not blocked can move to <code>ALLOWED</code>.</p> </li> </ul>
   * <p>If you don't specify a value, the operation returns <code>OBSERVED</code>
   * domains.</p>
   */
  inline FirewallDomainStatusFilter GetDomainStatus() const { return m_domainStatus; }
  inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
  inline void SetDomainStatus(FirewallDomainStatusFilter value) {
    m_domainStatusHasBeenSet = true;
    m_domainStatus = value;
  }
  inline ListFirewallRuleDomainsQueryOptions& WithDomainStatus(FirewallDomainStatusFilter value) {
    SetDomainStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute to sort the returned domains by. Valid values:</p> <ul> <li>
   * <p> <code>TIME_ADDED</code> - The <code>AddedTime</code> of the domain.</p>
   * </li> <li> <p> <code>DAILY_TOTAL</code> - The <code>Last24HourRequests</code>
   * count.</p> </li> <li> <p> <code>TOTAL_REQUESTS</code> - The
   * <code>TotalRequests</code> count.</p> </li> </ul> <p>If you don't specify a
   * value, the operation sorts by <code>TIME_ADDED</code>.</p>
   */
  inline FirewallRuleDomainSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(FirewallRuleDomainSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListFirewallRuleDomainsQueryOptions& WithSortBy(FirewallRuleDomainSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort direction: <code>ASC</code> for ascending or <code>DESC</code> for
   * descending. If you don't specify a value, the operation sorts in descending
   * order.</p>
   */
  inline FirewallRuleDomainSortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(FirewallRuleDomainSortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListFirewallRuleDomainsQueryOptions& WithSortOrder(FirewallRuleDomainSortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the domains whose name contains this substring.</p>
   */
  inline const Aws::String& GetDomainNameFilter() const { return m_domainNameFilter; }
  inline bool DomainNameFilterHasBeenSet() const { return m_domainNameFilterHasBeenSet; }
  template <typename DomainNameFilterT = Aws::String>
  void SetDomainNameFilter(DomainNameFilterT&& value) {
    m_domainNameFilterHasBeenSet = true;
    m_domainNameFilter = std::forward<DomainNameFilterT>(value);
  }
  template <typename DomainNameFilterT = Aws::String>
  ListFirewallRuleDomainsQueryOptions& WithDomainNameFilter(DomainNameFilterT&& value) {
    SetDomainNameFilter(std::forward<DomainNameFilterT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallDomainStatusFilter m_domainStatus{FirewallDomainStatusFilter::NOT_SET};

  FirewallRuleDomainSortBy m_sortBy{FirewallRuleDomainSortBy::NOT_SET};

  FirewallRuleDomainSortOrder m_sortOrder{FirewallRuleDomainSortOrder::NOT_SET};

  Aws::String m_domainNameFilter;
  bool m_domainStatusHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_domainNameFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
