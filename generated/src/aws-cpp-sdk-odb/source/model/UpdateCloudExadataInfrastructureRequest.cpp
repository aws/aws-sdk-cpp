﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateCloudExadataInfrastructureRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCloudExadataInfrastructureRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudExadataInfrastructureIdHasBeenSet) {
    payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);
  }

  if (m_maintenanceWindowHasBeenSet) {
    payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCloudExadataInfrastructureRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateCloudExadataInfrastructure"));
  return headers;
}
