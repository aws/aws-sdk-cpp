/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListRunTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRunTasksRequest::ListRunTasksRequest() : 
    m_idHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startingTokenHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListRunTasksRequest::SerializePayload() const
{
  return {};
}

void ListRunTasksRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_startingTokenHasBeenSet)
    {
      ss << m_startingToken;
      uri.AddQueryStringParameter("startingToken", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << TaskStatusMapper::GetNameForTaskStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

}



