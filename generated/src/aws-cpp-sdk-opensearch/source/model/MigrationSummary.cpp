/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/MigrationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

MigrationSummary::MigrationSummary(JsonView jsonValue) { *this = jsonValue; }

MigrationSummary& MigrationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("migrationId")) {
    m_migrationId = jsonValue.GetString("migrationId");
    m_migrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportedCount")) {
    m_exportedCount = jsonValue.GetInteger("exportedCount");
    m_exportedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importedCount")) {
    m_importedCount = jsonValue.GetInteger("importedCount");
    m_importedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationSummary::Jsonize() const {
  JsonValue payload;

  if (m_migrationIdHasBeenSet) {
    payload.WithString("migrationId", m_migrationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_exportedCountHasBeenSet) {
    payload.WithInteger("exportedCount", m_exportedCount);
  }

  if (m_importedCountHasBeenSet) {
    payload.WithInteger("importedCount", m_importedCount);
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
