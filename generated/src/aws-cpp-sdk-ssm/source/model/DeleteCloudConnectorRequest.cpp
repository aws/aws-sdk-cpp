/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/DeleteCloudConnectorRequest.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteCloudConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudConnectorIdHasBeenSet) {
    payload.WithString("CloudConnectorId", m_cloudConnectorId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCloudConnectorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteCloudConnector"));
  return headers;
}
