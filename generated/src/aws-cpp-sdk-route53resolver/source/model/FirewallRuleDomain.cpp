/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/FirewallRuleDomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

FirewallRuleDomain::FirewallRuleDomain(JsonView jsonValue) { *this = jsonValue; }

FirewallRuleDomain& FirewallRuleDomain::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainStatus")) {
    m_domainStatus = FirewallDomainStatusMapper::GetFirewallDomainStatusForName(jsonValue.GetString("DomainStatus"));
    m_domainStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Last24HourRequests")) {
    m_last24HourRequests = jsonValue.GetInt64("Last24HourRequests");
    m_last24HourRequestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalRequests")) {
    m_totalRequests = jsonValue.GetInt64("TotalRequests");
    m_totalRequestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AddedTime")) {
    m_addedTime = jsonValue.GetString("AddedTime");
    m_addedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRuleDomain::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  if (m_domainStatusHasBeenSet) {
    payload.WithString("DomainStatus", FirewallDomainStatusMapper::GetNameForFirewallDomainStatus(m_domainStatus));
  }

  if (m_last24HourRequestsHasBeenSet) {
    payload.WithInt64("Last24HourRequests", m_last24HourRequests);
  }

  if (m_totalRequestsHasBeenSet) {
    payload.WithInt64("TotalRequests", m_totalRequests);
  }

  if (m_addedTimeHasBeenSet) {
    payload.WithString("AddedTime", m_addedTime);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
