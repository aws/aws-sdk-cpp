/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServiceResourcesDisassociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServiceResourcesDisassociatedMetadata::ServiceResourcesDisassociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServiceResourcesDisassociatedMetadata& ServiceResourcesDisassociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceCount")) {
    m_resourceCount = jsonValue.GetInteger("resourceCount");
    m_resourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTypes")) {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("resourceTypes");
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceResourcesDisassociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_resourceCountHasBeenSet) {
    payload.WithInteger("resourceCount", m_resourceCount);
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
    }
    payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
