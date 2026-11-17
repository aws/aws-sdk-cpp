/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureScope::AzureScope(JsonView jsonValue) { *this = jsonValue; }

AzureScope& AzureScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Subscriptions")) {
    m_subscriptions = jsonValue.GetObject("Subscriptions");
    m_subscriptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceTypes")) {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagFilters")) {
    Aws::Utils::Array<JsonView> tagFiltersJsonList = jsonValue.GetArray("TagFilters");
    for (unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex) {
      m_tagFilters.push_back(tagFiltersJsonList[tagFiltersIndex].AsObject());
    }
    m_tagFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureScope::Jsonize() const {
  JsonValue payload;

  if (m_subscriptionsHasBeenSet) {
    payload.WithObject("Subscriptions", m_subscriptions.Jsonize());
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
    }
    payload.WithArray("Regions", std::move(regionsJsonList));
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
    }
    payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));
  }

  if (m_tagFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
    for (unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex) {
      tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
    }
    payload.WithArray("TagFilters", std::move(tagFiltersJsonList));
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
    }
    payload.WithArray("Resources", std::move(resourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
