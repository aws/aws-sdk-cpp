/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationInsightsFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

ListNetworkMigrationInsightsFilters::ListNetworkMigrationInsightsFilters(JsonView jsonValue) { *this = jsonValue; }

ListNetworkMigrationInsightsFilters& ListNetworkMigrationInsightsFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("insightTypes")) {
    Aws::Utils::Array<JsonView> insightTypesJsonList = jsonValue.GetArray("insightTypes");
    for (unsigned insightTypesIndex = 0; insightTypesIndex < insightTypesJsonList.GetLength(); ++insightTypesIndex) {
      m_insightTypes.push_back(InsightTypeMapper::GetInsightTypeForName(insightTypesJsonList[insightTypesIndex].AsString()));
    }
    m_insightTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListNetworkMigrationInsightsFilters::Jsonize() const {
  JsonValue payload;

  if (m_insightTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> insightTypesJsonList(m_insightTypes.size());
    for (unsigned insightTypesIndex = 0; insightTypesIndex < insightTypesJsonList.GetLength(); ++insightTypesIndex) {
      insightTypesJsonList[insightTypesIndex].AsString(InsightTypeMapper::GetNameForInsightType(m_insightTypes[insightTypesIndex]));
    }
    payload.WithArray("insightTypes", std::move(insightTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
