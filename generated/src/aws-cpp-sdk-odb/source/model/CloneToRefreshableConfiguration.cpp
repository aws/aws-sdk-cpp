/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CloneToRefreshableConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

CloneToRefreshableConfiguration::CloneToRefreshableConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloneToRefreshableConfiguration& CloneToRefreshableConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAutonomousDatabaseId")) {
    m_sourceAutonomousDatabaseId = jsonValue.GetString("sourceAutonomousDatabaseId");
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshableMode")) {
    m_refreshableMode = RefreshableModeMapper::GetRefreshableModeForName(jsonValue.GetString("refreshableMode"));
    m_refreshableModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoRefreshFrequencyInSeconds")) {
    m_autoRefreshFrequencyInSeconds = jsonValue.GetInteger("autoRefreshFrequencyInSeconds");
    m_autoRefreshFrequencyInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoRefreshPointLagInSeconds")) {
    m_autoRefreshPointLagInSeconds = jsonValue.GetInteger("autoRefreshPointLagInSeconds");
    m_autoRefreshPointLagInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeOfAutoRefreshStart")) {
    m_timeOfAutoRefreshStart = jsonValue.GetString("timeOfAutoRefreshStart");
    m_timeOfAutoRefreshStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("openMode")) {
    m_openMode = OpenModeMapper::GetOpenModeForName(jsonValue.GetString("openMode"));
    m_openModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneType")) {
    m_cloneType = CloneTypeMapper::GetCloneTypeForName(jsonValue.GetString("cloneType"));
    m_cloneTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CloneToRefreshableConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAutonomousDatabaseIdHasBeenSet) {
    payload.WithString("sourceAutonomousDatabaseId", m_sourceAutonomousDatabaseId);
  }

  if (m_refreshableModeHasBeenSet) {
    payload.WithString("refreshableMode", RefreshableModeMapper::GetNameForRefreshableMode(m_refreshableMode));
  }

  if (m_autoRefreshFrequencyInSecondsHasBeenSet) {
    payload.WithInteger("autoRefreshFrequencyInSeconds", m_autoRefreshFrequencyInSeconds);
  }

  if (m_autoRefreshPointLagInSecondsHasBeenSet) {
    payload.WithInteger("autoRefreshPointLagInSeconds", m_autoRefreshPointLagInSeconds);
  }

  if (m_timeOfAutoRefreshStartHasBeenSet) {
    payload.WithString("timeOfAutoRefreshStart", m_timeOfAutoRefreshStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_openModeHasBeenSet) {
    payload.WithString("openMode", OpenModeMapper::GetNameForOpenMode(m_openMode));
  }

  if (m_cloneTypeHasBeenSet) {
    payload.WithString("cloneType", CloneTypeMapper::GetNameForCloneType(m_cloneType));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
