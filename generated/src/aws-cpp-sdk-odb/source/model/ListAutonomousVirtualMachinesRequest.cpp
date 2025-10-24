﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAutonomousVirtualMachinesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_cloudAutonomousVmClusterIdHasBeenSet) {
    payload.WithString("cloudAutonomousVmClusterId", m_cloudAutonomousVmClusterId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAutonomousVirtualMachinesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.ListAutonomousVirtualMachines"));
  return headers;
}
