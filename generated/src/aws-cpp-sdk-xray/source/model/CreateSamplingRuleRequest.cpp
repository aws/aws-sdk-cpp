/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/CreateSamplingRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSamplingRuleRequest::CreateSamplingRuleRequest() : 
    m_samplingRuleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSamplingRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_samplingRuleHasBeenSet)
  {
   payload.WithObject("SamplingRule", m_samplingRule.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




