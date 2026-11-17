/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureResourceIdsQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureResourceIdsQuery::AzureResourceIdsQuery(JsonView jsonValue) { *this = jsonValue; }

AzureResourceIdsQuery& AzureResourceIdsQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagFilters")) {
    Aws::Utils::Array<JsonView> tagFiltersJsonList = jsonValue.GetArray("TagFilters");
    for (unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex) {
      m_tagFilters.push_back(tagFiltersJsonList[tagFiltersIndex].AsObject());
    }
    m_tagFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureResourceIdsQuery::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_tagFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagFiltersJsonList(m_tagFilters.size());
    for (unsigned tagFiltersIndex = 0; tagFiltersIndex < tagFiltersJsonList.GetLength(); ++tagFiltersIndex) {
      tagFiltersJsonList[tagFiltersIndex].AsObject(m_tagFilters[tagFiltersIndex].Jsonize());
    }
    payload.WithArray("TagFilters", std::move(tagFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
