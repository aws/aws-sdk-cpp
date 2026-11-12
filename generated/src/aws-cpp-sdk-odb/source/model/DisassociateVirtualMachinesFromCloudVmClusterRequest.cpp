/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DisassociateVirtualMachinesFromCloudVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateVirtualMachinesFromCloudVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudVmClusterIdHasBeenSet) {
    payload.WithString("cloudVmClusterId", m_cloudVmClusterId);
  }

  if (m_dbServersHasBeenSet) {
    Aws::Utils::Array<JsonValue> dbServersJsonList(m_dbServers.size());
    for (unsigned dbServersIndex = 0; dbServersIndex < dbServersJsonList.GetLength(); ++dbServersIndex) {
      dbServersJsonList[dbServersIndex].AsString(m_dbServers[dbServersIndex]);
    }
    payload.WithArray("dbServers", std::move(dbServersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateVirtualMachinesFromCloudVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DisassociateVirtualMachinesFromCloudVmCluster"));
  return headers;
}
