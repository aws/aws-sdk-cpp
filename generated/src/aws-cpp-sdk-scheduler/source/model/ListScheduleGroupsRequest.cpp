/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/ListScheduleGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListScheduleGroupsRequest::ListScheduleGroupsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListScheduleGroupsRequest::SerializePayload() const
{
  return {};
}

void ListScheduleGroupsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_namePrefixHasBeenSet)
    {
      ss << m_namePrefix;
      uri.AddQueryStringParameter("NamePrefix", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



