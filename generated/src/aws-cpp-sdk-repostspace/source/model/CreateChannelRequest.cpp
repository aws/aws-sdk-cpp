﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/repostspace/model/CreateChannelRequest.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("channelName", m_channelName);
  }

  if (m_channelDescriptionHasBeenSet) {
    payload.WithString("channelDescription", m_channelDescription);
  }

  return payload.View().WriteReadable();
}
