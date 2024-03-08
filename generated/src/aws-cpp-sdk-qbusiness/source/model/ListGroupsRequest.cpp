/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ListGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListGroupsRequest::ListGroupsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_updatedEarlierThanHasBeenSet(false)
{
}

Aws::String ListGroupsRequest::SerializePayload() const
{
  return {};
}

void ListGroupsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dataSourceIdHasBeenSet)
    {
      ss << m_dataSourceId;
      uri.AddQueryStringParameter("dataSourceId", ss.str());
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

    if(m_updatedEarlierThanHasBeenSet)
    {
      ss << m_updatedEarlierThan.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("updatedEarlierThan", ss.str());
      ss.str("");
    }

}



