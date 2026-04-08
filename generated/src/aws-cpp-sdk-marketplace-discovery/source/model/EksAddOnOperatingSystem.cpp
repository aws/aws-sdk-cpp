/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/EksAddOnOperatingSystem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

EksAddOnOperatingSystem::EksAddOnOperatingSystem(JsonView jsonValue) { *this = jsonValue; }

EksAddOnOperatingSystem& EksAddOnOperatingSystem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operatingSystemFamilyName")) {
    m_operatingSystemFamilyName = jsonValue.GetString("operatingSystemFamilyName");
    m_operatingSystemFamilyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystemName")) {
    m_operatingSystemName = jsonValue.GetString("operatingSystemName");
    m_operatingSystemNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EksAddOnOperatingSystem::Jsonize() const {
  JsonValue payload;

  if (m_operatingSystemFamilyNameHasBeenSet) {
    payload.WithString("operatingSystemFamilyName", m_operatingSystemFamilyName);
  }

  if (m_operatingSystemNameHasBeenSet) {
    payload.WithString("operatingSystemName", m_operatingSystemName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
