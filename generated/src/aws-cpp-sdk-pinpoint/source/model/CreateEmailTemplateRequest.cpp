/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEmailTemplateRequest::CreateEmailTemplateRequest() : 
    m_emailTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String CreateEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailTemplateRequestHasBeenSet)
  {
   payload = m_emailTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




