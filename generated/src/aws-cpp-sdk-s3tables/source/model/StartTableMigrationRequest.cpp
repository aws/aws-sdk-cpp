/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/StartTableMigrationRequest.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTableMigrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_roleARNHasBeenSet) {
    payload.WithString("roleARN", m_roleARN);
  }

  if (m_destinationTableHasBeenSet) {
    payload.WithObject("destinationTable", m_destinationTable.Jsonize());
  }

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", MigrationSourceTypeMapper::GetNameForMigrationSourceType(m_sourceType));
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_dataMigrationHasBeenSet) {
    payload.WithObject("dataMigration", m_dataMigration.Jsonize());
  }

  if (m_reviewMigrationPlanHasBeenSet) {
    payload.WithBool("reviewMigrationPlan", m_reviewMigrationPlan);
  }

  if (m_migrationOutputHasBeenSet) {
    payload.WithObject("migrationOutput", m_migrationOutput.Jsonize());
  }

  return payload.View().WriteReadable();
}
