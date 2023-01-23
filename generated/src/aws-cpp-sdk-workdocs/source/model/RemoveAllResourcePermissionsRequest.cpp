/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/RemoveAllResourcePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveAllResourcePermissionsRequest::RemoveAllResourcePermissionsRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

Aws::String RemoveAllResourcePermissionsRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection RemoveAllResourcePermissionsRequest::GetRequestSpecificHeaders() const
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




