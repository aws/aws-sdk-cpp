/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelRequest.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApnsVoipChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aPNSVoipChannelRequestHasBeenSet) {
    payload = m_aPNSVoipChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}
