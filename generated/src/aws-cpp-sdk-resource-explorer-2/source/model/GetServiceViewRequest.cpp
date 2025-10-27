/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/GetServiceViewRequest.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetServiceViewRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceViewArnHasBeenSet) {
    payload.WithString("ServiceViewArn", m_serviceViewArn);
  }

  return payload.View().WriteReadable();
}
