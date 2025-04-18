﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/GetChannelScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetChannelScheduleRequest::SerializePayload() const
{
  return {};
}

void GetChannelScheduleRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_durationMinutesHasBeenSet)
    {
      ss << m_durationMinutes;
      uri.AddQueryStringParameter("durationMinutes", ss.str());
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

    if(m_audienceHasBeenSet)
    {
      ss << m_audience;
      uri.AddQueryStringParameter("audience", ss.str());
      ss.str("");
    }

}



