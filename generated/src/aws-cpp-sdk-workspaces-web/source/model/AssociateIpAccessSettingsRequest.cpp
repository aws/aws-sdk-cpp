/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateIpAccessSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateIpAccessSettingsRequest::AssociateIpAccessSettingsRequest() : 
    m_ipAccessSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false)
{
}

Aws::String AssociateIpAccessSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateIpAccessSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ipAccessSettingsArnHasBeenSet)
    {
      ss << m_ipAccessSettingsArn;
      uri.AddQueryStringParameter("ipAccessSettingsArn", ss.str());
      ss.str("");
    }

}



