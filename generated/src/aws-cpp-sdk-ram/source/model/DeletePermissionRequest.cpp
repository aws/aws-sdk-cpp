/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/DeletePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeletePermissionRequest::DeletePermissionRequest() : 
    m_permissionArnHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String DeletePermissionRequest::SerializePayload() const
{
  return {};
}

void DeletePermissionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_permissionArnHasBeenSet)
    {
      ss << m_permissionArn;
      uri.AddQueryStringParameter("permissionArn", ss.str());
      ss.str("");
    }

    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



