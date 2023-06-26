/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutDedicatedIpPoolScalingAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutDedicatedIpPoolScalingAttributesRequest::PutDedicatedIpPoolScalingAttributesRequest() : 
    m_poolNameHasBeenSet(false),
    m_scalingMode(ScalingMode::NOT_SET),
    m_scalingModeHasBeenSet(false)
{
}

Aws::String PutDedicatedIpPoolScalingAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scalingModeHasBeenSet)
  {
   payload.WithString("ScalingMode", ScalingModeMapper::GetNameForScalingMode(m_scalingMode));
  }

  return payload.View().WriteReadable();
}




