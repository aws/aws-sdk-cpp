/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationReportPrefixes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationReportPrefixes::MigrationReportPrefixes(JsonView jsonValue) { *this = jsonValue; }

MigrationReportPrefixes& MigrationReportPrefixes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tableCompatibilityReport")) {
    m_tableCompatibilityReport = jsonValue.GetString("tableCompatibilityReport");
    m_tableCompatibilityReportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectCompatibilityReport")) {
    m_objectCompatibilityReport = jsonValue.GetString("objectCompatibilityReport");
    m_objectCompatibilityReportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectMigrationReport")) {
    m_objectMigrationReport = jsonValue.GetString("objectMigrationReport");
    m_objectMigrationReportHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationReportPrefixes::Jsonize() const {
  JsonValue payload;

  if (m_tableCompatibilityReportHasBeenSet) {
    payload.WithString("tableCompatibilityReport", m_tableCompatibilityReport);
  }

  if (m_objectCompatibilityReportHasBeenSet) {
    payload.WithString("objectCompatibilityReport", m_objectCompatibilityReport);
  }

  if (m_objectMigrationReportHasBeenSet) {
    payload.WithString("objectMigrationReport", m_objectMigrationReport);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
