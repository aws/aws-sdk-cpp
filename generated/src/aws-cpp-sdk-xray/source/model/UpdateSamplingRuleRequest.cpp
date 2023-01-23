/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/UpdateSamplingRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSamplingRuleRequest::UpdateSamplingRuleRequest() : 
    m_samplingRuleUpdateHasBeenSet(false)
{
}

Aws::String UpdateSamplingRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_samplingRuleUpdateHasBeenSet)
  {
   payload.WithObject("SamplingRuleUpdate", m_samplingRuleUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}




