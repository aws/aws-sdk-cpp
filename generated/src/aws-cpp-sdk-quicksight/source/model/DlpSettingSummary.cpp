/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DlpSettingSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DlpSettingSummary::DlpSettingSummary(JsonView jsonValue) { *this = jsonValue; }

DlpSettingSummary& DlpSettingSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DlpSettingId")) {
    m_dlpSettingId = jsonValue.GetString("DlpSettingId");
    m_dlpSettingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = DlpSettingStatusMapper::GetDlpSettingStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProviderType")) {
    m_providerType = DlpProviderTypeMapper::GetDlpProviderTypeForName(jsonValue.GetString("ProviderType"));
    m_providerTypeHasBeenSet = true;
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

JsonValue DlpSettingSummary::Jsonize() const {
  JsonValue payload;

  if (m_dlpSettingIdHasBeenSet) {
    payload.WithString("DlpSettingId", m_dlpSettingId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DlpSettingStatusMapper::GetNameForDlpSettingStatus(m_status));
  }

  if (m_providerTypeHasBeenSet) {
    payload.WithString("ProviderType", DlpProviderTypeMapper::GetNameForDlpProviderType(m_providerType));
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
