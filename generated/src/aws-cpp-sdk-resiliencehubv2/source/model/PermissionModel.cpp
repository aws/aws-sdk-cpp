/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/PermissionModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

PermissionModel::PermissionModel(JsonView jsonValue) { *this = jsonValue; }

PermissionModel& PermissionModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("invokerRoleName")) {
    m_invokerRoleName = jsonValue.GetString("invokerRoleName");
    m_invokerRoleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossAccountRoles")) {
    Aws::Utils::Array<JsonView> crossAccountRolesJsonList = jsonValue.GetArray("crossAccountRoles");
    for (unsigned crossAccountRolesIndex = 0; crossAccountRolesIndex < crossAccountRolesJsonList.GetLength(); ++crossAccountRolesIndex) {
      m_crossAccountRoles.push_back(crossAccountRolesJsonList[crossAccountRolesIndex].AsObject());
    }
    m_crossAccountRolesHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionModel::Jsonize() const {
  JsonValue payload;

  if (m_invokerRoleNameHasBeenSet) {
    payload.WithString("invokerRoleName", m_invokerRoleName);
  }

  if (m_crossAccountRolesHasBeenSet) {
    Aws::Utils::Array<JsonValue> crossAccountRolesJsonList(m_crossAccountRoles.size());
    for (unsigned crossAccountRolesIndex = 0; crossAccountRolesIndex < crossAccountRolesJsonList.GetLength(); ++crossAccountRolesIndex) {
      crossAccountRolesJsonList[crossAccountRolesIndex].AsObject(m_crossAccountRoles[crossAccountRolesIndex].Jsonize());
    }
    payload.WithArray("crossAccountRoles", std::move(crossAccountRolesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
