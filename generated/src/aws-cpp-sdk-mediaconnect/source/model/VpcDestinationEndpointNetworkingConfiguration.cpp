/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/VpcDestinationEndpointNetworkingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

VpcDestinationEndpointNetworkingConfiguration::VpcDestinationEndpointNetworkingConfiguration(JsonView jsonValue) { *this = jsonValue; }

VpcDestinationEndpointNetworkingConfiguration& VpcDestinationEndpointNetworkingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetId")) {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcDestinationEndpointNetworkingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_subnetIdHasBeenSet) {
    payload.WithString("subnetId", m_subnetId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
