/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ListGremlinQueriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListGremlinQueriesRequest::ListGremlinQueriesRequest() : 
    m_includeWaiting(false),
    m_includeWaitingHasBeenSet(false)
{
}

Aws::String ListGremlinQueriesRequest::SerializePayload() const
{
  return {};
}

void ListGremlinQueriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeWaitingHasBeenSet)
    {
      ss << m_includeWaiting;
      uri.AddQueryStringParameter("includeWaiting", ss.str());
      ss.str("");
    }

}



