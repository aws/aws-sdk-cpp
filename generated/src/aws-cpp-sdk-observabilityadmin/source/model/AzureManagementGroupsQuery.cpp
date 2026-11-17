/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureManagementGroupsQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureManagementGroupsQuery::AzureManagementGroupsQuery(JsonView jsonValue) { *this = jsonValue; }

AzureManagementGroupsQuery& AzureManagementGroupsQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ParentManagementGroupId")) {
    m_parentManagementGroupId = jsonValue.GetString("ParentManagementGroupId");
    m_parentManagementGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureManagementGroupsQuery::Jsonize() const {
  JsonValue payload;

  if (m_parentManagementGroupIdHasBeenSet) {
    payload.WithString("ParentManagementGroupId", m_parentManagementGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
