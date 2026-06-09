/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceFunctionResourcesAddedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceFunctionResourcesAddedMetadata::ServiceFunctionResourcesAddedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceFunctionResourcesAddedMetadata& ServiceFunctionResourcesAddedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceFunctionId")) {
    m_serviceFunctionId = jsonValue.GetString("serviceFunctionId");
    m_serviceFunctionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionName")) {
    m_serviceFunctionName = jsonValue.GetString("serviceFunctionName");
    m_serviceFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcesAdded")) {
    Aws::Utils::Array<JsonView> resourcesAddedJsonList = jsonValue.GetArray("resourcesAdded");
    for (unsigned resourcesAddedIndex = 0; resourcesAddedIndex < resourcesAddedJsonList.GetLength(); ++resourcesAddedIndex) {
      m_resourcesAdded.push_back(resourcesAddedJsonList[resourcesAddedIndex].AsString());
    }
    m_resourcesAddedHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceFunctionResourcesAddedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceFunctionIdHasBeenSet) {
    payload.WithString("serviceFunctionId", m_serviceFunctionId);
  }

  if (m_serviceFunctionNameHasBeenSet) {
    payload.WithString("serviceFunctionName", m_serviceFunctionName);
  }

  if (m_resourcesAddedHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesAddedJsonList(m_resourcesAdded.size());
    for (unsigned resourcesAddedIndex = 0; resourcesAddedIndex < resourcesAddedJsonList.GetLength(); ++resourcesAddedIndex) {
      resourcesAddedJsonList[resourcesAddedIndex].AsString(m_resourcesAdded[resourcesAddedIndex]);
    }
    payload.WithArray("resourcesAdded", std::move(resourcesAddedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
