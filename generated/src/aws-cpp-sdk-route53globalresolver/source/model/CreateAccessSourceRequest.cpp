/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/CreateAccessSourceRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAccessSourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cidrHasBeenSet) {
    payload.WithString("cidr", m_cidr);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dnsViewIdHasBeenSet) {
    payload.WithString("dnsViewId", m_dnsViewId);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", DnsProtocolMapper::GetNameForDnsProtocol(m_protocol));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
