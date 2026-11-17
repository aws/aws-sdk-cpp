/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureFlowLogStorageAccountScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureFlowLogStorageAccountScope::AzureFlowLogStorageAccountScope(JsonView jsonValue) { *this = jsonValue; }

AzureFlowLogStorageAccountScope& AzureFlowLogStorageAccountScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageAccountIds")) {
    Aws::Utils::Array<JsonView> storageAccountIdsJsonList = jsonValue.GetArray("StorageAccountIds");
    for (unsigned storageAccountIdsIndex = 0; storageAccountIdsIndex < storageAccountIdsJsonList.GetLength(); ++storageAccountIdsIndex) {
      m_storageAccountIds.push_back(storageAccountIdsJsonList[storageAccountIdsIndex].AsString());
    }
    m_storageAccountIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureFlowLogStorageAccountScope::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_storageAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> storageAccountIdsJsonList(m_storageAccountIds.size());
    for (unsigned storageAccountIdsIndex = 0; storageAccountIdsIndex < storageAccountIdsJsonList.GetLength(); ++storageAccountIdsIndex) {
      storageAccountIdsJsonList[storageAccountIdsIndex].AsString(m_storageAccountIds[storageAccountIdsIndex]);
    }
    payload.WithArray("StorageAccountIds", std::move(storageAccountIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
