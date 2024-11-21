﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateDataProtectionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateDataProtectionSettingsRequest::AssociateDataProtectionSettingsRequest() : 
    m_dataProtectionSettingsArnHasBeenSet(false),
    m_portalArnHasBeenSet(false)
{
}

Aws::String AssociateDataProtectionSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateDataProtectionSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dataProtectionSettingsArnHasBeenSet)
    {
      ss << m_dataProtectionSettingsArn;
      uri.AddQueryStringParameter("dataProtectionSettingsArn", ss.str());
      ss.str("");
    }

}



