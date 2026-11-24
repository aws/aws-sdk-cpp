/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/IgwFirewallConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

IgwFirewallConfig::IgwFirewallConfig(JsonView jsonValue) { *this = jsonValue; }

IgwFirewallConfig& IgwFirewallConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defaultSubnetConnectivity")) {
    m_defaultSubnetConnectivity =
        DefaultSubnetConnectivityMapper::GetDefaultSubnetConnectivityForName(jsonValue.GetString("defaultSubnetConnectivity"));
    m_defaultSubnetConnectivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetConnectivityOverrides")) {
    Aws::Utils::Array<JsonView> subnetConnectivityOverridesJsonList = jsonValue.GetArray("subnetConnectivityOverrides");
    for (unsigned subnetConnectivityOverridesIndex = 0; subnetConnectivityOverridesIndex < subnetConnectivityOverridesJsonList.GetLength();
         ++subnetConnectivityOverridesIndex) {
      m_subnetConnectivityOverrides.push_back(subnetConnectivityOverridesJsonList[subnetConnectivityOverridesIndex].AsObject());
    }
    m_subnetConnectivityOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue IgwFirewallConfig::Jsonize() const {
  JsonValue payload;

  if (m_defaultSubnetConnectivityHasBeenSet) {
    payload.WithString("defaultSubnetConnectivity",
                       DefaultSubnetConnectivityMapper::GetNameForDefaultSubnetConnectivity(m_defaultSubnetConnectivity));
  }

  if (m_subnetConnectivityOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetConnectivityOverridesJsonList(m_subnetConnectivityOverrides.size());
    for (unsigned subnetConnectivityOverridesIndex = 0; subnetConnectivityOverridesIndex < subnetConnectivityOverridesJsonList.GetLength();
         ++subnetConnectivityOverridesIndex) {
      subnetConnectivityOverridesJsonList[subnetConnectivityOverridesIndex].AsObject(
          m_subnetConnectivityOverrides[subnetConnectivityOverridesIndex].Jsonize());
    }
    payload.WithArray("subnetConnectivityOverrides", std::move(subnetConnectivityOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
