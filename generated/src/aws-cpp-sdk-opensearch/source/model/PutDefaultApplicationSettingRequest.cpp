/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/PutDefaultApplicationSettingRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDefaultApplicationSettingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationArnHasBeenSet) {
    payload.WithString("applicationArn", m_applicationArn);
  }

  if (m_setAsDefaultHasBeenSet) {
    payload.WithBool("setAsDefault", m_setAsDefault);
  }

  return payload.View().WriteReadable();
}
