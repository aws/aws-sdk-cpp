/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateEnvironmentTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnvironmentTemplateVersionRequest::UpdateEnvironmentTemplateVersionRequest() : 
    m_descriptionHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_status(TemplateVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String UpdateEnvironmentTemplateVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_majorVersionHasBeenSet)
  {
   payload.WithString("majorVersion", m_majorVersion);

  }

  if(m_minorVersionHasBeenSet)
  {
   payload.WithString("minorVersion", m_minorVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TemplateVersionStatusMapper::GetNameForTemplateVersionStatus(m_status));
  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEnvironmentTemplateVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateEnvironmentTemplateVersion"));
  return headers;

}




