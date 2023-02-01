/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEmailTemplateRequest::CreateEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateContentHasBeenSet(false)
{
}

Aws::String CreateEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateContentHasBeenSet)
  {
   payload.WithObject("TemplateContent", m_templateContent.Jsonize());

  }

  return payload.View().WriteReadable();
}




