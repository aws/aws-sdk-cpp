/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationOutputOverview.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationOutputOverview::MigrationOutputOverview(JsonView jsonValue) { *this = jsonValue; }

MigrationOutputOverview& MigrationOutputOverview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableCompatibilityReport")) {
    m_tableCompatibilityReport = jsonValue.GetObject("tableCompatibilityReport");
    m_tableCompatibilityReportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectCompatibilityReport")) {
    m_objectCompatibilityReport = jsonValue.GetObject("objectCompatibilityReport");
    m_objectCompatibilityReportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectMigrationReport")) {
    m_objectMigrationReport = jsonValue.GetObject("objectMigrationReport");
    m_objectMigrationReportHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationOutputOverview::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_tableCompatibilityReportHasBeenSet) {
    payload.WithObject("tableCompatibilityReport", m_tableCompatibilityReport.Jsonize());
  }

  if (m_objectCompatibilityReportHasBeenSet) {
    payload.WithObject("objectCompatibilityReport", m_objectCompatibilityReport.Jsonize());
  }

  if (m_objectMigrationReportHasBeenSet) {
    payload.WithObject("objectMigrationReport", m_objectMigrationReport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
