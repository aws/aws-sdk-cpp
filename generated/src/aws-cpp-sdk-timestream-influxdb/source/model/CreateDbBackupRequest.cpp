/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/CreateDbBackupRequest.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDbBackupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dbResourceIdHasBeenSet) {
    payload.WithString("dbResourceId", m_dbResourceId);
  }

  if (m_retentionDaysHasBeenSet) {
    payload.WithInteger("retentionDays", m_retentionDays);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDbBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.CreateDbBackup"));
  return headers;
}
