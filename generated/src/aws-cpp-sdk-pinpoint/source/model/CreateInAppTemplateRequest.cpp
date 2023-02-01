/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateInAppTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInAppTemplateRequest::CreateInAppTemplateRequest() : 
    m_inAppTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateInAppTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inAppTemplateRequestHasBeenSet)
  {
   payload = m_inAppTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




