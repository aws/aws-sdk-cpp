/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureInfrastructure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureInfrastructure::AzureInfrastructure(JsonView jsonValue) { *this = jsonValue; }

AzureInfrastructure& AzureInfrastructure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SubscriptionId")) {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventHubs")) {
    Aws::Utils::Array<JsonView> eventHubsJsonList = jsonValue.GetArray("EventHubs");
    for (unsigned eventHubsIndex = 0; eventHubsIndex < eventHubsJsonList.GetLength(); ++eventHubsIndex) {
      m_eventHubs.push_back(eventHubsJsonList[eventHubsIndex].AsObject());
    }
    m_eventHubsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowLogs")) {
    m_flowLogs = jsonValue.GetObject("FlowLogs");
    m_flowLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureInfrastructure::Jsonize() const {
  JsonValue payload;

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("SubscriptionId", m_subscriptionId);
  }

  if (m_eventHubsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventHubsJsonList(m_eventHubs.size());
    for (unsigned eventHubsIndex = 0; eventHubsIndex < eventHubsJsonList.GetLength(); ++eventHubsIndex) {
      eventHubsJsonList[eventHubsIndex].AsObject(m_eventHubs[eventHubsIndex].Jsonize());
    }
    payload.WithArray("EventHubs", std::move(eventHubsJsonList));
  }

  if (m_flowLogsHasBeenSet) {
    payload.WithObject("FlowLogs", m_flowLogs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
