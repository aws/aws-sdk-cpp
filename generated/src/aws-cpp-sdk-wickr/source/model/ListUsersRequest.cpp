/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/ListUsersRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListUsersRequest::SerializePayload() const { return {}; }

void ListUsersRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_sortFieldsHasBeenSet) {
    ss << m_sortFields;
    uri.AddQueryStringParameter("sortFields", ss.str());
    ss.str("");
  }

  if (m_sortDirectionHasBeenSet) {
    ss << SortDirectionMapper::GetNameForSortDirection(m_sortDirection);
    uri.AddQueryStringParameter("sortDirection", ss.str());
    ss.str("");
  }

  if (m_firstNameHasBeenSet) {
    ss << m_firstName;
    uri.AddQueryStringParameter("firstName", ss.str());
    ss.str("");
  }

  if (m_lastNameHasBeenSet) {
    ss << m_lastName;
    uri.AddQueryStringParameter("lastName", ss.str());
    ss.str("");
  }

  if (m_usernameHasBeenSet) {
    ss << m_username;
    uri.AddQueryStringParameter("username", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << m_status;
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_groupIdHasBeenSet) {
    ss << m_groupId;
    uri.AddQueryStringParameter("groupId", ss.str());
    ss.str("");
  }
}
