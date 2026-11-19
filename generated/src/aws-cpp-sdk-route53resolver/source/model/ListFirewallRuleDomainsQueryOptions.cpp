/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/ListFirewallRuleDomainsQueryOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

ListFirewallRuleDomainsQueryOptions::ListFirewallRuleDomainsQueryOptions(JsonView jsonValue) { *this = jsonValue; }

ListFirewallRuleDomainsQueryOptions& ListFirewallRuleDomainsQueryOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainStatus")) {
    m_domainStatus = FirewallDomainStatusFilterMapper::GetFirewallDomainStatusFilterForName(jsonValue.GetString("DomainStatus"));
    m_domainStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortBy")) {
    m_sortBy = FirewallRuleDomainSortByMapper::GetFirewallRuleDomainSortByForName(jsonValue.GetString("SortBy"));
    m_sortByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortOrder")) {
    m_sortOrder = FirewallRuleDomainSortOrderMapper::GetFirewallRuleDomainSortOrderForName(jsonValue.GetString("SortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainNameFilter")) {
    m_domainNameFilter = jsonValue.GetString("DomainNameFilter");
    m_domainNameFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ListFirewallRuleDomainsQueryOptions::Jsonize() const {
  JsonValue payload;

  if (m_domainStatusHasBeenSet) {
    payload.WithString("DomainStatus", FirewallDomainStatusFilterMapper::GetNameForFirewallDomainStatusFilter(m_domainStatus));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", FirewallRuleDomainSortByMapper::GetNameForFirewallRuleDomainSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", FirewallRuleDomainSortOrderMapper::GetNameForFirewallRuleDomainSortOrder(m_sortOrder));
  }

  if (m_domainNameFilterHasBeenSet) {
    payload.WithString("DomainNameFilter", m_domainNameFilter);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
