/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ListFirewallRuleDomainsQueryOptions.h>

#include <utility>

namespace Aws {
namespace Route53Resolver {
namespace Model {

/**
 */
class ListFirewallRuleDomainsRequest : public Route53ResolverRequest {
 public:
  AWS_ROUTE53RESOLVER_API ListFirewallRuleDomainsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFirewallRuleDomains"; }

  AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the firewall rule group that contains the rule.</p>
   */
  inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
  inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
  template <typename FirewallRuleGroupIdT = Aws::String>
  void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    m_firewallRuleGroupIdHasBeenSet = true;
    m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value);
  }
  template <typename FirewallRuleGroupIdT = Aws::String>
  ListFirewallRuleDomainsRequest& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) {
    SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threat protection ID that identifies an AutoAllowlist rule. Provide this
   * to list an AutoAllowlist rule's domains.</p>
   */
  inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
  inline bool FirewallThreatProtectionIdHasBeenSet() const { return m_firewallThreatProtectionIdHasBeenSet; }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    m_firewallThreatProtectionIdHasBeenSet = true;
    m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value);
  }
  template <typename FirewallThreatProtectionIdT = Aws::String>
  ListFirewallRuleDomainsRequest& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) {
    SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AutoAllowlist rule's managed domain list. Provide this to list
   * the domains that the rule currently allows.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  ListFirewallRuleDomainsRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters and sort order for the returned domains. If you don't
   * specify this, the operation returns the <code>OBSERVED</code> domains sorted by
   * <code>TIME_ADDED</code> in descending order. See
   * <a>ListFirewallRuleDomainsQueryOptions</a>.</p>
   */
  inline const ListFirewallRuleDomainsQueryOptions& GetQueryOptions() const { return m_queryOptions; }
  inline bool QueryOptionsHasBeenSet() const { return m_queryOptionsHasBeenSet; }
  template <typename QueryOptionsT = ListFirewallRuleDomainsQueryOptions>
  void SetQueryOptions(QueryOptionsT&& value) {
    m_queryOptionsHasBeenSet = true;
    m_queryOptions = std::forward<QueryOptionsT>(value);
  }
  template <typename QueryOptionsT = ListFirewallRuleDomainsQueryOptions>
  ListFirewallRuleDomainsRequest& WithQueryOptions(QueryOptionsT&& value) {
    SetQueryOptions(std::forward<QueryOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of domains that you want to return in a single call. If
   * more domains remain than can be returned, the response includes a
   * <code>NextToken</code> value that you can use in a subsequent call to get the
   * next batch. The default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFirewallRuleDomainsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For the first call to this operation, omit this value. If more domains remain
   * than can be returned in a single call, the response includes a
   * <code>NextToken</code> value. In your next call, specify that value to get the
   * next batch of domains.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallRuleDomainsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallRuleGroupId;

  Aws::String m_firewallThreatProtectionId;

  Aws::String m_firewallDomainListId;

  ListFirewallRuleDomainsQueryOptions m_queryOptions;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_firewallRuleGroupIdHasBeenSet = false;
  bool m_firewallThreatProtectionIdHasBeenSet = false;
  bool m_firewallDomainListIdHasBeenSet = false;
  bool m_queryOptionsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
