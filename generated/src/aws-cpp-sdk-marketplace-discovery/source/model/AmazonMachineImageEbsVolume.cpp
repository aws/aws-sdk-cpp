/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageEbsVolume.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AmazonMachineImageEbsVolume::AmazonMachineImageEbsVolume(JsonView jsonValue) { *this = jsonValue; }

AmazonMachineImageEbsVolume& AmazonMachineImageEbsVolume::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("volumeTypes")) {
    Aws::Utils::Array<JsonView> volumeTypesJsonList = jsonValue.GetArray("volumeTypes");
    for (unsigned volumeTypesIndex = 0; volumeTypesIndex < volumeTypesJsonList.GetLength(); ++volumeTypesIndex) {
      m_volumeTypes.push_back(volumeTypesJsonList[volumeTypesIndex].AsString());
    }
    m_volumeTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iops")) {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonMachineImageEbsVolume::Jsonize() const {
  JsonValue payload;

  if (m_volumeTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> volumeTypesJsonList(m_volumeTypes.size());
    for (unsigned volumeTypesIndex = 0; volumeTypesIndex < volumeTypesJsonList.GetLength(); ++volumeTypesIndex) {
      volumeTypesJsonList[volumeTypesIndex].AsString(m_volumeTypes[volumeTypesIndex]);
    }
    payload.WithArray("volumeTypes", std::move(volumeTypesJsonList));
  }

  if (m_iopsHasBeenSet) {
    payload.WithInteger("iops", m_iops);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
