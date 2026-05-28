/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceFunctionResourcesRemovedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceFunctionResourcesRemovedMetadata::ServiceFunctionResourcesRemovedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceFunctionResourcesRemovedMetadata& ServiceFunctionResourcesRemovedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceFunctionId")) {
    m_serviceFunctionId = jsonValue.GetString("serviceFunctionId");
    m_serviceFunctionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctionName")) {
    m_serviceFunctionName = jsonValue.GetString("serviceFunctionName");
    m_serviceFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcesRemoved")) {
    Aws::Utils::Array<JsonView> resourcesRemovedJsonList = jsonValue.GetArray("resourcesRemoved");
    for (unsigned resourcesRemovedIndex = 0; resourcesRemovedIndex < resourcesRemovedJsonList.GetLength(); ++resourcesRemovedIndex) {
      m_resourcesRemoved.push_back(resourcesRemovedJsonList[resourcesRemovedIndex].AsString());
    }
    m_resourcesRemovedHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceFunctionResourcesRemovedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceFunctionIdHasBeenSet) {
    payload.WithString("serviceFunctionId", m_serviceFunctionId);
  }

  if (m_serviceFunctionNameHasBeenSet) {
    payload.WithString("serviceFunctionName", m_serviceFunctionName);
  }

  if (m_resourcesRemovedHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesRemovedJsonList(m_resourcesRemoved.size());
    for (unsigned resourcesRemovedIndex = 0; resourcesRemovedIndex < resourcesRemovedJsonList.GetLength(); ++resourcesRemovedIndex) {
      resourcesRemovedJsonList[resourcesRemovedIndex].AsString(m_resourcesRemoved[resourcesRemovedIndex]);
    }
    payload.WithArray("resourcesRemoved", std::move(resourcesRemovedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
