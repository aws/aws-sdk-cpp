/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageSecurityGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AmazonMachineImageSecurityGroup::AmazonMachineImageSecurityGroup(JsonView jsonValue) { *this = jsonValue; }

AmazonMachineImageSecurityGroup& AmazonMachineImageSecurityGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = jsonValue.GetString("protocol");
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fromPort")) {
    m_fromPort = jsonValue.GetInteger("fromPort");
    m_fromPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toPort")) {
    m_toPort = jsonValue.GetInteger("toPort");
    m_toPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cidrIpAddresses")) {
    Aws::Utils::Array<JsonView> cidrIpAddressesJsonList = jsonValue.GetArray("cidrIpAddresses");
    for (unsigned cidrIpAddressesIndex = 0; cidrIpAddressesIndex < cidrIpAddressesJsonList.GetLength(); ++cidrIpAddressesIndex) {
      m_cidrIpAddresses.push_back(cidrIpAddressesJsonList[cidrIpAddressesIndex].AsString());
    }
    m_cidrIpAddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonMachineImageSecurityGroup::Jsonize() const {
  JsonValue payload;

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", m_protocol);
  }

  if (m_fromPortHasBeenSet) {
    payload.WithInteger("fromPort", m_fromPort);
  }

  if (m_toPortHasBeenSet) {
    payload.WithInteger("toPort", m_toPort);
  }

  if (m_cidrIpAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> cidrIpAddressesJsonList(m_cidrIpAddresses.size());
    for (unsigned cidrIpAddressesIndex = 0; cidrIpAddressesIndex < cidrIpAddressesJsonList.GetLength(); ++cidrIpAddressesIndex) {
      cidrIpAddressesJsonList[cidrIpAddressesIndex].AsString(m_cidrIpAddresses[cidrIpAddressesIndex]);
    }
    payload.WithArray("cidrIpAddresses", std::move(cidrIpAddressesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
