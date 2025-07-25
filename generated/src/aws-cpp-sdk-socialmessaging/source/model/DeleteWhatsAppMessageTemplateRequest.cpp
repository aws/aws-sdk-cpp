/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/DeleteWhatsAppMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteWhatsAppMessageTemplateRequest::SerializePayload() const
{
  return {};
}

void DeleteWhatsAppMessageTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_metaTemplateIdHasBeenSet)
    {
      ss << m_metaTemplateId;
      uri.AddQueryStringParameter("metaTemplateId", ss.str());
      ss.str("");
    }

    if(m_deleteAllLanguagesHasBeenSet)
    {
      ss << m_deleteAllLanguages;
      uri.AddQueryStringParameter("deleteAllTemplates", ss.str());
      ss.str("");
    }

    if(m_idHasBeenSet)
    {
      ss << m_id;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

    if(m_templateNameHasBeenSet)
    {
      ss << m_templateName;
      uri.AddQueryStringParameter("templateName", ss.str());
      ss.str("");
    }

}



