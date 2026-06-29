/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/SupportedResourceType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

SupportedResourceType::SupportedResourceType(JsonView jsonValue) { *this = jsonValue; }

SupportedResourceType& SupportedResourceType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CFNResourceTypes")) {
    Aws::Utils::Array<JsonView> cFNResourceTypesJsonList = jsonValue.GetArray("CFNResourceTypes");
    for (unsigned cFNResourceTypesIndex = 0; cFNResourceTypesIndex < cFNResourceTypesJsonList.GetLength(); ++cFNResourceTypesIndex) {
      m_cFNResourceTypes.push_back(cFNResourceTypesJsonList[cFNResourceTypesIndex].AsString());
    }
    m_cFNResourceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportedResourceType::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_cFNResourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> cFNResourceTypesJsonList(m_cFNResourceTypes.size());
    for (unsigned cFNResourceTypesIndex = 0; cFNResourceTypesIndex < cFNResourceTypesJsonList.GetLength(); ++cFNResourceTypesIndex) {
      cFNResourceTypesJsonList[cFNResourceTypesIndex].AsString(m_cFNResourceTypes[cFNResourceTypesIndex]);
    }
    payload.WithArray("CFNResourceTypes", std::move(cFNResourceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
