/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/UpdateLinkRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLinkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_logSettingsHasBeenSet) {
    payload.WithObject("logSettings", m_logSettings.Jsonize());
  }

  return payload.View().WriteReadable();
}
