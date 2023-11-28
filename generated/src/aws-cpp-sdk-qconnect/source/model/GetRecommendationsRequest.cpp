/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRecommendationsRequest::GetRecommendationsRequest() : 
    m_assistantIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_waitTimeSeconds(0),
    m_waitTimeSecondsHasBeenSet(false)
{
}

Aws::String GetRecommendationsRequest::SerializePayload() const
{
  return {};
}

void GetRecommendationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_waitTimeSecondsHasBeenSet)
    {
      ss << m_waitTimeSeconds;
      uri.AddQueryStringParameter("waitTimeSeconds", ss.str());
      ss.str("");
    }

}



