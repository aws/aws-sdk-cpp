/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/UpdateIpAddressEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

UpdateIpAddressEntry::UpdateIpAddressEntry(JsonView jsonValue) { *this = jsonValue; }

UpdateIpAddressEntry& UpdateIpAddressEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operation")) {
    m_operation = UpdateIpAddressOperationMapper::GetUpdateIpAddressOperationForName(jsonValue.GetString("operation"));
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Address")) {
    m_ipv4Address = jsonValue.GetString("ipv4Address");
    m_ipv4AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv6Address")) {
    m_ipv6Address = jsonValue.GetString("ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsLabel")) {
    m_dnsLabel = jsonValue.GetString("dnsLabel");
    m_dnsLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionScope")) {
    m_regionScope = RegionScopeTypeMapper::GetRegionScopeTypeForName(jsonValue.GetString("regionScope"));
    m_regionScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateIpAddressEntry::Jsonize() const {
  JsonValue payload;

  if (m_operationHasBeenSet) {
    payload.WithString("operation", UpdateIpAddressOperationMapper::GetNameForUpdateIpAddressOperation(m_operation));
  }

  if (m_ipv4AddressHasBeenSet) {
    payload.WithString("ipv4Address", m_ipv4Address);
  }

  if (m_ipv6AddressHasBeenSet) {
    payload.WithString("ipv6Address", m_ipv6Address);
  }

  if (m_dnsLabelHasBeenSet) {
    payload.WithString("dnsLabel", m_dnsLabel);
  }

  if (m_regionScopeHasBeenSet) {
    payload.WithString("regionScope", RegionScopeTypeMapper::GetNameForRegionScopeType(m_regionScope));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
