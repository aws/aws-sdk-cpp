/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/OrganizationalReportSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

OrganizationalReportSummary::OrganizationalReportSummary(JsonView jsonValue) { *this = jsonValue; }

OrganizationalReportSummary& OrganizationalReportSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportId")) {
    m_reportId = jsonValue.GetString("reportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerAccountId")) {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationId")) {
    m_organizationId = jsonValue.GetString("organizationId");
    m_organizationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = OrganizationalReportStateMapper::GetOrganizationalReportStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationalReportSummary::Jsonize() const {
  JsonValue payload;

  if (m_reportIdHasBeenSet) {
    payload.WithString("reportId", m_reportId);
  }

  if (m_ownerAccountIdHasBeenSet) {
    payload.WithString("ownerAccountId", m_ownerAccountId);
  }

  if (m_organizationIdHasBeenSet) {
    payload.WithString("organizationId", m_organizationId);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", OrganizationalReportStateMapper::GetNameForOrganizationalReportState(m_state));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
