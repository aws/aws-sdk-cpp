/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ProgramManagementAccountSummary::ProgramManagementAccountSummary(JsonView jsonValue) { *this = jsonValue; }

ProgramManagementAccountSummary& ProgramManagementAccountSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetString("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("program")) {
    m_program = ProgramMapper::GetProgramForName(jsonValue.GetString("program"));
    m_programHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetString("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ProgramManagementAccountStatusMapper::GetProgramManagementAccountStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgramManagementAccountSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_revisionHasBeenSet) {
    payload.WithString("revision", m_revision);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_programHasBeenSet) {
    payload.WithString("program", ProgramMapper::GetNameForProgram(m_program));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startDateHasBeenSet) {
    payload.WithString("startDate", m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ProgramManagementAccountStatusMapper::GetNameForProgramManagementAccountStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
