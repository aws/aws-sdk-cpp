/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ApprovalPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ApprovalPolicy::ApprovalPolicy(JsonView jsonValue) { *this = jsonValue; }

ApprovalPolicy& ApprovalPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PolicyId")) {
    m_policyId = jsonValue.GetString("PolicyId");
    m_policyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyArn")) {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(GovernedActionMapper::GetGovernedActionForName(actionsJsonList[actionsIndex].AsString()));
    }
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssetTypes")) {
    Aws::Utils::Array<JsonView> assetTypesJsonList = jsonValue.GetArray("AssetTypes");
    for (unsigned assetTypesIndex = 0; assetTypesIndex < assetTypesJsonList.GetLength(); ++assetTypesIndex) {
      m_assetTypes.push_back(AssetTypeMapper::GetAssetTypeForName(assetTypesJsonList[assetTypesIndex].AsString()));
    }
    m_assetTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicableTo")) {
    m_applicableTo = jsonValue.GetObject("ApplicableTo");
    m_applicableToHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApprovalGroups")) {
    Aws::Utils::Array<JsonView> approvalGroupsJsonList = jsonValue.GetArray("ApprovalGroups");
    for (unsigned approvalGroupsIndex = 0; approvalGroupsIndex < approvalGroupsJsonList.GetLength(); ++approvalGroupsIndex) {
      m_approvalGroups.push_back(approvalGroupsJsonList[approvalGroupsIndex].AsString());
    }
    m_approvalGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalPolicy::Jsonize() const {
  JsonValue payload;

  if (m_policyIdHasBeenSet) {
    payload.WithString("PolicyId", m_policyId);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("PolicyArn", m_policyArn);
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

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
