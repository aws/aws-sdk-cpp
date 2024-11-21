﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListNotificationEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListNotificationEventsRequest::ListNotificationEventsRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_locale(LocaleCode::NOT_SET),
    m_localeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_includeChildEvents(false),
    m_includeChildEventsHasBeenSet(false),
    m_aggregateNotificationEventArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListNotificationEventsRequest::SerializePayload() const
{
  return {};
}

void ListNotificationEventsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_localeHasBeenSet)
    {
      ss << LocaleCodeMapper::GetNameForLocaleCode(m_locale);
      uri.AddQueryStringParameter("locale", ss.str());
      ss.str("");
    }

    if(m_sourceHasBeenSet)
    {
      ss << m_source;
      uri.AddQueryStringParameter("source", ss.str());
      ss.str("");
    }

    if(m_includeChildEventsHasBeenSet)
    {
      ss << m_includeChildEvents;
      uri.AddQueryStringParameter("includeChildEvents", ss.str());
      ss.str("");
    }

    if(m_aggregateNotificationEventArnHasBeenSet)
    {
      ss << m_aggregateNotificationEventArn;
      uri.AddQueryStringParameter("aggregateNotificationEventArn", ss.str());
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



