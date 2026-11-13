/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/UpdateCloneRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCloneRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trafficSplitOptionsHasBeenSet) {
    payload.WithObject("TrafficSplitOptions", m_trafficSplitOptions.Jsonize());
  }

  if (m_cutoverOptionsHasBeenSet) {
    payload.WithObject("CutoverOptions", m_cutoverOptions.Jsonize());
  }

  if (m_retentionOptionsHasBeenSet) {
    payload.WithObject("RetentionOptions", m_retentionOptions.Jsonize());
  }

  return payload.View().WriteReadable();
}
