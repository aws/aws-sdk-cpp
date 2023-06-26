/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/RemoveResourcePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

RemoveResourcePermissionRequest::RemoveResourcePermissionRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false)
{
}

Aws::String RemoveResourcePermissionRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection RemoveResourcePermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void RemoveResourcePermissionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_principalTypeHasBeenSet)
    {
      ss << PrincipalTypeMapper::GetNameForPrincipalType(m_principalType);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



