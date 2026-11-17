/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureResourceIdScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureResourceIdScope::AzureResourceIdScope(JsonView jsonValue) { *this = jsonValue; }

AzureResourceIdScope& AzureResourceIdScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceIds")) {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("ResourceIds");
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsString());
    }
    m_resourceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureResourceIdScope::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_resourceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
    }
    payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
