/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateBrowserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateBrowserSettingsRequest::AssociateBrowserSettingsRequest() : 
    m_browserSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false)
{
}

Aws::String AssociateBrowserSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateBrowserSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_browserSettingsArnHasBeenSet)
    {
      ss << m_browserSettingsArn;
      uri.AddQueryStringParameter("browserSettingsArn", ss.str());
      ss.str("");
    }

}



