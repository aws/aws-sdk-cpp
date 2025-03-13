/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SearchJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String SearchJobsRequest::SerializePayload() const
{
  return {};
}

void SearchJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_inputFileHasBeenSet)
    {
      ss << m_inputFile;
      uri.AddQueryStringParameter("inputFile", ss.str());
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

    if(m_orderHasBeenSet)
    {
      ss << OrderMapper::GetNameForOrder(m_order);
      uri.AddQueryStringParameter("order", ss.str());
      ss.str("");
    }

    if(m_queueHasBeenSet)
    {
      ss << m_queue;
      uri.AddQueryStringParameter("queue", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << JobStatusMapper::GetNameForJobStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

}



