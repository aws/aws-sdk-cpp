/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/TableRecordExpirationConfigurationValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

TableRecordExpirationConfigurationValue::TableRecordExpirationConfigurationValue(JsonView jsonValue) { *this = jsonValue; }

TableRecordExpirationConfigurationValue& TableRecordExpirationConfigurationValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = TableRecordExpirationStatusMapper::GetTableRecordExpirationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("settings")) {
    m_settings = jsonValue.GetObject("settings");
    m_settingsHasBeenSet = true;
  }
  return *this;
}

JsonValue TableRecordExpirationConfigurationValue::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", TableRecordExpirationStatusMapper::GetNameForTableRecordExpirationStatus(m_status));
  }

  if (m_settingsHasBeenSet) {
    payload.WithObject("settings", m_settings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
