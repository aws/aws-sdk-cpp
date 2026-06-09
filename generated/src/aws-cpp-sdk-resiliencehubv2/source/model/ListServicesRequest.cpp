/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListServicesRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListServicesRequest::SerializePayload() const { return {}; }

void ListServicesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_systemArnHasBeenSet) {
    ss << m_systemArn;
    uri.AddQueryStringParameter("systemArn", ss.str());
    ss.str("");
  }

  if (m_userJourneyIdHasBeenSet) {
    ss << m_userJourneyId;
    uri.AddQueryStringParameter("userJourneyId", ss.str());
    ss.str("");
  }

  if (m_ouIdHasBeenSet) {
    ss << m_ouId;
    uri.AddQueryStringParameter("ouId", ss.str());
    ss.str("");
  }

  if (m_accountIdHasBeenSet) {
    ss << m_accountId;
    uri.AddQueryStringParameter("accountId", ss.str());
    ss.str("");
  }

  if (m_assessmentStatusHasBeenSet) {
    ss << AssessmentStatusMapper::GetNameForAssessmentStatus(m_assessmentStatus);
    uri.AddQueryStringParameter("assessmentStatus", ss.str());
    ss.str("");
  }

  if (m_policyArnHasBeenSet) {
    ss << m_policyArn;
    uri.AddQueryStringParameter("policyArn", ss.str());
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
