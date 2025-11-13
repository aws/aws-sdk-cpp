/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/PartnerAppConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

PartnerAppConfig::PartnerAppConfig(JsonView jsonValue) { *this = jsonValue; }

PartnerAppConfig& PartnerAppConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdminUsers")) {
    Aws::Utils::Array<JsonView> adminUsersJsonList = jsonValue.GetArray("AdminUsers");
    for (unsigned adminUsersIndex = 0; adminUsersIndex < adminUsersJsonList.GetLength(); ++adminUsersIndex) {
      m_adminUsers.push_back(adminUsersJsonList[adminUsersIndex].AsString());
    }
    m_adminUsersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arguments")) {
    Aws::Map<Aws::String, JsonView> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for (auto& argumentsItem : argumentsJsonMap) {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
    m_argumentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssignedGroupPatterns")) {
    Aws::Utils::Array<JsonView> assignedGroupPatternsJsonList = jsonValue.GetArray("AssignedGroupPatterns");
    for (unsigned assignedGroupPatternsIndex = 0; assignedGroupPatternsIndex < assignedGroupPatternsJsonList.GetLength();
         ++assignedGroupPatternsIndex) {
      m_assignedGroupPatterns.push_back(assignedGroupPatternsJsonList[assignedGroupPatternsIndex].AsString());
    }
    m_assignedGroupPatternsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleGroupAssignments")) {
    Aws::Utils::Array<JsonView> roleGroupAssignmentsJsonList = jsonValue.GetArray("RoleGroupAssignments");
    for (unsigned roleGroupAssignmentsIndex = 0; roleGroupAssignmentsIndex < roleGroupAssignmentsJsonList.GetLength();
         ++roleGroupAssignmentsIndex) {
      m_roleGroupAssignments.push_back(roleGroupAssignmentsJsonList[roleGroupAssignmentsIndex].AsObject());
    }
    m_roleGroupAssignmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerAppConfig::Jsonize() const {
  JsonValue payload;

  if (m_adminUsersHasBeenSet) {
    Aws::Utils::Array<JsonValue> adminUsersJsonList(m_adminUsers.size());
    for (unsigned adminUsersIndex = 0; adminUsersIndex < adminUsersJsonList.GetLength(); ++adminUsersIndex) {
      adminUsersJsonList[adminUsersIndex].AsString(m_adminUsers[adminUsersIndex]);
    }
    payload.WithArray("AdminUsers", std::move(adminUsersJsonList));
  }

  if (m_argumentsHasBeenSet) {
    JsonValue argumentsJsonMap;
    for (auto& argumentsItem : m_arguments) {
      argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
    }
    payload.WithObject("Arguments", std::move(argumentsJsonMap));
  }

  if (m_assignedGroupPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assignedGroupPatternsJsonList(m_assignedGroupPatterns.size());
    for (unsigned assignedGroupPatternsIndex = 0; assignedGroupPatternsIndex < assignedGroupPatternsJsonList.GetLength();
         ++assignedGroupPatternsIndex) {
      assignedGroupPatternsJsonList[assignedGroupPatternsIndex].AsString(m_assignedGroupPatterns[assignedGroupPatternsIndex]);
    }
    payload.WithArray("AssignedGroupPatterns", std::move(assignedGroupPatternsJsonList));
  }

  if (m_roleGroupAssignmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> roleGroupAssignmentsJsonList(m_roleGroupAssignments.size());
    for (unsigned roleGroupAssignmentsIndex = 0; roleGroupAssignmentsIndex < roleGroupAssignmentsJsonList.GetLength();
         ++roleGroupAssignmentsIndex) {
      roleGroupAssignmentsJsonList[roleGroupAssignmentsIndex].AsObject(m_roleGroupAssignments[roleGroupAssignmentsIndex].Jsonize());
    }
    payload.WithArray("RoleGroupAssignments", std::move(roleGroupAssignmentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
