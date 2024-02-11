/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/DeletePermissionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeletePermissionVersionRequest::DeletePermissionVersionRequest() : 
    m_permissionArnHasBeenSet(false),
    m_permissionVersion(0),
    m_permissionVersionHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String DeletePermissionVersionRequest::SerializePayload() const
{
  return {};
}

void DeletePermissionVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_permissionArnHasBeenSet)
    {
      ss << m_permissionArn;
      uri.AddQueryStringParameter("permissionArn", ss.str());
      ss.str("");
    }

    if(m_permissionVersionHasBeenSet)
    {
      ss << m_permissionVersion;
      uri.AddQueryStringParameter("permissionVersion", ss.str());
      ss.str("");
    }

    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



