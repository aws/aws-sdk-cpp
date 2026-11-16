/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/StartQueryPerformanceMonitorRequest.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartQueryPerformanceMonitorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_queryTypeHasBeenSet) {
    payload.WithString("queryType", PerformanceMonitorQueryTypeMapper::GetNameForPerformanceMonitorQueryType(m_queryType));
  }

  if (m_filterParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterParametersJsonList(m_filterParameters.size());
    for (unsigned filterParametersIndex = 0; filterParametersIndex < filterParametersJsonList.GetLength(); ++filterParametersIndex) {
      filterParametersJsonList[filterParametersIndex].AsObject(m_filterParameters[filterParametersIndex].Jsonize());
    }
    payload.WithArray("filterParameters", std::move(filterParametersJsonList));
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  return payload.View().WriteReadable();
}
