/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureResourceIdentifierSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureResourceIdentifierSummary::AzureResourceIdentifierSummary(JsonView jsonValue) { *this = jsonValue; }

AzureResourceIdentifierSummary& AzureResourceIdentifierSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionId")) {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureResourceIdentifierSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("SubscriptionId", m_subscriptionId);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
