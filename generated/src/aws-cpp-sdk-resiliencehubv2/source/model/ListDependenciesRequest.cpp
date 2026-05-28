/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListDependenciesRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListDependenciesRequest::SerializePayload() const { return {}; }

void ListDependenciesRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_serviceArnHasBeenSet) {
    ss << m_serviceArn;
    uri.AddQueryStringParameter("serviceArn", ss.str());
    ss.str("");
  }

  if (m_queryRangeStartTimeHasBeenSet) {
    ss << m_queryRangeStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("queryRangeStartTime", ss.str());
    ss.str("");
  }

  if (m_queryRangeEndTimeHasBeenSet) {
    ss << m_queryRangeEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("queryRangeEndTime", ss.str());
    ss.str("");
  }

  if (m_queryRangeGranularityHasBeenSet) {
    ss << QueryGranularityMapper::GetNameForQueryGranularity(m_queryRangeGranularity);
    uri.AddQueryStringParameter("queryRangeGranularity", ss.str());
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
