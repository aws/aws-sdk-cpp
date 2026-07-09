/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListFailureModeAssessmentsRequest::SerializePayload() const { return {}; }

void ListFailureModeAssessmentsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_serviceArnHasBeenSet) {
    ss << m_serviceArn;
    uri.AddQueryStringParameter("serviceArn", ss.str());
    ss.str("");
  }

  if (m_assessmentStatusesHasBeenSet) {
    for (const auto& item : m_assessmentStatuses) {
      ss << AssessmentStatusMapper::GetNameForAssessmentStatus(item);
      uri.AddQueryStringParameter("assessmentStatuses", ss.str());
      ss.str("");
    }
  }

  if (m_startedAfterHasBeenSet) {
    ss << m_startedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startedAfter", ss.str());
    ss.str("");
  }

  if (m_endedBeforeHasBeenSet) {
    ss << m_endedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endedBefore", ss.str());
    ss.str("");
  }

  if (m_sortByHasBeenSet) {
    ss << AssessmentSortFieldMapper::GetNameForAssessmentSortField(m_sortBy);
    uri.AddQueryStringParameter("sortBy", ss.str());
    ss.str("");
  }

  if (m_sortOrderHasBeenSet) {
    ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
    uri.AddQueryStringParameter("sortOrder", ss.str());
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
