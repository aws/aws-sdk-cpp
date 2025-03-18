/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/GetLibraryItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetLibraryItemRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetLibraryItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_instanceIdHasBeenSet)
  {
    ss << m_instanceId;
    headers.emplace("instance-id",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetLibraryItemRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_libraryItemIdHasBeenSet)
    {
      ss << m_libraryItemId;
      uri.AddQueryStringParameter("libraryItemId", ss.str());
      ss.str("");
    }

    if(m_appIdHasBeenSet)
    {
      ss << m_appId;
      uri.AddQueryStringParameter("appId", ss.str());
      ss.str("");
    }

}



