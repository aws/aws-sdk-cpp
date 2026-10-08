/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/security-ir/model/GetFindingMetricsRequest.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetFindingMetricsRequest::SerializePayload() const { return {}; }

void GetFindingMetricsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_startDateHasBeenSet) {
    ss << m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startDate", ss.str());
    ss.str("");
  }

  if (m_endDateHasBeenSet) {
    ss << m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endDate", ss.str());
    ss.str("");
  }
}
