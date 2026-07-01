/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/ResourceSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

ResourceSet::ResourceSet(JsonView jsonValue) { *this = jsonValue; }

ResourceSet& ResourceSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allResourcesInRegion")) {
    m_allResourcesInRegion = jsonValue.GetObject("allResourcesInRegion");
    m_allResourcesInRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSet::Jsonize() const {
  JsonValue payload;

  if (m_allResourcesInRegionHasBeenSet) {
    payload.WithObject("allResourcesInRegion", m_allResourcesInRegion.Jsonize());
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
