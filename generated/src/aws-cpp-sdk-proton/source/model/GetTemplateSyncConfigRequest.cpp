﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetTemplateSyncConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTemplateSyncConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTemplateSyncConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.GetTemplateSyncConfig"));
  return headers;

}




