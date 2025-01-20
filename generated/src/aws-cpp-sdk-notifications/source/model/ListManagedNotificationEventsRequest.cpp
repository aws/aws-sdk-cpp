﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListManagedNotificationEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListManagedNotificationEventsRequest::ListManagedNotificationEventsRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_locale(LocaleCode::NOT_SET),
    m_localeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_relatedAccountHasBeenSet(false)
{
}

Aws::String ListManagedNotificationEventsRequest::SerializePayload() const
{
  return {};
}

void ListManagedNotificationEventsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_organizationalUnitIdHasBeenSet)
    {
      ss << m_organizationalUnitId;
      uri.AddQueryStringParameter("organizationalUnitId", ss.str());
      ss.str("");
    }

    if(m_relatedAccountHasBeenSet)
    {
      ss << m_relatedAccount;
      uri.AddQueryStringParameter("relatedAccount", ss.str());
      ss.str("");
    }

}



