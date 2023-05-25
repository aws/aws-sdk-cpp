/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateNetworkSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateNetworkSettingsRequest::AssociateNetworkSettingsRequest() : 
    m_networkSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false)
{
}

Aws::String AssociateNetworkSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateNetworkSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_networkSettingsArnHasBeenSet)
    {
      ss << m_networkSettingsArn;
      uri.AddQueryStringParameter("networkSettingsArn", ss.str());
      ss.str("");
    }

}



