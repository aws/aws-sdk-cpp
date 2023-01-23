/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateEmailTemplateRequest::UpdateEmailTemplateRequest() : 
    m_createNewVersion(false),
    m_createNewVersionHasBeenSet(false),
    m_emailTemplateRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdateEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailTemplateRequestHasBeenSet)
  {
   payload = m_emailTemplateRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}

void UpdateEmailTemplateRequest::AddQueryStringParameters(URI& uri) const
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



