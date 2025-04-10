﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountDedicatedIpWarmupAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoWarmupEnabledHasBeenSet)
  {
   payload.WithBool("AutoWarmupEnabled", m_autoWarmupEnabled);

  }

  return payload.View().WriteReadable();
}




