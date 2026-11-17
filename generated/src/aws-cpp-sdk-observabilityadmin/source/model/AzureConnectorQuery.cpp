/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureConnectorQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureConnectorQuery::AzureConnectorQuery(JsonView jsonValue) { *this = jsonValue; }

AzureConnectorQuery& AzureConnectorQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagementGroups")) {
    m_managementGroups = jsonValue.GetObject("ManagementGroups");
    m_managementGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subscriptions")) {
    m_subscriptions = jsonValue.GetObject("Subscriptions");
    m_subscriptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceTypes")) {
    m_resourceTypes = jsonValue.GetObject("ResourceTypes");
    m_resourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Regions")) {
    m_regions = jsonValue.GetObject("Regions");
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceIds")) {
    m_resourceIds = jsonValue.GetObject("ResourceIds");
    m_resourceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventHubs")) {
    m_eventHubs = jsonValue.GetObject("EventHubs");
    m_eventHubsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConnectorQuery::Jsonize() const {
  JsonValue payload;

  if (m_managementGroupsHasBeenSet) {
    payload.WithObject("ManagementGroups", m_managementGroups.Jsonize());
  }

  if (m_subscriptionsHasBeenSet) {
    payload.WithObject("Subscriptions", m_subscriptions.Jsonize());
  }

  if (m_resourceTypesHasBeenSet) {
    payload.WithObject("ResourceTypes", m_resourceTypes.Jsonize());
  }

  if (m_regionsHasBeenSet) {
    payload.WithObject("Regions", m_regions.Jsonize());
  }

  if (m_resourceIdsHasBeenSet) {
    payload.WithObject("ResourceIds", m_resourceIds.Jsonize());
  }

  if (m_eventHubsHasBeenSet) {
    payload.WithObject("EventHubs", m_eventHubs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
