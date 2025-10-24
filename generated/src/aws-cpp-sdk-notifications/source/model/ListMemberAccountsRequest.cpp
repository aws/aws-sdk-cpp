﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/notifications/model/ListMemberAccountsRequest.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListMemberAccountsRequest::SerializePayload() const { return {}; }

void ListMemberAccountsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_notificationConfigurationArnHasBeenSet) {
    ss << m_notificationConfigurationArn;
    uri.AddQueryStringParameter("notificationConfigurationArn", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_memberAccountHasBeenSet) {
    ss << m_memberAccount;
    uri.AddQueryStringParameter("memberAccount", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << MemberAccountNotificationConfigurationStatusMapper::GetNameForMemberAccountNotificationConfigurationStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_organizationalUnitIdHasBeenSet) {
    ss << m_organizationalUnitId;
    uri.AddQueryStringParameter("organizationalUnitId", ss.str());
    ss.str("");
  }
}
