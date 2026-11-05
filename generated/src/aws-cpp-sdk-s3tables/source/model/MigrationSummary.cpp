/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationSummary::MigrationSummary(JsonView jsonValue) { *this = jsonValue; }

MigrationSummary& MigrationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("migrationId")) {
    m_migrationId = jsonValue.GetString("migrationId");
    m_migrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableBucketARN")) {
    m_tableBucketARN = jsonValue.GetString("tableBucketARN");
    m_tableBucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableARN")) {
    m_tableARN = jsonValue.GetString("tableARN");
    m_tableARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = MigrationTypeMapper::GetMigrationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MigrationStateMapper::GetMigrationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasValidPlan")) {
    m_hasValidPlan = jsonValue.GetBool("hasValidPlan");
    m_hasValidPlanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateUpdatedAt")) {
    m_stateUpdatedAt = jsonValue.GetString("stateUpdatedAt");
    m_stateUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationSummary::Jsonize() const {
  JsonValue payload;

  if (m_migrationIdHasBeenSet) {
    payload.WithString("migrationId", m_migrationId);
  }

  if (m_tableBucketARNHasBeenSet) {
    payload.WithString("tableBucketARN", m_tableBucketARN);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_tableARNHasBeenSet) {
    payload.WithString("tableARN", m_tableARN);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", MigrationTypeMapper::GetNameForMigrationType(m_type));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", MigrationStateMapper::GetNameForMigrationState(m_state));
  }

  if (m_hasValidPlanHasBeenSet) {
    payload.WithBool("hasValidPlan", m_hasValidPlan);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_stateUpdatedAtHasBeenSet) {
    payload.WithString("stateUpdatedAt", m_stateUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
