/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/GlobalResolversItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

GlobalResolversItem::GlobalResolversItem(JsonView jsonValue) { *this = jsonValue; }

GlobalResolversItem& GlobalResolversItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("dnsName")) {
    m_dnsName = jsonValue.GetString("dnsName");
    m_dnsNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observabilityRegion")) {
    m_observabilityRegion = jsonValue.GetString("observabilityRegion");
    m_observabilityRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
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
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Addresses")) {
    Aws::Utils::Array<JsonView> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for (unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex) {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalResolversItem::Jsonize() const {
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

  if (m_dnsNameHasBeenSet) {
    payload.WithString("dnsName", m_dnsName);
  }

  if (m_observabilityRegionHasBeenSet) {
    payload.WithString("observabilityRegion", m_observabilityRegion);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CRResourceStatusMapper::GetNameForCRResourceStatus(m_status));
  }

  if (m_ipv4AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipv4AddressesJsonList(m_ipv4Addresses.size());
    for (unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex) {
      ipv4AddressesJsonList[ipv4AddressesIndex].AsString(m_ipv4Addresses[ipv4AddressesIndex]);
    }
    payload.WithArray("ipv4Addresses", std::move(ipv4AddressesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
