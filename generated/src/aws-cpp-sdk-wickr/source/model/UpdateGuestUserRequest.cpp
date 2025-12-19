/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/UpdateGuestUserRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGuestUserRequest::SerializePayload() const {
  JsonValue payload;

  if (m_blockHasBeenSet) {
    payload.WithBool("block", m_block);
  }

  return payload.View().WriteReadable();
}
