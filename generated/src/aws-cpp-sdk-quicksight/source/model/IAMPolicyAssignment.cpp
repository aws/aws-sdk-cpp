/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/IAMPolicyAssignment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

IAMPolicyAssignment::IAMPolicyAssignment(JsonView jsonValue) { *this = jsonValue; }

IAMPolicyAssignment& IAMPolicyAssignment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsAccountId")) {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignmentId")) {
    m_assignmentId = jsonValue.GetString("AssignmentId");
    m_assignmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignmentName")) {
    m_assignmentName = jsonValue.GetString("AssignmentName");
    m_assignmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyArn")) {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Identities")) {
    Aws::Map<Aws::String, JsonView> identitiesJsonMap = jsonValue.GetObject("Identities").GetAllObjects();
    for (auto& identitiesItem : identitiesJsonMap) {
      Aws::Utils::Array<JsonView> identityNameList2JsonList = identitiesItem.second.AsArray();
      Aws::Vector<Aws::String> identityNameList2List;
      identityNameList2List.reserve((size_t)identityNameList2JsonList.GetLength());
      for (unsigned identityNameList2Index = 0; identityNameList2Index < identityNameList2JsonList.GetLength(); ++identityNameList2Index) {
        identityNameList2List.push_back(identityNameList2JsonList[identityNameList2Index].AsString());
      }
      m_identities[identitiesItem.first] = std::move(identityNameList2List);
    }
    m_identitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignmentStatus")) {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));
    m_assignmentStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue IAMPolicyAssignment::Jsonize() const {
  JsonValue payload;

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("AwsAccountId", m_awsAccountId);
  }

  if (m_assignmentIdHasBeenSet) {
    payload.WithString("AssignmentId", m_assignmentId);
  }

  if (m_assignmentNameHasBeenSet) {
    payload.WithString("AssignmentName", m_assignmentName);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("PolicyArn", m_policyArn);
  }

  if (m_identitiesHasBeenSet) {
    JsonValue identitiesJsonMap;
    for (auto& identitiesItem : m_identities) {
      Aws::Utils::Array<JsonValue> identityNameListJsonList(identitiesItem.second.size());
      for (unsigned identityNameListIndex = 0; identityNameListIndex < identityNameListJsonList.GetLength(); ++identityNameListIndex) {
        identityNameListJsonList[identityNameListIndex].AsString(identitiesItem.second[identityNameListIndex]);
      }
      identitiesJsonMap.WithArray(identitiesItem.first, std::move(identityNameListJsonList));
    }
    payload.WithObject("Identities", std::move(identitiesJsonMap));
  }

  if (m_assignmentStatusHasBeenSet) {
    payload.WithString("AssignmentStatus", AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
