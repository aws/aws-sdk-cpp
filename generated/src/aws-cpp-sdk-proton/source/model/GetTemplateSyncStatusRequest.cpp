/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/GetTemplateSyncStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTemplateSyncStatusRequest::GetTemplateSyncStatusRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
}

Aws::String GetTemplateSyncStatusRequest::SerializePayload() const
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

  if(m_templateVersionHasBeenSet)
  {
   payload.WithString("templateVersion", m_templateVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTemplateSyncStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.GetTemplateSyncStatus"));
  return headers;

}




