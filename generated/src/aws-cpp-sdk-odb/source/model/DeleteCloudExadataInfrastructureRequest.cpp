﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DeleteCloudExadataInfrastructureRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteCloudExadataInfrastructureRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudExadataInfrastructureIdHasBeenSet) {
    payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCloudExadataInfrastructureRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteCloudExadataInfrastructure"));
  return headers;
}
