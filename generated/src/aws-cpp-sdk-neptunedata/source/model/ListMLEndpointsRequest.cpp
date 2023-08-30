/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ListMLEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListMLEndpointsRequest::ListMLEndpointsRequest() : 
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false)
{
}

Aws::String ListMLEndpointsRequest::SerializePayload() const
{
  return {};
}

void ListMLEndpointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxItems", ss.str());
      ss.str("");
    }

    if(m_neptuneIamRoleArnHasBeenSet)
    {
      ss << m_neptuneIamRoleArn;
      uri.AddQueryStringParameter("neptuneIamRoleArn", ss.str());
      ss.str("");
    }

}



