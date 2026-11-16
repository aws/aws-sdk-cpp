/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkflowmonitor/model/ListPerformanceMonitorsRequest.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPerformanceMonitorsRequest::SerializePayload() const { return {}; }

void ListPerformanceMonitorsRequest::AddQueryStringParameters(URI& uri) const {
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

  if (m_monitorStatusHasBeenSet) {
    ss << MonitorStatusMapper::GetNameForMonitorStatus(m_monitorStatus);
    uri.AddQueryStringParameter("monitorStatus", ss.str());
    ss.str("");
  }

  if (m_monitorTypeHasBeenSet) {
    ss << PerformanceMonitorTypeMapper::GetNameForPerformanceMonitorType(m_monitorType);
    uri.AddQueryStringParameter("monitorType", ss.str());
    ss.str("");
  }
}
