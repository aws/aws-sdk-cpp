/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/SyncTableMigrationRequest.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SyncTableMigrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_roleARNHasBeenSet) {
    payload.WithString("roleARN", m_roleARN);
  }

  if (m_tableARNHasBeenSet) {
    payload.WithString("tableARN", m_tableARN);
  }

  if (m_reviewMigrationPlanHasBeenSet) {
    payload.WithBool("reviewMigrationPlan", m_reviewMigrationPlan);
  }

  if (m_migrationOutputHasBeenSet) {
    payload.WithObject("migrationOutput", m_migrationOutput.Jsonize());
  }

  return payload.View().WriteReadable();
}
