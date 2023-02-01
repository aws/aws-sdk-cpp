/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/BatchGetRumMetricDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

BatchGetRumMetricDefinitionsRequest::BatchGetRumMetricDefinitionsRequest() : 
    m_appMonitorNameHasBeenSet(false),
    m_destination(MetricDestination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String BatchGetRumMetricDefinitionsRequest::SerializePayload() const
{
  return {};
}

void BatchGetRumMetricDefinitionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_destinationHasBeenSet)
    {
      ss << MetricDestinationMapper::GetNameForMetricDestination(m_destination);
      uri.AddQueryStringParameter("destination", ss.str());
      ss.str("");
    }

    if(m_destinationArnHasBeenSet)
    {
      ss << m_destinationArn;
      uri.AddQueryStringParameter("destinationArn", ss.str());
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



