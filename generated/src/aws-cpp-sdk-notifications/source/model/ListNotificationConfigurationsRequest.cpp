﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListNotificationConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListNotificationConfigurationsRequest::ListNotificationConfigurationsRequest() : 
    m_eventRuleSourceHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_status(NotificationConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListNotificationConfigurationsRequest::SerializePayload() const
{
  return {};
}

void ListNotificationConfigurationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_eventRuleSourceHasBeenSet)
    {
      ss << m_eventRuleSource;
      uri.AddQueryStringParameter("eventRuleSource", ss.str());
      ss.str("");
    }

    if(m_channelArnHasBeenSet)
    {
      ss << m_channelArn;
      uri.AddQueryStringParameter("channelArn", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << NotificationConfigurationStatusMapper::GetNameForNotificationConfigurationStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
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



