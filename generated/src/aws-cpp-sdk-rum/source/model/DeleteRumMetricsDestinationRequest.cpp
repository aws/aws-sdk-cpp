/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/DeleteRumMetricsDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteRumMetricsDestinationRequest::DeleteRumMetricsDestinationRequest() : 
    m_appMonitorNameHasBeenSet(false),
    m_destination(MetricDestination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
}

Aws::String DeleteRumMetricsDestinationRequest::SerializePayload() const
{
  return {};
}

void DeleteRumMetricsDestinationRequest::AddQueryStringParameters(URI& uri) const
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

}



