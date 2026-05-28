/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListFailureModeFindingsRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListFailureModeFindingsRequest::SerializePayload() const { return {}; }

void ListFailureModeFindingsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_serviceArnHasBeenSet) {
    ss << m_serviceArn;
    uri.AddQueryStringParameter("serviceArn", ss.str());
    ss.str("");
  }

  if (m_severityHasBeenSet) {
    ss << FindingSeverityMapper::GetNameForFindingSeverity(m_severity);
    uri.AddQueryStringParameter("severity", ss.str());
    ss.str("");
  }

  if (m_failureCategoryHasBeenSet) {
    ss << FailureCategoryMapper::GetNameForFailureCategory(m_failureCategory);
    uri.AddQueryStringParameter("failureCategory", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << FindingStatusMapper::GetNameForFindingStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
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
