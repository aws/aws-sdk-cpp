/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateApprovalPolicyRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApprovalPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyIdHasBeenSet) {
    payload.WithString("PolicyId", m_policyId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsString(GovernedActionMapper::GetNameForGovernedAction(m_actions[actionsIndex]));
    }
    payload.WithArray("Actions", std::move(actionsJsonList));
  }

  if (m_assetTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetTypesJsonList(m_assetTypes.size());
    for (unsigned assetTypesIndex = 0; assetTypesIndex < assetTypesJsonList.GetLength(); ++assetTypesIndex) {
      assetTypesJsonList[assetTypesIndex].AsString(AssetTypeMapper::GetNameForAssetType(m_assetTypes[assetTypesIndex]));
    }
    payload.WithArray("AssetTypes", std::move(assetTypesJsonList));
  }

  if (m_applicableToHasBeenSet) {
    payload.WithObject("ApplicableTo", m_applicableTo.Jsonize());
  }

  if (m_approvalGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> approvalGroupsJsonList(m_approvalGroups.size());
    for (unsigned approvalGroupsIndex = 0; approvalGroupsIndex < approvalGroupsJsonList.GetLength(); ++approvalGroupsIndex) {
      approvalGroupsJsonList[approvalGroupsIndex].AsString(m_approvalGroups[approvalGroupsIndex]);
    }
    payload.WithArray("ApprovalGroups", std::move(approvalGroupsJsonList));
  }

  return payload.View().WriteReadable();
}
