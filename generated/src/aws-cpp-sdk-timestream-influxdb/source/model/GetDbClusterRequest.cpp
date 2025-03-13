/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/GetDbClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDbClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dbClusterIdHasBeenSet)
  {
   payload.WithString("dbClusterId", m_dbClusterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDbClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.GetDbCluster"));
  return headers;

}




