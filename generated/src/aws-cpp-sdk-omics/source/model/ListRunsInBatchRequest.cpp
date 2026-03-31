/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/omics/model/ListRunsInBatchRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRunsInBatchRequest::SerializePayload() const { return {}; }

void ListRunsInBatchRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxItemsHasBeenSet) {
    ss << m_maxItems;
    uri.AddQueryStringParameter("maxItems", ss.str());
    ss.str("");
  }

  if (m_startingTokenHasBeenSet) {
    ss << m_startingToken;
    uri.AddQueryStringParameter("startingToken", ss.str());
    ss.str("");
  }

  if (m_submissionStatusHasBeenSet) {
    ss << SubmissionStatusMapper::GetNameForSubmissionStatus(m_submissionStatus);
    uri.AddQueryStringParameter("submissionStatus", ss.str());
    ss.str("");
  }

  if (m_runSettingIdHasBeenSet) {
    ss << m_runSettingId;
    uri.AddQueryStringParameter("runSettingId", ss.str());
    ss.str("");
  }

  if (m_runIdHasBeenSet) {
    ss << m_runId;
    uri.AddQueryStringParameter("runId", ss.str());
    ss.str("");
  }
}
