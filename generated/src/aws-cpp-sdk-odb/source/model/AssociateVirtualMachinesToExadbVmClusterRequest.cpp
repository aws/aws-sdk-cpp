/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AssociateVirtualMachinesToExadbVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateVirtualMachinesToExadbVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exadbVmClusterIdHasBeenSet) {
    payload.WithString("exadbVmClusterId", m_exadbVmClusterId);
  }

  if (m_desiredNodeCountHasBeenSet) {
    payload.WithInteger("desiredNodeCount", m_desiredNodeCount);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateVirtualMachinesToExadbVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.AssociateVirtualMachinesToExadbVmCluster"));
  return headers;
}
