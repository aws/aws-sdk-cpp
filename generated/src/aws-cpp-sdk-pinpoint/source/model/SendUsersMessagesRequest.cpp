/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/model/SendUsersMessagesRequest.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendUsersMessagesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sendUsersMessageRequestHasBeenSet) {
    payload = m_sendUsersMessageRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}
