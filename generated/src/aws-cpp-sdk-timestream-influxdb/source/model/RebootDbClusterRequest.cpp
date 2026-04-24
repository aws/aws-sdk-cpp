/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/RebootDbClusterRequest.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RebootDbClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dbClusterIdHasBeenSet) {
    payload.WithString("dbClusterId", m_dbClusterId);
  }

  if (m_instanceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
    for (unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex) {
      instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
    }
    payload.WithArray("instanceIds", std::move(instanceIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebootDbClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.RebootDbCluster"));
  return headers;
}
