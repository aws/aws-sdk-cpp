/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/GetTimelineEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetTimelineEventRequest::GetTimelineEventRequest() : 
    m_eventIdHasBeenSet(false),
    m_incidentRecordArnHasBeenSet(false)
{
}

Aws::String GetTimelineEventRequest::SerializePayload() const
{
  return {};
}

void GetTimelineEventRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_eventIdHasBeenSet)
    {
      ss << m_eventId;
      uri.AddQueryStringParameter("eventId", ss.str());
      ss.str("");
    }

    if(m_incidentRecordArnHasBeenSet)
    {
      ss << m_incidentRecordArn;
      uri.AddQueryStringParameter("incidentRecordArn", ss.str());
      ss.str("");
    }

}



