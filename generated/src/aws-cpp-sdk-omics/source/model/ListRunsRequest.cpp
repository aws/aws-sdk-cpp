/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListRunsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRunsRequest::ListRunsRequest() : 
    m_nameHasBeenSet(false),
    m_runGroupIdHasBeenSet(false),
    m_startingTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_status(RunStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListRunsRequest::SerializePayload() const
{
  return {};
}

void ListRunsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_runGroupIdHasBeenSet)
    {
      ss << m_runGroupId;
      uri.AddQueryStringParameter("runGroupId", ss.str());
      ss.str("");
    }

    if(m_startingTokenHasBeenSet)
    {
      ss << m_startingToken;
      uri.AddQueryStringParameter("startingToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << RunStatusMapper::GetNameForRunStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

}



