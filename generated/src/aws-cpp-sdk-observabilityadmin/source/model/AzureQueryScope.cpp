/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureQueryScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureQueryScope::AzureQueryScope(JsonView jsonValue) { *this = jsonValue; }

AzureQueryScope& AzureQueryScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagementGroupId")) {
    m_managementGroupId = jsonValue.GetString("ManagementGroupId");
    m_managementGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionIds")) {
    Aws::Utils::Array<JsonView> subscriptionIdsJsonList = jsonValue.GetArray("SubscriptionIds");
    for (unsigned subscriptionIdsIndex = 0; subscriptionIdsIndex < subscriptionIdsJsonList.GetLength(); ++subscriptionIdsIndex) {
      m_subscriptionIds.push_back(subscriptionIdsJsonList[subscriptionIdsIndex].AsString());
    }
    m_subscriptionIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureQueryScope::Jsonize() const {
  JsonValue payload;

  if (m_managementGroupIdHasBeenSet) {
    payload.WithString("ManagementGroupId", m_managementGroupId);
  }

  if (m_subscriptionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscriptionIdsJsonList(m_subscriptionIds.size());
    for (unsigned subscriptionIdsIndex = 0; subscriptionIdsIndex < subscriptionIdsJsonList.GetLength(); ++subscriptionIdsIndex) {
      subscriptionIdsJsonList[subscriptionIdsIndex].AsString(m_subscriptionIds[subscriptionIdsIndex]);
    }
    payload.WithArray("SubscriptionIds", std::move(subscriptionIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
