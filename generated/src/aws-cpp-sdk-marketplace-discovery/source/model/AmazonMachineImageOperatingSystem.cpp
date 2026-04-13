/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageOperatingSystem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AmazonMachineImageOperatingSystem::AmazonMachineImageOperatingSystem(JsonView jsonValue) { *this = jsonValue; }

AmazonMachineImageOperatingSystem& AmazonMachineImageOperatingSystem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operatingSystemFamilyName")) {
    m_operatingSystemFamilyName = jsonValue.GetString("operatingSystemFamilyName");
    m_operatingSystemFamilyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystemName")) {
    m_operatingSystemName = jsonValue.GetString("operatingSystemName");
    m_operatingSystemNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystemVersion")) {
    m_operatingSystemVersion = jsonValue.GetString("operatingSystemVersion");
    m_operatingSystemVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonMachineImageOperatingSystem::Jsonize() const {
  JsonValue payload;

  if (m_operatingSystemFamilyNameHasBeenSet) {
    payload.WithString("operatingSystemFamilyName", m_operatingSystemFamilyName);
  }

  if (m_operatingSystemNameHasBeenSet) {
    payload.WithString("operatingSystemName", m_operatingSystemName);
  }

  if (m_operatingSystemVersionHasBeenSet) {
    payload.WithString("operatingSystemVersion", m_operatingSystemVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
