/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CrossRegionS3RestoreSourcesAccess.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

CrossRegionS3RestoreSourcesAccess::CrossRegionS3RestoreSourcesAccess(JsonView jsonValue) { *this = jsonValue; }

CrossRegionS3RestoreSourcesAccess& CrossRegionS3RestoreSourcesAccess::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Addresses")) {
    Aws::Utils::Array<JsonView> ipv4AddressesJsonList = jsonValue.GetArray("ipv4Addresses");
    for (unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex) {
      m_ipv4Addresses.push_back(ipv4AddressesJsonList[ipv4AddressesIndex].AsString());
    }
    m_ipv4AddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ManagedResourceStatusMapper::GetManagedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossRegionS3RestoreSourcesAccess::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_ipv4AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipv4AddressesJsonList(m_ipv4Addresses.size());
    for (unsigned ipv4AddressesIndex = 0; ipv4AddressesIndex < ipv4AddressesJsonList.GetLength(); ++ipv4AddressesIndex) {
      ipv4AddressesJsonList[ipv4AddressesIndex].AsString(m_ipv4Addresses[ipv4AddressesIndex]);
    }
    payload.WithArray("ipv4Addresses", std::move(ipv4AddressesJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ManagedResourceStatusMapper::GetNameForManagedResourceStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
