/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/RegisterCapabilityRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterCapabilityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_capabilityNameHasBeenSet) {
    payload.WithString("capabilityName", m_capabilityName);
  }

  if (m_capabilityConfigHasBeenSet) {
    payload.WithObject("capabilityConfig", m_capabilityConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
