/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simpledbv2/model/GetExportRequest.h>

#include <utility>

using namespace Aws::SimpleDBv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetExportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exportArnHasBeenSet) {
    payload.WithString("exportArn", m_exportArn);
  }

  return payload.View().WriteReadable();
}
