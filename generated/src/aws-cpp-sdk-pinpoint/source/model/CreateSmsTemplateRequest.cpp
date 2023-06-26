/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateSmsTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSmsTemplateRequest::CreateSmsTemplateRequest() : 
    m_sMSTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateSmsTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sMSTemplateRequestHasBeenSet)
  {
   payload = m_sMSTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




