/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateVoiceTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVoiceTemplateRequest::CreateVoiceTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_voiceTemplateRequestHasBeenSet(false)
{
}

Aws::String CreateVoiceTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voiceTemplateRequestHasBeenSet)
  {
   payload = m_voiceTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




