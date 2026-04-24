/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationExecution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationExecution::NetworkMigrationExecution(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationExecution& NetworkMigrationExecution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationExecutionID")) {
    m_networkMigrationExecutionID = jsonValue.GetString("networkMigrationExecutionID");
    m_networkMigrationExecutionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stage")) {
    m_stage = ExecutionStageMapper::GetExecutionStageForName(jsonValue.GetString("stage"));
    m_stageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activity")) {
    m_activity = ExecutionStageActivityMapper::GetExecutionStageActivityForName(jsonValue.GetString("activity"));
    m_activityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationExecution::Jsonize() const {
  JsonValue payload;

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if (m_stageHasBeenSet) {
    payload.WithString("stage", ExecutionStageMapper::GetNameForExecutionStage(m_stage));
  }

  if (m_activityHasBeenSet) {
    payload.WithString("activity", ExecutionStageActivityMapper::GetNameForExecutionStageActivity(m_activity));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
