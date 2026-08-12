/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DisassociateVirtualMachinesFromExadbVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateVirtualMachinesFromExadbVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exadbVmClusterIdHasBeenSet) {
    payload.WithString("exadbVmClusterId", m_exadbVmClusterId);
  }

  if (m_dbNodeIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dbNodeIdsJsonList(m_dbNodeIds.size());
    for (unsigned dbNodeIdsIndex = 0; dbNodeIdsIndex < dbNodeIdsJsonList.GetLength(); ++dbNodeIdsIndex) {
      dbNodeIdsJsonList[dbNodeIdsIndex].AsString(m_dbNodeIds[dbNodeIdsIndex]);
    }
    payload.WithArray("dbNodeIds", std::move(dbNodeIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateVirtualMachinesFromExadbVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DisassociateVirtualMachinesFromExadbVmCluster"));
  return headers;
}
