/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GenerateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateTemplateRequest::GenerateTemplateRequest() : 
    m_appIdHasBeenSet(false),
    m_templateFormat(OutputFormat::NOT_SET),
    m_templateFormatHasBeenSet(false)
{
}

Aws::String GenerateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_templateFormatHasBeenSet)
  {
   payload.WithString("templateFormat", OutputFormatMapper::GetNameForOutputFormat(m_templateFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.GenerateTemplate"));
  return headers;

}




