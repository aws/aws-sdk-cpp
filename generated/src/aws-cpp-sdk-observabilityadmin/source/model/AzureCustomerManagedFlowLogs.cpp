/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureCustomerManagedFlowLogs.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureCustomerManagedFlowLogs::AzureCustomerManagedFlowLogs(JsonView jsonValue) { *this = jsonValue; }

AzureCustomerManagedFlowLogs& AzureCustomerManagedFlowLogs::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StorageAccounts")) {
    Aws::Utils::Array<JsonView> storageAccountsJsonList = jsonValue.GetArray("StorageAccounts");
    for (unsigned storageAccountsIndex = 0; storageAccountsIndex < storageAccountsJsonList.GetLength(); ++storageAccountsIndex) {
      m_storageAccounts.push_back(storageAccountsJsonList[storageAccountsIndex].AsObject());
    }
    m_storageAccountsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureCustomerManagedFlowLogs::Jsonize() const {
  JsonValue payload;

  if (m_storageAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> storageAccountsJsonList(m_storageAccounts.size());
    for (unsigned storageAccountsIndex = 0; storageAccountsIndex < storageAccountsJsonList.GetLength(); ++storageAccountsIndex) {
      storageAccountsJsonList[storageAccountsIndex].AsObject(m_storageAccounts[storageAccountsIndex].Jsonize());
    }
    payload.WithArray("StorageAccounts", std::move(storageAccountsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
