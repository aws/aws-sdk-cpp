/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateSmsTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateSmsTemplateRequest::UpdateSmsTemplateRequest() : 
    m_createNewVersion(false),
    m_createNewVersionHasBeenSet(false),
    m_sMSTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdateSmsTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sMSTemplateRequestHasBeenSet)
  {
   payload = m_sMSTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}

void UpdateSmsTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_createNewVersionHasBeenSet)
    {
      ss << m_createNewVersion;
      uri.AddQueryStringParameter("create-new-version", ss.str());
      ss.str("");
    }

    if(m_versionHasBeenSet)
    {
      ss << m_version;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



