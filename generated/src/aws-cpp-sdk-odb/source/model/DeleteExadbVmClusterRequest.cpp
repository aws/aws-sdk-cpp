/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DeleteExadbVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteExadbVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exadbVmClusterIdHasBeenSet) {
    payload.WithString("exadbVmClusterId", m_exadbVmClusterId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteExadbVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteExadbVmCluster"));
  return headers;
}
