/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/InfrastructureAndCodeRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

InfrastructureAndCodeRecommendation::InfrastructureAndCodeRecommendation(JsonView jsonValue) { *this = jsonValue; }

InfrastructureAndCodeRecommendation& InfrastructureAndCodeRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("suggestedChanges")) {
    Aws::Utils::Array<JsonView> suggestedChangesJsonList = jsonValue.GetArray("suggestedChanges");
    for (unsigned suggestedChangesIndex = 0; suggestedChangesIndex < suggestedChangesJsonList.GetLength(); ++suggestedChangesIndex) {
      m_suggestedChanges.push_back(suggestedChangesJsonList[suggestedChangesIndex].AsString());
    }
    m_suggestedChangesHasBeenSet = true;
  }
  return *this;
}

JsonValue InfrastructureAndCodeRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_suggestedChangesHasBeenSet) {
    Aws::Utils::Array<JsonValue> suggestedChangesJsonList(m_suggestedChanges.size());
    for (unsigned suggestedChangesIndex = 0; suggestedChangesIndex < suggestedChangesJsonList.GetLength(); ++suggestedChangesIndex) {
      suggestedChangesJsonList[suggestedChangesIndex].AsString(m_suggestedChanges[suggestedChangesIndex]);
    }
    payload.WithArray("suggestedChanges", std::move(suggestedChangesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
