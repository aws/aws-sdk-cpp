/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DeleteCloudVmClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteCloudVmClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudVmClusterIdHasBeenSet)
  {
   payload.WithString("cloudVmClusterId", m_cloudVmClusterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCloudVmClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteCloudVmCluster"));
  return headers;

}




