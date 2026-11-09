/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationSnapshotManagementSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationSnapshotManagementSettings::MigrationSnapshotManagementSettings(JsonView jsonValue) { *this = jsonValue; }

MigrationSnapshotManagementSettings& MigrationSnapshotManagementSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minSnapshotsToKeep")) {
    m_minSnapshotsToKeep = jsonValue.GetInteger("minSnapshotsToKeep");
    m_minSnapshotsToKeepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxSnapshotAgeHours")) {
    m_maxSnapshotAgeHours = jsonValue.GetInteger("maxSnapshotAgeHours");
    m_maxSnapshotAgeHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationSnapshotManagementSettings::Jsonize() const {
  JsonValue payload;

  if (m_minSnapshotsToKeepHasBeenSet) {
    payload.WithInteger("minSnapshotsToKeep", m_minSnapshotsToKeep);
  }

  if (m_maxSnapshotAgeHoursHasBeenSet) {
    payload.WithInteger("maxSnapshotAgeHours", m_maxSnapshotAgeHours);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
