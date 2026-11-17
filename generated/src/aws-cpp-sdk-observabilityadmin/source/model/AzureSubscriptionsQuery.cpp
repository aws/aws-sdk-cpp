/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureSubscriptionsQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureSubscriptionsQuery::AzureSubscriptionsQuery(JsonView jsonValue) { *this = jsonValue; }

AzureSubscriptionsQuery& AzureSubscriptionsQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ManagementGroupId")) {
    m_managementGroupId = jsonValue.GetString("ManagementGroupId");
    m_managementGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureSubscriptionsQuery::Jsonize() const {
  JsonValue payload;

  if (m_managementGroupIdHasBeenSet) {
    payload.WithString("ManagementGroupId", m_managementGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
