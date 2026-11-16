/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/UpdateAgentOrganizationalProfileRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentOrganizationalProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_businessOverviewHasBeenSet) {
    payload.WithString("businessOverview", m_businessOverview);
  }

  if (m_pillarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
    for (unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex) {
      pillarsJsonList[pillarsIndex].AsString(PillarMapper::GetNameForPillar(m_pillars[pillarsIndex]));
    }
    payload.WithArray("pillars", std::move(pillarsJsonList));
  }

  if (m_deletionProtectionHasBeenSet) {
    payload.WithBool("deletionProtection", m_deletionProtection);
  }

  if (m_organizationalAggregationConfigurationHasBeenSet) {
    payload.WithObject("organizationalAggregationConfiguration", m_organizationalAggregationConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

UpdateAgentOrganizationalProfileRequest::EndpointParameters UpdateAgentOrganizationalProfileRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("SubServiceType"), "AGENT", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
