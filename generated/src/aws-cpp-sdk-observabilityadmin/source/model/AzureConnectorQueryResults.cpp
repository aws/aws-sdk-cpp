/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureConnectorQueryResults.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureConnectorQueryResults::AzureConnectorQueryResults(JsonView jsonValue) { *this = jsonValue; }

AzureConnectorQueryResults& AzureConnectorQueryResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagementGroups")) {
    Aws::Utils::Array<JsonView> managementGroupsJsonList = jsonValue.GetArray("ManagementGroups");
    for (unsigned managementGroupsIndex = 0; managementGroupsIndex < managementGroupsJsonList.GetLength(); ++managementGroupsIndex) {
      m_managementGroups.push_back(managementGroupsJsonList[managementGroupsIndex].AsObject());
    }
    m_managementGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subscriptions")) {
    Aws::Utils::Array<JsonView> subscriptionsJsonList = jsonValue.GetArray("Subscriptions");
    for (unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex) {
      m_subscriptions.push_back(subscriptionsJsonList[subscriptionsIndex].AsObject());
    }
    m_subscriptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceTypes")) {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceIds")) {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("ResourceIds");
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsObject());
    }
    m_resourceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventHubs")) {
    Aws::Utils::Array<JsonView> eventHubsJsonList = jsonValue.GetArray("EventHubs");
    for (unsigned eventHubsIndex = 0; eventHubsIndex < eventHubsJsonList.GetLength(); ++eventHubsIndex) {
      m_eventHubs.push_back(eventHubsJsonList[eventHubsIndex].AsObject());
    }
    m_eventHubsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConnectorQueryResults::Jsonize() const {
  JsonValue payload;

  if (m_managementGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> managementGroupsJsonList(m_managementGroups.size());
    for (unsigned managementGroupsIndex = 0; managementGroupsIndex < managementGroupsJsonList.GetLength(); ++managementGroupsIndex) {
      managementGroupsJsonList[managementGroupsIndex].AsObject(m_managementGroups[managementGroupsIndex].Jsonize());
    }
    payload.WithArray("ManagementGroups", std::move(managementGroupsJsonList));
  }

  if (m_subscriptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
    for (unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex) {
      subscriptionsJsonList[subscriptionsIndex].AsObject(m_subscriptions[subscriptionsIndex].Jsonize());
    }
    payload.WithArray("Subscriptions", std::move(subscriptionsJsonList));
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
    }
    payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("Regions", std::move(regionsJsonList));
  }

  if (m_resourceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
    for (unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex) {
      resourceIdsJsonList[resourceIdsIndex].AsObject(m_resourceIds[resourceIdsIndex].Jsonize());
    }
    payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));
  }

  if (m_eventHubsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventHubsJsonList(m_eventHubs.size());
    for (unsigned eventHubsIndex = 0; eventHubsIndex < eventHubsJsonList.GetLength(); ++eventHubsIndex) {
      eventHubsJsonList[eventHubsIndex].AsObject(m_eventHubs[eventHubsIndex].Jsonize());
    }
    payload.WithArray("EventHubs", std::move(eventHubsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
