/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/AttachmentRoutingPolicyAssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

AttachmentRoutingPolicyAssociationSummary::AttachmentRoutingPolicyAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

AttachmentRoutingPolicyAssociationSummary& AttachmentRoutingPolicyAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttachmentId")) {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PendingRoutingPolicies")) {
    Aws::Utils::Array<JsonView> pendingRoutingPoliciesJsonList = jsonValue.GetArray("PendingRoutingPolicies");
    for (unsigned pendingRoutingPoliciesIndex = 0; pendingRoutingPoliciesIndex < pendingRoutingPoliciesJsonList.GetLength();
         ++pendingRoutingPoliciesIndex) {
      m_pendingRoutingPolicies.push_back(pendingRoutingPoliciesJsonList[pendingRoutingPoliciesIndex].AsString());
    }
    m_pendingRoutingPoliciesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedRoutingPolicies")) {
    Aws::Utils::Array<JsonView> associatedRoutingPoliciesJsonList = jsonValue.GetArray("AssociatedRoutingPolicies");
    for (unsigned associatedRoutingPoliciesIndex = 0; associatedRoutingPoliciesIndex < associatedRoutingPoliciesJsonList.GetLength();
         ++associatedRoutingPoliciesIndex) {
      m_associatedRoutingPolicies.push_back(associatedRoutingPoliciesJsonList[associatedRoutingPoliciesIndex].AsString());
    }
    m_associatedRoutingPoliciesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingPolicyLabel")) {
    m_routingPolicyLabel = jsonValue.GetString("RoutingPolicyLabel");
    m_routingPolicyLabelHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentRoutingPolicyAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("AttachmentId", m_attachmentId);
  }

  if (m_pendingRoutingPoliciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> pendingRoutingPoliciesJsonList(m_pendingRoutingPolicies.size());
    for (unsigned pendingRoutingPoliciesIndex = 0; pendingRoutingPoliciesIndex < pendingRoutingPoliciesJsonList.GetLength();
         ++pendingRoutingPoliciesIndex) {
      pendingRoutingPoliciesJsonList[pendingRoutingPoliciesIndex].AsString(m_pendingRoutingPolicies[pendingRoutingPoliciesIndex]);
    }
    payload.WithArray("PendingRoutingPolicies", std::move(pendingRoutingPoliciesJsonList));
  }

  if (m_associatedRoutingPoliciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedRoutingPoliciesJsonList(m_associatedRoutingPolicies.size());
    for (unsigned associatedRoutingPoliciesIndex = 0; associatedRoutingPoliciesIndex < associatedRoutingPoliciesJsonList.GetLength();
         ++associatedRoutingPoliciesIndex) {
      associatedRoutingPoliciesJsonList[associatedRoutingPoliciesIndex].AsString(
          m_associatedRoutingPolicies[associatedRoutingPoliciesIndex]);
    }
    payload.WithArray("AssociatedRoutingPolicies", std::move(associatedRoutingPoliciesJsonList));
  }

  if (m_routingPolicyLabelHasBeenSet) {
    payload.WithString("RoutingPolicyLabel", m_routingPolicyLabel);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
