/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/QueryRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

QueryRange::QueryRange(JsonView jsonValue) { *this = jsonValue; }

QueryRange& QueryRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("granularity")) {
    m_granularity = QueryGranularityMapper::GetQueryGranularityForName(jsonValue.GetString("granularity"));
    m_granularityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataPoints")) {
    Aws::Utils::Array<JsonView> dataPointsJsonList = jsonValue.GetArray("dataPoints");
    for (unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex) {
      m_dataPoints.push_back(dataPointsJsonList[dataPointsIndex].AsObject());
    }
    m_dataPointsHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryRange::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_granularityHasBeenSet) {
    payload.WithString("granularity", QueryGranularityMapper::GetNameForQueryGranularity(m_granularity));
  }

  if (m_dataPointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataPointsJsonList(m_dataPoints.size());
    for (unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex) {
      dataPointsJsonList[dataPointsIndex].AsObject(m_dataPoints[dataPointsIndex].Jsonize());
    }
    payload.WithArray("dataPoints", std::move(dataPointsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
