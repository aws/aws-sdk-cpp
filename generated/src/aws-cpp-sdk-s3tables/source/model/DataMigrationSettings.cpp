/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/DataMigrationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

DataMigrationSettings::DataMigrationSettings(JsonView jsonValue) { *this = jsonValue; }

DataMigrationSettings& DataMigrationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maintenanceSettings")) {
    m_maintenanceSettings = jsonValue.GetObject("maintenanceSettings");
    m_maintenanceSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("migrationPolicies")) {
    m_migrationPolicies = jsonValue.GetObject("migrationPolicies");
    m_migrationPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataMigrationSettings::Jsonize() const {
  JsonValue payload;

  if (m_maintenanceSettingsHasBeenSet) {
    payload.WithObject("maintenanceSettings", m_maintenanceSettings.Jsonize());
  }

  if (m_migrationPoliciesHasBeenSet) {
    payload.WithObject("migrationPolicies", m_migrationPolicies.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
