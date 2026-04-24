/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/UpdateDNSViewRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDNSViewRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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

  return payload.View().WriteReadable();
}
