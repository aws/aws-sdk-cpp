/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureSubscriptionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureSubscriptionSummary::AzureSubscriptionSummary(JsonView jsonValue) { *this = jsonValue; }

AzureSubscriptionSummary& AzureSubscriptionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SubscriptionId")) {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagementGroupId")) {
    m_managementGroupId = jsonValue.GetString("ManagementGroupId");
    m_managementGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureSubscriptionSummary::Jsonize() const {
  JsonValue payload;

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("SubscriptionId", m_subscriptionId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", m_state);
  }

  if (m_managementGroupIdHasBeenSet) {
    payload.WithString("ManagementGroupId", m_managementGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
