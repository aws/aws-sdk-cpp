/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/model/SessionData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RedshiftDataAPIService {
namespace Model {

SessionData::SessionData(JsonView jsonValue) { *this = jsonValue; }

SessionData& SessionData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SessionId")) {
    m_sessionId = jsonValue.GetString("SessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = SessionStatusStringMapper::GetSessionStatusStringForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Database")) {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DbUser")) {
    m_dbUser = jsonValue.GetString("DbUser");
    m_dbUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterIdentifier")) {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");
    m_clusterIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkgroupName")) {
    m_workgroupName = jsonValue.GetString("WorkgroupName");
    m_workgroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionAliveSeconds")) {
    m_sessionAliveSeconds = jsonValue.GetInteger("SessionAliveSeconds");
    m_sessionAliveSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionTtl")) {
    m_sessionTtl = jsonValue.GetDouble("SessionTtl");
    m_sessionTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentStatementId")) {
    m_currentStatementId = jsonValue.GetString("CurrentStatementId");
    m_currentStatementIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionData::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("SessionId", m_sessionId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SessionStatusStringMapper::GetNameForSessionStatusString(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_databaseHasBeenSet) {
    payload.WithString("Database", m_database);
  }

  if (m_dbUserHasBeenSet) {
    payload.WithString("DbUser", m_dbUser);
  }

  if (m_clusterIdentifierHasBeenSet) {
    payload.WithString("ClusterIdentifier", m_clusterIdentifier);
  }

  if (m_workgroupNameHasBeenSet) {
    payload.WithString("WorkgroupName", m_workgroupName);
  }

  if (m_sessionAliveSecondsHasBeenSet) {
    payload.WithInteger("SessionAliveSeconds", m_sessionAliveSeconds);
  }

  if (m_sessionTtlHasBeenSet) {
    payload.WithDouble("SessionTtl", m_sessionTtl.SecondsWithMSPrecision());
  }

  if (m_currentStatementIdHasBeenSet) {
    payload.WithString("CurrentStatementId", m_currentStatementId);
  }

  return payload;
}

}  // namespace Model
}  // namespace RedshiftDataAPIService
}  // namespace Aws
