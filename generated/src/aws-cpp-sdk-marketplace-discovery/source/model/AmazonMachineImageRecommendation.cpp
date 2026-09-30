/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AmazonMachineImageRecommendation::AmazonMachineImageRecommendation(JsonView jsonValue) { *this = jsonValue; }

AmazonMachineImageRecommendation& AmazonMachineImageRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceType")) {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroups")) {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonMachineImageRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("instanceType", m_instanceType);
  }

  if (m_securityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
    }
    payload.WithArray("securityGroups", std::move(securityGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
