/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/TakeRouterInputRequest.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TakeRouterInputRequest::SerializePayload() const {
  JsonValue payload;

  if (m_routerInputArnHasBeenSet) {
    payload.WithString("routerInputArn", m_routerInputArn);
  }

  return payload.View().WriteReadable();
}
