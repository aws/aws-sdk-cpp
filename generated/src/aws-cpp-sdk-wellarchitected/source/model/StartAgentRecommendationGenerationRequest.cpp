/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/StartAgentRecommendationGenerationRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAgentRecommendationGenerationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(RecommendationTypeMapper::GetNameForRecommendationType(m_types[typesIndex]));
    }
    payload.WithArray("types", std::move(typesJsonList));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_additionalContextHasBeenSet) {
    if (!m_additionalContext.View().IsNull()) {
      payload.WithObject("additionalContext", JsonValue(m_additionalContext.View()));
    }
  }

  if (m_scopeHasBeenSet) {
    payload.WithObject("scope", m_scope.Jsonize());
  }

  return payload.View().WriteReadable();
}
