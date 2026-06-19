/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ListSecurityRequirementPackFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ListSecurityRequirementPackFilter::ListSecurityRequirementPackFilter(JsonView jsonValue) { *this = jsonValue; }

ListSecurityRequirementPackFilter& ListSecurityRequirementPackFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managementType")) {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));
    m_managementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SecurityRequirementPackStatusMapper::GetSecurityRequirementPackStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ListSecurityRequirementPackFilter::Jsonize() const {
  JsonValue payload;

  if (m_managementTypeHasBeenSet) {
    payload.WithString("managementType", ManagementTypeMapper::GetNameForManagementType(m_managementType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SecurityRequirementPackStatusMapper::GetNameForSecurityRequirementPackStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
