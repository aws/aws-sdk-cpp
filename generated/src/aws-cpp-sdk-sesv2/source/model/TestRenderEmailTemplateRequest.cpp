/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/TestRenderEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestRenderEmailTemplateRequest::TestRenderEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

Aws::String TestRenderEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateDataHasBeenSet)
  {
   payload.WithString("TemplateData", m_templateData);

  }

  return payload.View().WriteReadable();
}




