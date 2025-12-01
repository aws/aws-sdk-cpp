/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/AccessSourcesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

AccessSourcesItem::AccessSourcesItem(JsonView jsonValue) { *this = jsonValue; }

AccessSourcesItem& AccessSourcesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cidr")) {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddressType")) {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsViewId")) {
    m_dnsViewId = jsonValue.GetString("dnsViewId");
    m_dnsViewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = DnsProtocolMapper::GetDnsProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessSourcesItem::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_cidrHasBeenSet) {
    payload.WithString("cidr", m_cidr);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
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

  if (m_statusHasBeenSet) {
    payload.WithString("status", CRResourceStatusMapper::GetNameForCRResourceStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
