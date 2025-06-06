﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutConfigurationSetReputationOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reputationMetricsEnabledHasBeenSet)
  {
   payload.WithBool("ReputationMetricsEnabled", m_reputationMetricsEnabled);

  }

  return payload.View().WriteReadable();
}




