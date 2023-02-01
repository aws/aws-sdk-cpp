/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateUserAccessLoggingSettingsRequest::AssociateUserAccessLoggingSettingsRequest() : 
    m_portalArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
}

Aws::String AssociateUserAccessLoggingSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateUserAccessLoggingSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userAccessLoggingSettingsArnHasBeenSet)
    {
      ss << m_userAccessLoggingSettingsArn;
      uri.AddQueryStringParameter("userAccessLoggingSettingsArn", ss.str());
      ss.str("");
    }

}



