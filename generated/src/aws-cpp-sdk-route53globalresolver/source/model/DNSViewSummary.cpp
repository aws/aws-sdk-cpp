/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/DNSViewSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

DNSViewSummary::DNSViewSummary(JsonView jsonValue) { *this = jsonValue; }

DNSViewSummary& DNSViewSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnssecValidation")) {
    m_dnssecValidation = DnsSecValidationTypeMapper::GetDnsSecValidationTypeForName(jsonValue.GetString("dnssecValidation"));
    m_dnssecValidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ednsClientSubnet")) {
    m_ednsClientSubnet = EdnsClientSubnetTypeMapper::GetEdnsClientSubnetTypeForName(jsonValue.GetString("ednsClientSubnet"));
    m_ednsClientSubnetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallRulesFailOpen")) {
    m_firewallRulesFailOpen =
        FirewallRulesFailOpenTypeMapper::GetFirewallRulesFailOpenTypeForName(jsonValue.GetString("firewallRulesFailOpen"));
    m_firewallRulesFailOpenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalResolverId")) {
    m_globalResolverId = jsonValue.GetString("globalResolverId");
    m_globalResolverIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ProfileResourceStatusMapper::GetProfileResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue DNSViewSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_dnssecValidationHasBeenSet) {
    payload.WithString("dnssecValidation", DnsSecValidationTypeMapper::GetNameForDnsSecValidationType(m_dnssecValidation));
  }

  if (m_ednsClientSubnetHasBeenSet) {
    payload.WithString("ednsClientSubnet", EdnsClientSubnetTypeMapper::GetNameForEdnsClientSubnetType(m_ednsClientSubnet));
  }

  if (m_firewallRulesFailOpenHasBeenSet) {
    payload.WithString("firewallRulesFailOpen",
                       FirewallRulesFailOpenTypeMapper::GetNameForFirewallRulesFailOpenType(m_firewallRulesFailOpen));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_globalResolverIdHasBeenSet) {
    payload.WithString("globalResolverId", m_globalResolverId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ProfileResourceStatusMapper::GetNameForProfileResourceStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
