/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage-vod/model/ConfigureLogsRequest.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ConfigureLogsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_egressAccessLogsHasBeenSet) {
    payload.WithObject("egressAccessLogs", m_egressAccessLogs.Jsonize());
  }

  return payload.View().WriteReadable();
}
