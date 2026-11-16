/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PutAgentPreferencesRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAgentPreferencesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_preferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> preferencesJsonList(m_preferences.size());
    for (unsigned preferencesIndex = 0; preferencesIndex < preferencesJsonList.GetLength(); ++preferencesIndex) {
      preferencesJsonList[preferencesIndex].AsObject(m_preferences[preferencesIndex].Jsonize());
    }
    payload.WithArray("preferences", std::move(preferencesJsonList));
  }

  return payload.View().WriteReadable();
}

PutAgentPreferencesRequest::EndpointParameters PutAgentPreferencesRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
