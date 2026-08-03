/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/DbBackupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

DbBackupSummary::DbBackupSummary(JsonView jsonValue) { *this = jsonValue; }

DbBackupSummary& DbBackupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DbBackupStatusMapper::GetDbBackupStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAfter")) {
    m_expiresAfter = jsonValue.GetString("expiresAfter");
    m_expiresAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dbResourceId")) {
    m_dbResourceId = jsonValue.GetString("dbResourceId");
    m_dbResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = DbBackupTypeMapper::GetDbBackupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("engineType")) {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentType")) {
    m_deploymentType = ResourceDeploymentTypeMapper::GetResourceDeploymentTypeForName(jsonValue.GetString("deploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DbBackupSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DbBackupStatusMapper::GetNameForDbBackupStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_expiresAfterHasBeenSet) {
    payload.WithString("expiresAfter", m_expiresAfter);
  }

  if (m_dbResourceIdHasBeenSet) {
    payload.WithString("dbResourceId", m_dbResourceId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", DbBackupTypeMapper::GetNameForDbBackupType(m_type));
  }

  if (m_engineTypeHasBeenSet) {
    payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if (m_deploymentTypeHasBeenSet) {
    payload.WithString("deploymentType", ResourceDeploymentTypeMapper::GetNameForResourceDeploymentType(m_deploymentType));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
