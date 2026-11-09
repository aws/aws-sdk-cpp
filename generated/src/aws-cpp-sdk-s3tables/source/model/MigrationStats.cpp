/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationStats.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationStats::MigrationStats(JsonView jsonValue) { *this = jsonValue; }

MigrationStats& MigrationStats::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("objectsMigrated")) {
    m_objectsMigrated = jsonValue.GetInt64("objectsMigrated");
    m_objectsMigratedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectsFailedMigration")) {
    m_objectsFailedMigration = jsonValue.GetInt64("objectsFailedMigration");
    m_objectsFailedMigrationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectsPendingMigration")) {
    m_objectsPendingMigration = jsonValue.GetInt64("objectsPendingMigration");
    m_objectsPendingMigrationHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationStats::Jsonize() const {
  JsonValue payload;

  if (m_objectsMigratedHasBeenSet) {
    payload.WithInt64("objectsMigrated", m_objectsMigrated);
  }

  if (m_objectsFailedMigrationHasBeenSet) {
    payload.WithInt64("objectsFailedMigration", m_objectsFailedMigration);
  }

  if (m_objectsPendingMigrationHasBeenSet) {
    payload.WithInt64("objectsPendingMigration", m_objectsPendingMigration);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
