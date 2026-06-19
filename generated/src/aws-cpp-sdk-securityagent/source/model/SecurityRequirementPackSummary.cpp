/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/SecurityRequirementPackSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

SecurityRequirementPackSummary::SecurityRequirementPackSummary(JsonView jsonValue) { *this = jsonValue; }

SecurityRequirementPackSummary& SecurityRequirementPackSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("packId")) {
    m_packId = jsonValue.GetString("packId");
    m_packIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vendorName")) {
    m_vendorName = jsonValue.GetString("vendorName");
    m_vendorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managementType")) {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));
    m_managementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SecurityRequirementPackStatusMapper::GetSecurityRequirementPackStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityRequirementPackSummary::Jsonize() const {
  JsonValue payload;

  if (m_packIdHasBeenSet) {
    payload.WithString("packId", m_packId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_vendorNameHasBeenSet) {
    payload.WithString("vendorName", m_vendorName);
  }

  if (m_managementTypeHasBeenSet) {
    payload.WithString("managementType", ManagementTypeMapper::GetNameForManagementType(m_managementType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SecurityRequirementPackStatusMapper::GetNameForSecurityRequirementPackStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
