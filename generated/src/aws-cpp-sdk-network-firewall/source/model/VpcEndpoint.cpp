/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/VpcEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

VpcEndpoint::VpcEndpoint(JsonView jsonValue) { *this = jsonValue; }

VpcEndpoint& VpcEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcId")) {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubnetMappings")) {
    Aws::Utils::Array<JsonView> subnetMappingsJsonList = jsonValue.GetArray("SubnetMappings");
    for (unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex) {
      m_subnetMappings.push_back(subnetMappingsJsonList[subnetMappingsIndex].AsObject());
    }
    m_subnetMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_vpcIdHasBeenSet) {
    payload.WithString("VpcId", m_vpcId);
  }

  if (m_subnetMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetMappingsJsonList(m_subnetMappings.size());
    for (unsigned subnetMappingsIndex = 0; subnetMappingsIndex < subnetMappingsJsonList.GetLength(); ++subnetMappingsIndex) {
      subnetMappingsJsonList[subnetMappingsIndex].AsObject(m_subnetMappings[subnetMappingsIndex].Jsonize());
    }
    payload.WithArray("SubnetMappings", std::move(subnetMappingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
