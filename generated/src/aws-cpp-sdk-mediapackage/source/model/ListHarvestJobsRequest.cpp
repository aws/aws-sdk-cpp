/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/ListHarvestJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHarvestJobsRequest::ListHarvestJobsRequest() : 
    m_includeChannelIdHasBeenSet(false),
    m_includeStatusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListHarvestJobsRequest::SerializePayload() const
{
  return {};
}

void ListHarvestJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeChannelIdHasBeenSet)
    {
      ss << m_includeChannelId;
      uri.AddQueryStringParameter("includeChannelId", ss.str());
      ss.str("");
    }

    if(m_includeStatusHasBeenSet)
    {
      ss << m_includeStatus;
      uri.AddQueryStringParameter("includeStatus", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



