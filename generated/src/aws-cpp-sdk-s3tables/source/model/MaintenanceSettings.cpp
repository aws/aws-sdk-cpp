/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MaintenanceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MaintenanceSettings::MaintenanceSettings(JsonView jsonValue) { *this = jsonValue; }

MaintenanceSettings& MaintenanceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("icebergCompaction")) {
    m_icebergCompaction = jsonValue.GetObject("icebergCompaction");
    m_icebergCompactionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("icebergSnapshotManagement")) {
    m_icebergSnapshotManagement = jsonValue.GetObject("icebergSnapshotManagement");
    m_icebergSnapshotManagementHasBeenSet = true;
  }
  return *this;
}

JsonValue MaintenanceSettings::Jsonize() const {
  JsonValue payload;

  if (m_icebergCompactionHasBeenSet) {
    payload.WithObject("icebergCompaction", m_icebergCompaction.Jsonize());
  }

  if (m_icebergSnapshotManagementHasBeenSet) {
    payload.WithObject("icebergSnapshotManagement", m_icebergSnapshotManagement.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
