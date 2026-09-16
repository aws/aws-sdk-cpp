/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListPolicyEventsRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPolicyEventsRequest::SerializePayload() const { return {}; }

void ListPolicyEventsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_policyArnHasBeenSet) {
    ss << m_policyArn;
    uri.AddQueryStringParameter("policyArn", ss.str());
    ss.str("");
  }

  if (m_eventTypesHasBeenSet) {
    for (const auto& item : m_eventTypes) {
      ss << PolicyEventTypeMapper::GetNameForPolicyEventType(item);
      uri.AddQueryStringParameter("eventTypes", ss.str());
      ss.str("");
    }
  }

  if (m_startTimeHasBeenSet) {
    ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startTime", ss.str());
    ss.str("");
  }

  if (m_endTimeHasBeenSet) {
    ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endTime", ss.str());
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
}
