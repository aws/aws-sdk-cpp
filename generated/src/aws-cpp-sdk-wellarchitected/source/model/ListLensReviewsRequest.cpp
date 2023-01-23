/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensReviewsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListLensReviewsRequest::ListLensReviewsRequest() : 
    m_workloadIdHasBeenSet(false),
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListLensReviewsRequest::SerializePayload() const
{
  return {};
}

void ListLensReviewsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_milestoneNumberHasBeenSet)
    {
      ss << m_milestoneNumber;
      uri.AddQueryStringParameter("MilestoneNumber", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}



