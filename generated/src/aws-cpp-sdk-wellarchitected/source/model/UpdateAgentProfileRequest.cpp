/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/UpdateAgentProfileRequest.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentProfileRequest::SerializePayload() const {
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

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("executionRoleArn", m_executionRoleArn);
  }

  if (m_aggregationConfigurationHasBeenSet) {
    Aws::Utils::Array<JsonValue> aggregationConfigurationJsonList(m_aggregationConfiguration.size());
    for (unsigned aggregationConfigurationIndex = 0; aggregationConfigurationIndex < aggregationConfigurationJsonList.GetLength();
         ++aggregationConfigurationIndex) {
      aggregationConfigurationJsonList[aggregationConfigurationIndex].AsObject(
          m_aggregationConfiguration[aggregationConfigurationIndex].Jsonize());
    }
    payload.WithArray("aggregationConfiguration", std::move(aggregationConfigurationJsonList));
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

  return payload.View().WriteReadable();
}
