﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/GetDeployablePatchSnapshotForInstanceRequest.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDeployablePatchSnapshotForInstanceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
  }

  if (m_snapshotIdHasBeenSet) {
    payload.WithString("SnapshotId", m_snapshotId);
  }

  if (m_baselineOverrideHasBeenSet) {
    payload.WithObject("BaselineOverride", m_baselineOverride.Jsonize());
  }

  if (m_useS3DualStackEndpointHasBeenSet) {
    payload.WithBool("UseS3DualStackEndpoint", m_useS3DualStackEndpoint);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeployablePatchSnapshotForInstanceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetDeployablePatchSnapshotForInstance"));
  return headers;
}
