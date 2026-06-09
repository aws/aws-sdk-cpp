/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/SourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

SourceConfiguration::SourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceConfiguration& SourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("databaseClone")) {
    m_databaseClone = jsonValue.GetObject("databaseClone");
    m_databaseCloneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restoreFromBackup")) {
    m_restoreFromBackup = jsonValue.GetObject("restoreFromBackup");
    m_restoreFromBackupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pointInTimeRestore")) {
    m_pointInTimeRestore = jsonValue.GetObject("pointInTimeRestore");
    m_pointInTimeRestoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossRegionDataGuard")) {
    m_crossRegionDataGuard = jsonValue.GetObject("crossRegionDataGuard");
    m_crossRegionDataGuardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossRegionDisasterRecovery")) {
    m_crossRegionDisasterRecovery = jsonValue.GetObject("crossRegionDisasterRecovery");
    m_crossRegionDisasterRecoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneToRefreshable")) {
    m_cloneToRefreshable = jsonValue.GetObject("cloneToRefreshable");
    m_cloneToRefreshableHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_databaseCloneHasBeenSet) {
    payload.WithObject("databaseClone", m_databaseClone.Jsonize());
  }

  if (m_restoreFromBackupHasBeenSet) {
    payload.WithObject("restoreFromBackup", m_restoreFromBackup.Jsonize());
  }

  if (m_pointInTimeRestoreHasBeenSet) {
    payload.WithObject("pointInTimeRestore", m_pointInTimeRestore.Jsonize());
  }

  if (m_crossRegionDataGuardHasBeenSet) {
    payload.WithObject("crossRegionDataGuard", m_crossRegionDataGuard.Jsonize());
  }

  if (m_crossRegionDisasterRecoveryHasBeenSet) {
    payload.WithObject("crossRegionDisasterRecovery", m_crossRegionDisasterRecovery.Jsonize());
  }

  if (m_cloneToRefreshableHasBeenSet) {
    payload.WithObject("cloneToRefreshable", m_cloneToRefreshable.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
