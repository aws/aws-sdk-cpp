/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/NodeInterfaceMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

NodeInterfaceMapping::NodeInterfaceMapping(JsonView jsonValue) { *this = jsonValue; }

NodeInterfaceMapping& NodeInterfaceMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logicalInterfaceName")) {
    m_logicalInterfaceName = jsonValue.GetString("logicalInterfaceName");
    m_logicalInterfaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceMode")) {
    m_networkInterfaceMode = NetworkInterfaceModeMapper::GetNetworkInterfaceModeForName(jsonValue.GetString("networkInterfaceMode"));
    m_networkInterfaceModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("physicalInterfaceName")) {
    m_physicalInterfaceName = jsonValue.GetString("physicalInterfaceName");
    m_physicalInterfaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("physicalInterfaceIpAddresses")) {
    Aws::Utils::Array<JsonView> physicalInterfaceIpAddressesJsonList = jsonValue.GetArray("physicalInterfaceIpAddresses");
    for (unsigned physicalInterfaceIpAddressesIndex = 0;
         physicalInterfaceIpAddressesIndex < physicalInterfaceIpAddressesJsonList.GetLength(); ++physicalInterfaceIpAddressesIndex) {
      m_physicalInterfaceIpAddresses.push_back(physicalInterfaceIpAddressesJsonList[physicalInterfaceIpAddressesIndex].AsString());
    }
    m_physicalInterfaceIpAddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeInterfaceMapping::Jsonize() const {
  JsonValue payload;

  if (m_logicalInterfaceNameHasBeenSet) {
    payload.WithString("logicalInterfaceName", m_logicalInterfaceName);
  }

  if (m_networkInterfaceModeHasBeenSet) {
    payload.WithString("networkInterfaceMode", NetworkInterfaceModeMapper::GetNameForNetworkInterfaceMode(m_networkInterfaceMode));
  }

  if (m_physicalInterfaceNameHasBeenSet) {
    payload.WithString("physicalInterfaceName", m_physicalInterfaceName);
  }

  if (m_physicalInterfaceIpAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> physicalInterfaceIpAddressesJsonList(m_physicalInterfaceIpAddresses.size());
    for (unsigned physicalInterfaceIpAddressesIndex = 0;
         physicalInterfaceIpAddressesIndex < physicalInterfaceIpAddressesJsonList.GetLength(); ++physicalInterfaceIpAddressesIndex) {
      physicalInterfaceIpAddressesJsonList[physicalInterfaceIpAddressesIndex].AsString(
          m_physicalInterfaceIpAddresses[physicalInterfaceIpAddressesIndex]);
    }
    payload.WithArray("physicalInterfaceIpAddresses", std::move(physicalInterfaceIpAddressesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
