/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ListLoaderJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListLoaderJobsRequest::ListLoaderJobsRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_includeQueuedLoads(false),
    m_includeQueuedLoadsHasBeenSet(false)
{
}

Aws::String ListLoaderJobsRequest::SerializePayload() const
{
  return {};
}

void ListLoaderJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_includeQueuedLoadsHasBeenSet)
    {
      ss << m_includeQueuedLoads;
      uri.AddQueryStringParameter("includeQueuedLoads", ss.str());
      ss.str("");
    }

}



